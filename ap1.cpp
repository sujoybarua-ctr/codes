#include<iostream>
using namespace std;
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,8,9};
cout<<"size="<<sizeof(a);
cout<<"size of 1st element="<<sizeof(a[0]);
int s=sizeof(a);
cout<<s;
    return 0;
}