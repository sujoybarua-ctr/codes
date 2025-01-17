#include<iostream>
#include<cstring>
#define a " such an ugly name !"
using namespace std;
int main()
{
char b[50];
cout<<"enter what ever your name is =";
cin.getline(b,50);
cout<<b<<a<<endl;
cout<<"your name "<<b<<" has "<<strlen(b)-1<<endl;
cout<<"your name takes "<<sizeof(b)<<" bytes of memory ";
    return 0;
}