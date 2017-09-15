#include<iostream>
using namespace std;
int main()
{
  int n,r,x,d,s=0;
  cout<<"enter a number";
  cin>>n;
  x=n;
  while(n>0)
  {
    r=n%10;
    d=r*r*r;
    s=s+d;
    n=n/10;
  }
  if(s==x)
   cout<<"the number is an armstrong number";
  else
   cout<<"the number is not an armstrong number";
  return 0;
}
  
