#include<iostream>
using namespace std;

int main(){
    /*
int a= 2;
int b= 3;
cout<<"a&b : "<<(a&b)<<endl; // and operator 
cout<<"a|b : "<<(a|b)<<endl;// or operator 
cout<<"~a : "<<~a<<endl;//not operator
cout<<"a^b : "<<(a^b)<<endl;//xor operator
// left shift
cout<<(5<<1)<<endl;
cout<<(16<<2)<<endl;
//right shift 
cout<<(17>>1)<<endl;
cout<<(5>>1)<<endl;*/
 // increment and decrement 
/* int i = 7;
 cout<<(++i)<<endl;
 cout<<(i++)<<endl;
 cout<<(i--)<<endl;
 cout<<(--i)<<endl;*/
 //que ans 
/* int main(){
int a = 1;
int b = 5;
if (a-- > 0 && ++b>2){
    cout<<"stage 1 inside if "<<endl;
}
{
 else
 {
     cout<<" stage 2 inside else ";
 }
    cout<<a<<" "<<b<<endl;
}
*/
/*int n;
cout<<"enter the valu what you wante ";
cin>>n;
cout<<"printing counting  1 to n ";
for (int  i = 1; i <=n; i++)// first initialigation second condition third incre or decre 
{
    cout<<i<<" \n";
} */
// when i am written this que in deffrent type 
/* int n;
cout<<"enter the valu what you wante ";
cin>>n;
cout<<"printing counting  1 to n ";
for(;  ; )
{
 if (i<=6)
 {
     cout<<i<<endl;
 }
 else
 {
   break;  
 }
 i++;
}*/
int n;
cout<<"enter the value what you wante ";
cin>>n;
 int sum =0;
for (int i = 1; i <=n; i++)
{
   sum +=i;
}
cout<<sum<<endl;
return 0;3
}
