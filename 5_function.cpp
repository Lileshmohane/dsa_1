#include<iostream>
using namespace std;
 /*int power(int a ,int b )// we take a function  a anb are input parameter as a argument 
 // int return type  power is a function 
 {
 int ans=1;
 for (int  i = 0; i <=b; i++)
 {
     ans = ans *a;
 }
 return ans;
 }
int main(){
    // pow of (a , b) use for a functionn 
   int a ,b; // make a  parametr 
cin>>a>>b;
    int ans =  power (a,b);
    cout<<"your ans is "<< ans<<endl;*/
  /*  int power(){
        int a,b ;
    cin>>a>>b;
 int ans=1;
 for (int  i = 0; i <=b; i++)
 {
     ans = ans *a;
 }
 return ans;
 }
int main(){
    // pow of (a , b) use for a function
    int ans = power ();
    cout<<"your ans is "<< ans<<endl;
    ans = power ();
    cout<<"your ans is "<< ans<<endl;
    ans = power ();
    cout<<"your ans is "<< ans<<endl;
    ans = power ();
    cout<<"your ans is "<< ans<<endl;
*/
 // prime number or not 
 //  1-- > prime number 
 //  0 --> not a prime number
  
   bool isprime(int n){

       for (int  i = 2; i <n; i++)
       {
            if (n%i == 0 )
            {
                return 1;
            }
            return 0;
       }
       
   }
  int main (){
  int  a ;
  cout <<"enter the number : "<<endl;
  cin>>a;
  bool index =  isprime(a);
  if (index)
  {
      cout<<"your number is even : "<<endl;
  }
  else
  {
      cout<<"you number is odd : "<<endl;
  }
  
  return 0;
}
