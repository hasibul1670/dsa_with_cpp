
#include <iostream>
using namespace std;

int *createPointer()
{
    int *ptr = new int(100); // Allocate memory
    return ptr;
}

int main()
{
    int *ptr = new int; // Dynamic Memory Allocation
    *ptr = 45;
    cout << "DMA -> " << *ptr << endl;
    delete ptr;
    // ptr = nullptr;
    if (ptr == nullptr)
    {
        cout << "Memory has been successfully freed!" << endl;
    }
    else
    {
        cout << "Pointer is still pointing to an address!" << endl;
    }

    int *ptr2 = createPointer();

    cout << "Value: " << *ptr << endl; // Valid access

    delete ptr; // Memory deallocated
    // Accessing after delete: Dangling pointer
    cout << "After delete: " << *ptr << endl; //! Undefined Behavior
    return 0;
}
