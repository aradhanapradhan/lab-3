#include<iostream>
using namespace std;
int main()
{
  int n,r,x,a=0,a1=1;
  cout<<"enter a number";
  cin>>n;
  x=n;
  r=n%10;
  while(n>0)
  {
    n=n/10;
    a++;
  }
  while(a>a1)
  {
    x=x/10;
    a1++;
  } 
  cout<<"the first digit is="<<x;
  cout<<"the last digit is="<<r;
  return 0;
}

  
    
