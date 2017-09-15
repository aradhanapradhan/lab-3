#include<iostream>
using namespace std;
int main()
{
  int a,b,c;
  cout<<"enter 3 sides of a triangle";
  cin>>a>>b>>c;
  if(a==b&&b==c)
   cout<<"equilateral triangle";
  else if(a==b||b==c||a==c)
   cout<<"isosceles triangle";
  else
   cout<<"scalene triangle";
  return 0;
}
