#include<iostream>
using namespace std;
int main()
{
  float bs,g,hra,da;
  cout<<"enter the basic salary of an employee";
  cin>>bs;
  if(bs<=10000)
  {
    hra=bs*0.2;
    da=bs*0.8;
  }
  else if(bs<=20000)
  {
    hra=bs*0.25;
    da=bs*0.9;
  }
  else
  {
    hra=bs*0.3;
    da=bs*0.95;
  }
  g=bs+hra+da;
  cout<<"Gross salary of employee is "<<g;
  return 0;
}
