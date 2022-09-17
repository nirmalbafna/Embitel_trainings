#include <iostream>
using namespace std;
void printArray(int *ptr, const int s) {
    for (int i = 0; i < s; i++)
        cout << *(ptr+i) << '\t' << ptr+i << '\n';
    cout << endl;
}
void modifyValues(void* vPtr, int count, int val) {
    int *intPtr = static_cast<int*> (vPtr);
    for (int i = 0; i < count; i++)
        *(intPtr+i) = val;
}
int main() {
    const int SIZE = 6;
    int a[SIZE] = {0};
    void *vPtr = static_cast<void*> (a);
    printArray(a,SIZE);
    modifyValues(vPtr, 2, -1);
    printArray(a,SIZE);
return 0;
}
