#include<iostream>
using namespace std;
int main()
{
 char a;
 cout<<"enter a character";
 cin>>a;
 if((a>='a'&&a<='z')||(a>='A'&&a<='Z'))
 {
  cout<<"the character is alphabet"<<a;
 }
 else if(a>='0'&&a<='9')
 {
  cout<<"the character is digit"<<a;
 }
 else
 {
  cout<<"the character is special character"<<a;
 }
 return 0;
}
