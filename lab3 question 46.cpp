#include<iostream>
using namespace std;
int main()
{
  int n1,n2,i,p,gcd;
  cout<<"enter 2 numbers";
  cin>>n1>>n2;
  for(i=1;i<=n1&&i<=n2;i++)
  {
    if(n1%i==0&&n2%i==0)
     gcd=i;
  }
  p=(n1*n2)/gcd;
  cout<<"LCM="<<p;
  return 0;
}

