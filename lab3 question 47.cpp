#include<iostream>
using namespace std;
int main()
{
   int n,i,c=0,r;
   cout<<"enter a number";
   cin>>n;
   for(i=2;i<n;i++)
   {
     r=n%i;
     if(r==0)
        c=c+1;
     else
        c=0;
   }
   if(c==0)
    cout<<"it is a prime number";
   else
    cout<<"it is not a prime number";
   return 0;
}


