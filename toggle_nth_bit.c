// C program to toggle K-th bit of a number N

#include <stdio.h>

// Function to toggle the kth bit of n
int toggleBit(int n, int k)
{
	return (n ^ (1 << (k - 1)));
}

// Driver code
int main()
{
	int n = 10, k = 1;

	printf("%d\n", toggleBit(n, k));

	return 0;
}
