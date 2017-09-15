#include<iostream>
using namespace std;
int main()
{
  char c;
  cout<<"enter a character";
  cin>>c;
  if((c=='a'||c=='A')||(c=='e'||c=='E')||(c=='i'||c=='I')||(c=='o'||c=='O')||(c=='u'||c=='U'))
  {
   cout<<"the character is a vowel"<<c;
  }
  else
  { 
   cout<<"the character is a consonant"<<c;
  }
 return 0;
} 
