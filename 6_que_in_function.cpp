#include<iostream>
using namespace std;
/*
// 1 in caseof even 

// 0 in case of odd
 bool iseven(int a)
 {  //odd
     if (a&1)
     {
         return 0;
     }
      else
      { // even
          return 1;
      }
      
 }
int main(){
// find even or odd number 
int num ;
cin>>num;
 if (iseven(num))
 {
     cout<<"number is even "<<endl;
 }
 else
 {
     cout<<"number is odd"<<endl;
 }
 */
//  find a ncr 
 /*int factorial (int n)// take a input n
{
     int  fact = 1;
    for (int i = 1; i <n; i++)
    {
        fact = fact *i;
    }
   return fact;  
} 
int ncr (int n  , int r )
{   int  num  = factorial(n);
    int  den = factorial(r)*factorial(n-r);
     int ans = num/den;
     return ans;
}
int main (){
 int n,r;
 cin>>n>>r;
 cout<<"ans is "<<ncr(n,r);
*/

 // counting eliment
  /*void countingeliment(int n )
 {
     for (int  i = 1; i <=n; i++)
     {
        cout<<n<<endl;
     }
     
 }
 int main(){
 int a,b;
 countingeliment( a, b  )
  int c;
  cin>>c;
  */
  void pooja( int arr[], int n){
  cout<< " i am back in tne function "<<endl;
    arr[0] = 201;
  
   for (int  i = 0; i <n ; i++)
   {
    cout<< arr[i]<< "   ";
   }
    cout<<endl;

  cout<<" treting back to the main function ";

  }
  int main (){
       int  arr[5] = { 2,3,4,5,7};
      pooja (arr ,  3);
      // printing tnre arry
      for (int i = 0; i < 5; i++)
      {
         cout<<arr[i]<<""<<endl;
      }
      
  
return 0;
}
