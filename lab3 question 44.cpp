#include<iostream>
using namespace std;
int main()
{
  int i,n,f=1;
  cout<<"enter a number";
  cin>>n;
  for(i=n;i>=1;i--)
  {
    f=f*i;
  }
  cout<<"the factorial is="<<f;
  return 0;
}



