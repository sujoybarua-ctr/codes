#include<iostream>
#include<cstring>
using namespace std;
int main()
{
char a[25],b[25];
cout<<"enter your first name=";
cin.getline(a,25);
cout<<"Enter your last name=";
cin.getline(b,25);
cout<<"your full name is ";
strcat(a,b);
cout<<a;
    return 0;
}