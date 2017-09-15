#include<iostream>
using namespace std;
int main()
{
  int a,b,c;
  cout<<"Enter 3 numbers";
  cin>>a>>b>>c;
  if(a>b&&a>c)
  {
    cout<<"the maximum no is="<<a;
  }
  else if(b>a&&b>c)
  {
    cout<<"the maximum no is="<<b;
  }
  else
  {
    cout<<"the maximum no is="<<c;
  }
  return 0;
}
