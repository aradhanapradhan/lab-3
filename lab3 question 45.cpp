#include<iostream>
using namespace std;
int main()
{
  int i,n1,n2,gcd;
  cout<<"enter 2 numbers";
  cin>>n1>>n2;
  for(i=1;i<=n1&&i<=n2;i++)
  {
    if(n1%i==0&&n2%i==0)
     gcd=i;
  }
  cout<<"the greatest common divisor is "<<gcd;
  return 0;
}


