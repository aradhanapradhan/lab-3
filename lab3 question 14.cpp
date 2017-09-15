#include<iostream>
using namespace std;
int main()
{
  double a,b,c;
  cout<<"enter 3 angles of a triangle";
  cin>>a>>b>>c;
  if(a+b+c==180)
   cout<<"the triangle is valid";
  else
   cout<<"invalid triangle";
  return 0;
}
