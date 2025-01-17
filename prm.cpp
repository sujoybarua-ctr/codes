#include<iostream>
using namespace std;
int main ()
{
int a;
bool pr;
cin>>a;
for (int i = 2; i*i <a; i++)
{
if (a%i==0)
{
pr=true; break;
}else pr = false;

}
if (pr)
{
    
cout<<"not ";
}
else cout<<"is prime";
    return 0;
}