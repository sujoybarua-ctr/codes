#include<iostream>
using namespace std;
int main()
{
int id[10];
string dep[10];
int sal[10];
int t=0;
for (int i = 0; i <10; i++)
{
cout<<"enter id of employee "<<i+1<<"=";
cin>>id[i];
cout<<"enter dep of employee "<<i+1<<"=";
cin>>dep[i];
cout<<"enter salary of employee"<<i+1<<"=";
cin>>sal[i];
int bo=sal[i]/2;
cout<<"bonus is "<<bo;
t+=sal[i];

}
int max=sal[0];
for (int i = 0; i <10; i++)
{
    if (sal[i]>max)
{
max=sal[i];
}


}
cout<<"\ntotal salary="<<t<<endl;
cout<<"average salary="<<t/10<<endl;
cout<<"highest salary="<<max;
    return 0;
}