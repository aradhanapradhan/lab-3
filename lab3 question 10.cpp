#include<iostream>
using namespace std;
int main()
{
 char c;
 cout<<"enter a character";
 cin>>c;
 if(c>='a'&&c<='z')
 {
  cout<<"the character is small"<<c;
 }
 else
 {
  cout<<"the character is capital"<<c;
 }
 return 0;
}
