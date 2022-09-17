int main() {
 int i = 99;
 void* vp = &i;
 // Can't dereference a void pointer:
 *(int*)vp = i; // Compile-time error
 // Must cast back to int before dereferencing:
 *((int*)vp) = 3;
} ///:~
