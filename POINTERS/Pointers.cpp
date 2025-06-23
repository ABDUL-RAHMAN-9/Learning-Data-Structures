// #include <iostream>
// using namespace std;

// int main()
// {
//     int var1 = 10;
//     int var2 = 30;

//     int *ptr = &var1;
//     cout << "Ptr value is now : " << *ptr << endl;

//     // chagning the address
//     ptr = &var2;
//     cout << "Change the ptr address to:" << *ptr << endl;

//     // size of ptr
//     cout << "Size of Pointers: " << sizeof(ptr) << endl;
//     cout << "\n\n";

//     int a = 10;
//     int *ptr3 = &a;
//     int **parentPtr = &ptr3;

//     cout << &a << endl;
//     cout << ptr3 << endl;
//     cout << parentPtr << endl;

//     // derefenence the value
//     cout << *(&a) << endl;
//     cout << *(ptr3) << endl;
//     cout << **(parentPtr) << endl;

//     return 0;

// }

//! Pass by reference using pointer
#include <iostream>
using namespace std;
void changeA(int *ptr)
{
    *ptr = 20;
}
int main()
{
    int a = 10;

    changeA(&a);
    cout << "value of a is now :" << a;

    return 0;
}
