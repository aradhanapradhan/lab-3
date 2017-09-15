#include<iostream>
using namespace std;
int main()
{
  int m;
  cout<<"Enter month no";
  cin>>m;
  if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
   cout<<"no of days =31 in" <<m;
  else if(m==4||m==6||m==9||m==11)
   cout<<"no of days =30 in" <<m;
  else if(m==2)
   cout<<"no of days =28 or 29" <<m;
  else
   cout<<"default month no" <<m;
  return 0;
}
