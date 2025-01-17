#include<iostream>
using namespace std;
int main()
{
int a[]={1,2,3,4,5,6,7};
int c=0;
for(auto i: a)
{cout<<i;
c++;}  
cout<<"lenth of array is "<<c;  
    return 0;
}