#include <iostream>
using namespace std;

int main() 
{
  int n,i,x,d,s,r;
  cout<<"enter the value of n\n";
  cin>>n;
  for(i=1;i<=n;i++)
  {
    s=0;x=i;
    while(x!=0)
    {
      r=x%10;
      d=r*r*r;
      s=s+d;
      x=x/10;
    }
    if(s==i)
     cout<<i<<" "<<endl;
  } 
	return 0;
}