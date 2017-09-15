#include<iostream>
using namespace std;
int main()
{
  int a;
  cout<<"Enter a number";
  cin>>a;
  if(a>0)
  {
    cout<<"the no is positive"<<a;
  }
  else if(a<0)
  {
    cout<<"the no is negative"<<a;
  }
  else
  {
    cout<<"the no is zero"<<a;
  }
  return 0;
}
