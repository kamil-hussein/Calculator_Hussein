#include <iostream>
using namespace std;
#include<bits/stdc++.h>

int main()
{
   double num1,num2;
   string op;
   cout<<"Number1: ";
   while(!(cin>>num1))
   {
       cout<<"Input should be numberic."<<endl<<"Number1: ";
       //clear input stream
       cin.clear();
       //discard any previous values
       cin.ignore(123,'\n');
   }
   cout<<"Number2: ";
   while(!(cin>>num2))
   {
       cout<<"Input should be numberic."<<endl<<"Number1: ";
       //clear input stream
       cin.clear();
       //discard any previous values
       cin.ignore(123,'\n');
   }
  
   while(1){
       cout<<"Operation: ";
       cin>>op;
       //convert the string to lower
       transform(op.begin(),op.end(),op.begin(),::tolower);
  
       if(op=="+" || op=="add")
       {
           cout<<"="<<num1+num2;
       }
       else if(op=="-" || op=="subtract")
       {
           cout<<"="<<num1-num2;  
       }  
       else if(op=="*" || op=="multiply")
       {
           cout<<"="<<num1*num2;
       }
       else if(op=="/" || op=="divide")
       {
           cout<<"="<<num1/num2;
       }
       else
       {
           //print a warning message
           cout<<"Invalid operation. Try again"<<endl;
           continue;
       }
       break;
   }
  
  
  
}

