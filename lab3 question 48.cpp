#include<iostream>
using namespace std;
int main()
{
  int i,n,r,c=0,j;
  cout<<"enter the value of n";
  cin>>n;
  for(i=1;i<=n;i++)
  {
    for(j=2;j<n;j++)
    {
      r=n%j;
      if(r==0)
       c=c+1;
      else
       c=0;
    if(c==0)
      cout<<"the number is prime"<<j;
    else
      cout<<"number is not prime"<<j;
    }
  }
  return 0;
}

   

  

 
