#include<iostream>
#include<string.h>
using namespace std;
#define a " you have a great personality !";
int main()
{
char b[10];
cout<<"what is your name? enter =";
cin.getline(b,10);
cout<<"hello "<<b<<a;
cout<<"\nyour name of "<<strlen(b)<<" consists of "<<sizeof(b)<<" bits of memory";
    return 0;
}