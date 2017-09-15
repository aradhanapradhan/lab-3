#include<iostream>
#include<cmath>
using namespace std;
int main()
{
   int a,z,b,n,k,x,y=0, m;
   cout<<"enter a number";
   cin>>n;
   z=n;
   x=n;
   b=n%10;
   while(n!=0)
   {
     a=n%10;
     n=n/10;
   }
   while(x>0)
   {
     x=x/10;
     y++;
   }
  k=z/10;
  m=k%((int)pow(10,(y-2)));
  cout<<b<<m<<a;
  return 0;
}


  
