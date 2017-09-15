#include<iostream>
using namespace std;
int main()
{
  int a;
  cout<<"Enter a no";
  cin>>a;
  if(a%5==0&&a%11==0)
  {
   cout<<"the no is divisible by 5 and 11"<<a;
  }
  else
  {
   cout<<"the no is not divisible by 5 and 11"<<a;
  }
  return 0;
}
