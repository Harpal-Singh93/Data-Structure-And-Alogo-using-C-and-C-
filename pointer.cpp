//\Pointer are used for the program that external to code for e.g for accessing
// heap memory and for comminucate with monitor,keyboard,harddisk whatever outside
// our code. 1. heap memory 2. accessing resources 3. parameter passing

#include<iostream>
using namespace std;
int main()
{
    /// Pointer in case of a Variable
    int a = 5;
    int *p;
    p = &a;
    cout<<"the value of a using pointer "<<*p<<endl;
    cout<<"the address of a "<<p<<endl;

     // Pointer in case of an array

    
     
    return 0;
}
