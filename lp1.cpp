#include<iostream>
using namespace std;
int main()
{
int a,b;
cout<<"enter non negative integers ";
cin>>a>>b;
if (a<0 || b<0)
{
   cout<<"invald input";
}
int comd=1;
for (int i = 1; i <=a && i<=b; i++)
{
    if (a%i==0 && b%i==0)
    {
  comd=i;
    }
    
}
cout<<"the ans ="<<comd;


    return 0;
}