#include<iostream>
using namespace std;
int main()
{
    int n[5];

int min=n[0];
for (int i = 0; i <5; i++)
{
cout<<"enter the marks of student "<<i+1<<"=";
cin>>n[i];
if (n[i]>=0)
{
cout<<"marks of student "<<i+1<<"="<<n[i]<<endl;

if (n[i]<min)
{
    min=n[i];
}

}else cout<<"invalid";
}
int max=n[0];
for (int i = 0; i <5; i++)
{
    if (n[i]>max)
    {
        max=n[i];
    }
    
}

cout<<"maximum number is ="<<max<<endl;
cout<<"minimum number  is="<< min;
return 0;
}