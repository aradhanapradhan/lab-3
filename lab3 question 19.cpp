#include<iostream>
using namespace std;
int main()
{
  float p,c,b,m,co,t,per,grade;
  cout<<"enter marks of physics";
  cin>>p;
  cout<<"enter marks of chemistry";
  cin>>c;
  cout<<"enter marks of biology";
  cin>>b;
  cout<<"enter marks of mathematics";
  cin>>m;
  cout<<"enter marks of computer";
  cin>>co;
  t=p+c+b+m+co;
  per=(t/500)*100;
  if(per>=90)
    cout<<"grade A "<<per<<"%";
  else if(per>=80)  
    cout<<"grade B "<<per<<"%";
  else if(per>=70)
    cout<<"grade C "<<per<<"%";
  else if(per>=60)
    cout<<"grade D "<<per<<"%";
  else if(per>=40)
    cout<<"grade E "<<per<<"%";
  else
    cout<<"grade F "<<per<<"%";
  return 0;
}
