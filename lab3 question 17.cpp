#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  float b,a,c,x,y1,y2,r,i;
  cout<<"enter the coeficients of a,b,c of a quadratic equation";
  cin>>a>>b>>c;
  x=(b*b)-(4*a*c);
  if(x>0)
  {
    y1=(-b+pow(x,0.5))/2*a;
    y2=(-b-pow(x,0.5))/2*a;
    cout<<"the roots are real and different";
    cout<<"y1="<<y1;
    cout<<"y2="<<y2;
  }
  else if(x==0)
  {
    y1=(-b+pow(x,0.5))/2*a;
    cout<<"the roots are real and same";
    cout<<"y1=y2="<<y1;
  }
  else
  {
    r=-b/2*a;
    i=(-b+pow(x,0.5))/2*a;
    cout<<"roots are complex and imaginary";
    cout<<"real part="<<r;
    cout<<"imaginary part="<<i;
  }
  return 0;
}
