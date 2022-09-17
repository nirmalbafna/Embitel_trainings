#include <iostream>
using namespace std;
void printArray(double* a, int arraySize) {
    cout << endl;
    for (int i = 0; i < arraySize; i++)
        cout <<*(a + i) << " ";
    cout << endl;
}
void printBinary(const unsigned char val) {
  for(int i = 7; i >= 0; i--)
    if(val bitand (1 << i))
      cout << "1";
    else
      cout << "0";
}
int main() {
    const int SIZE = 5;
    double a[SIZE] = {0};
    unsigned char* chPtr = reinterpret_cast<unsigned char*> (a);
    printArray(a, SIZE);
    for(int i = sizeof(double)-1; i >= 0 ; i--)
        printBinary(chPtr[i]);
    for (int i = 0; i < sizeof(double); i++)
        *(chPtr + i) = 1;
    printArray(a, SIZE);
    for(int i = sizeof(double)-1; i >= 0 ; i--)
        printBinary(chPtr[i])
return 0;
}
