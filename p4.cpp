#include<iostream>
#include<cstring>
using namespace std;
int main()
{
char key[25],buff[25];
cout<<"enter key=";
cin.getline(key,25);
cout<<"enter next line to add it to key=";
cin.getline(buff,25);
strcat(key,buff);
cout<<key<<endl;
cout<<buff;
    return 0;
}