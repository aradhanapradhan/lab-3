#include<iostream>
using namespace std;
int main()
{
  int cp,sp,p,l;
  cout<<"enter the cost price";
  cin>>cp;
  cout<<"enter the selling price";
  cin>>sp;
  if(sp>cp)
  {
    p=sp-cp;
    cout<<"profit="<<p;
  }
  else
  {
    l=cp-sp;
    cout<<"loss="<<l;
  }
  return 0;
}  
