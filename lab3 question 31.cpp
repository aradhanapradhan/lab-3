#include<iostream>
using namespace std;
int main()
{
  int a=0,n;
  cout<<"enter a number";
  cin>>n;
  while(n>0)
  {
    n=n/10;
    a++;
  }
  cout<<"no of digits="<<a;
  return 0;
}

  
