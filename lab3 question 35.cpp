#include<iostream>
using namespace std;
int main()
{
   int n,s=0,c;
   cout<<"enter a number";
   cin>>n;
   while(n>0)
   {
     c=n%10;
     s=s+c;
     n=n/10;
   }
   cout<<"the sum="<<s;
   return 0;
}

