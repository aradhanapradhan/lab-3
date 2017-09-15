#include<iostream>
using namespace std;
int main()
{
  int n,x,rev=0,r;
  cout<<"enter a number";
  cin>>n;
  x=n;
  while(n>0)
  {
    r=n%10;
    rev=rev*10+r;
    n=n/10;
  }
  if(rev==x)
   cout<<"the number is a palindrome number";
  else
   cout<<"the number is not a palindrome number";
  return 0;
}

