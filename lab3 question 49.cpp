#include<iostream>
using namespace std;
int main()
{
   int i,n,j,c,s=0;
   cout<<"enter the value of n";
   cin>>n;
   for(i=2;i<=n;i++)
   { 
     c=0;
     for(j=2;j<=i/2;j++)
     {
       if(i%j==0)
       {
         c=1;
         break;
       }
     }
     if(c==0&&n!=1)
     {
       s=s+i;
     }
   }
   cout<<"sum of prime numbers is="<<s;
   return 0;
}
  
