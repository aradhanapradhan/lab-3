#include<iostream>
using namespace std;
int main()
{
  float unit,amt,billamt; 
  cout<<"enter electricity unit charges";
  cin>>unit;
  if(unit<=50)
    amt=unit*0.5;
  else if(unit<=150)
    amt=25+((unit-50)*0.75);
  else if(unit<=250)
    amt=100+((unit-100)*1.20);
  else 
    amt=220+((unit-250)*1.50);
  billamt=amt+1.2;
  cout<<"the bill amt is="<<billamt;
  return 0;
}

  
