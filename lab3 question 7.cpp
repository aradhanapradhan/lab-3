#include<iostream>
using namespace std;
int main()
{
 char a;
 cout<<"enter a character";
 cin>>a;
 if((a>='a'&&a<='z')||(a>='A'&&a<='Z'))
 {
  cout<<"the character is an alphabet"<<a;
 }
 else
 {
  cout<<"the character is not an alphabet"<<a;
 }
 return 0;
}
