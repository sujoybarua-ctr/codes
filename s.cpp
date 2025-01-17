#include<iostream>
#include<cstring>
using namespace std;
int main()
{
char a[25],d[25];
cout<<"enter key=";
cin.getline(a,25);
cin.getline(d,25);
strcpy(a,d);
cout<<a<<endl;
cout<<d;
    return 0;
}