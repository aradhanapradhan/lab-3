#include<iostream>
using namespace std;
int main()
{
  int i,n,r;
  cout<<"enter a number";
  cin>>n;
  for(i=1;i<=n;i++)
  {
    r=n%i;
    if(r==0)
    {
     cout<<"the factor is="<<i<<endl;
    }
    else
    {
     cout<<"not factor="<<i<<endl;
    }
  }
  return 0;
}

    
