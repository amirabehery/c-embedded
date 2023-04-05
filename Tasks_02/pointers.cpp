#include <iostream>

// pass by value
void swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}

// pass by Pointer
void swapByPointer(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

// pass by Reference
void swapByReference(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int x1 = 5,  x2 = 3; 
    // int *p = &x1;
    // swap(x1, x2);
    // printf("x1 : address %x, address of the pointer %x", &x1, p);
    std:: cout << x1 << x2 << std::endl;

    // swapByPointer(&x1, &x2);
    // std:: cout << x1 << x2 << std::endl;

    swapByReference(x1, x2);
    std:: cout << x1 << x2 << std::endl;
    return 0;
}