#include<iostream>
using namespace std;

int main()
{
    int size;
   cout<<"Enter size of array"<<endl;
   
   cin>>size;

   int A[size];
  for(int i = 0;i<size;i++)
  {
      A[i]=i;
  }
  for (int x:A){
      cout<<x<<endl;
  }
    // for(int i = 0;i<size;i++)
    // {
    //     cout<<A[i]<<endl;
    
    // }
    return 0;
}
