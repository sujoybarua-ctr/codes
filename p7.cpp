#include<iostream>
using namespace std;
int str (char st[])
{
 int i=1;
while (st[i]!='\0')
i++;

return i;
}
int main()
{
char a[]={'a','s','m','\0'};

cout<<str(a);

    return 0;
}