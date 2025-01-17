#include<iostream>
using namespace std;
int main()
{
float a[3];
for (int i = 0; i <3; i++)
{
    cout<<"enter cgpa of student "<<i+1<<"=";
    cin>>a[i];
}
float max=a[0];
float min=a[0];
for (int i = 0; i <3; i++)
{
if (a[i]>max)
{
    max=a[i];
}

}
for (int i = 0; i <3; i++)
{
if (a[i]<min)
{
    min=a[i];
}}
cout<<max<<endl;
cout<<min;
    return 0;
}