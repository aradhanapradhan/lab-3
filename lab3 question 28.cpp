#include<iostream>
using namespace std;
int main()
{
  int i,sum=0,n;
  cout<<"enter the value of n";
  cin>>n;
  for(i=2;i<=n;i=i+2)
  {
    sum=sum+i;
  }
  cout<<"sum="<<sum;
  return 0;
}


