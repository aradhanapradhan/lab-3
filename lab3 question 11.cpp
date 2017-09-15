#include<iostream>
using namespace std;
int main()
{
  int w;
  cout<<"Enter week day no";
  cin>>w;
  if(w==0)
   cout<<"sunday"<<w;
  else if(w==1)
   cout<<"monday"<<w;
  else if(w==2)
   cout<<"tuesday"<<w;
  else if(w==3)
   cout<<"wednesday"<<w;
  else if(w==4)
   cout<<"thursday"<<w;
  else if(w==5)
   cout<<"friday"<<w;
  else if(w==6)
   cout<<"saturday"<<w;
  else
   cout<<"default week no"<<w;
  return 0;
}
