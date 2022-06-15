// find sq root of 25  to use a binary search 
#include<iostream>
using namespace std;
//  take  a function for a find a squre root 
float squ(int  n, int key){
    int s =0 ;
    int e= n;
    int mid =  s+(e-s)/2;
    int ans= -1;
    while(s<=e)
    {
        long long int sque= mid*mid;
      if (sque==n)
      {
        return mid;
      }
       else if (sque>n)
       {
         e= mid -1;
        
       }
      else
      {
        s= mid+1;
        ans = mid ;
      }
       mid =  s+(e-s)/2;
    }
    return ans ;
}
int main(){
  
    
   
    cout<<"the sqare root is :"<<squ(50,3)<<endl;
    cout<<"the sqare root is :"<<squ(10,4);
return 0;
}
