#include<iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
    char name;
};

int main()
{
    // struct Rectangle r1;
    struct Rectangle r1 = {3,4};
    r1.length = 10;
    r1.breadth = 5;
    cout<<"The size of structure is "<<sizeof(Rectangle)<<endl;
    // as it easy for machine to calculate same types easily so it will first give char 4 bytes but at the 
 // time of execution it will take only 1 byte this concept is known as padding. consider it with help of medicine
 // analogy single tablet versus whole patta
    cout<<"The area is "<<r1.length*r1.breadth<<endl;
   
  
    return 0;
}
