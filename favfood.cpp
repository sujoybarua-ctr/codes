#include<iostream>
#include<cstring>
using namespace std;
int main()
{
char b[14];
char a[]="mango";
while (strcmp(a,b)!=0)
{cout<<"please input my fav fruite=";
    cin.getline(b,14);
}
cout<<"correct!";
    return 0;
}