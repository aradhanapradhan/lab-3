#include<iostream>
using namespace std;
int main()
{
   int i,j,n,c,x,r;
   cout<<"enter a number";
   cin>>n;
   for(i=2;i<n;i++)
   {
     if(n%i==0)
     {
       x=i;c=0;
       for(j=2;j<x;j++)
       {
         r=x%j;
         if(r==0)
          c=c+1;
       }
       if(c==0)
        cout<<"the prime factor of number is="<<x<<endl;
       else
        break;
     }
   }
   return 0;
}


