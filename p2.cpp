#include<iostream>
#include<cstring>
using namespace std;
int main()
{
char f[]={"strawberry"};
char buffer[70];
do
{
    cout<<"my favorite fruite is =";
    cin>>buffer;
} while (strcmp(f,buffer)!=0);

cout<<"youre right i guess";

    return 0;
}