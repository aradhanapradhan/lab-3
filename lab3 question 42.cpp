#include<iostream>
using namespace std;
int main()
{
  int p,y=1,n,i;
  cout<<"enter a number";
  cin>>n;
  cout<<"enter power";
  cin>>p;
  for(i=1;i<=p;i++)
  {
    y=y*n;
  }
 cout<<"result="<<y;
 return 0;
}

