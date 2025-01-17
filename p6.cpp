#include<iostream>
#include<string.h>
using namespace std;
int main ()
{
char str1[25],str2[25];
cout<<"enter 1st word=";
cin.getline(str1,25);
cout<<"enter 2nd word=";
cin.getline(str2,25);
if (strcmp(str1,str2)==0)
{
cout<< "they match\n";
}
else cout<<"they dont match\n";

strcat(str1,str2);
cout<< str1<<endl;

    return 0;
}