#include<iostream>
using namespace std;
int main()
{
int r;
cout<<"enter the range =";
cin>> r;
int fib[r];
fib[0]=0;
fib[1]=1;
for (int i = 2; i <r; i++)
{
fib[i]=fib[i-2]+fib[i-1];

}
for (int j = 0; j<r; j++)
{
   cout<< fib[j]<<endl;
}

    return 0;
}