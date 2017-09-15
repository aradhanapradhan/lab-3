#include<iostream>
using namespace std;
int main()
{
  int amt,s,a,m,t,x,y;
  cout<<"ENTER AMOUNT";
  cin>>amt;
  while(amt>=500)
  {
   s=amt/500;
   amt=amt%500;
   cout<<"no of Rs500="<<s;
  }
  while(amt>=100)
  {
   a=amt/100;
   amt=amt%100;
   cout<<"no of Rs100="<<a;
  }
  while(amt>=50)
  {
    m=amt/50;
    amt=amt%50;
    cout<<"no of Rs50="<<m;
  }
  while(amt>=20)
  {
   t=amt/20;
   amt=amt%20;
   cout<<"no of Rs20="<<t;
  }
  while(amt>=10)
  {
   x=amt/10;
   amt=amt%10;
   cout<<"no of Rs10="<<x;
  }
  while(amt>=5)
  {
   y=amt/5;
   amt=amt%5;
   cout<<"no of Rs5="<<y;
  }
 return 0;
} 
