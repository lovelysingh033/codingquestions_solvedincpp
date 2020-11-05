//Write a code to print uppercase and lowercase in cpp

#include <iostream>
using namespace std;
int main() {
   char ch;
   cin>>ch;
   int a=ch;
   //First method
   if(a>=65 && a<=90)
   cout<<"uppercase"<<endl;
   else if(a>=97 && a<=122)
   cout<<"lowercase"<<endl;
   else
   cout<<"invalid"<<endl;
   //second method
   if(ch>='A' && ch<='Z')
   cout<<"Uppercase"<<endl;
   else if
   (ch>='a' && ch<='z')
   cout<<"Lowercase"<<endl;
   else
   cout<<"Invalid";
   return 0;
}
