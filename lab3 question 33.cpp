#include<iostream>
using namespace std;
int main()
{
  int n,x,r,a=0,a1=1,sum;
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
  sum=x+r;
  cout<<"the sum of first and last digit is="<<sum;
  return 0;
}

