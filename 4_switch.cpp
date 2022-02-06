#include<iostream>
using namespace std;

int main(){
 /* int num =2;
  switch (num)
  {
  case 1:
      cout<<"first "<<endl;
      break;
      case 2:
      cout<<"second "<<endl;
      break;
  
  default:
  cout<<"this is defalt case  ";
      break;
  }
  char ch ='l';
  switch (ch)
  {
  case 1:
      cout<<"first "<<endl;
      break; // when the codition is  true or false so its brake 
      case 'l':
      cout<<"charecter "<<endl;
      break;
  default:
  cout<<"this is defalt case  ";
      break;
  }*/
  // make a calculater in switch statemant 
 int a ,b;
  cout<<"enter the value of a "<<endl;
  cin>>a;
  cout<<"enter the value of b "<<endl;
  cin>>b;
   char op;
   cout<<"enter the operation you want to perform "<<endl;
   cin>>op;
   switch (op)
   {
   case '+':
       cout<<(a+b)<<endl;
       break;
   case '-':
       cout<<(a-b)<<endl;
       break;
   case '*':
       cout<<(a*b)<<endl;
       break;
   case '/':
       cout<<(a/b)<<endl;
       break;
   case '%':
       cout<<(a%b)<<endl;
       break;
   
   default:
       break;
   }
   // make a program to talal amount 1330 how many note in 100 and  50 and 20 and  10
   
return 0;
}
