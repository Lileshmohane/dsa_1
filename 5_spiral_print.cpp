#include<iostream>
using namespace std;
void spiral(int arr[][3],int i,int j){
//int count = 0;
//int total =row *col;
int x;//  iterative 

int strrow= 0;
int endrow=i-1;
int strcol= 0;
int endcol= j-1;
while (strrow<=endrow && strcol<=endcol)
{
    //for str row 
   for (int x = strcol; x <=endcol; x++)
   {
    cout<<arr [strrow][x]<<" ";
   
   }
   strrow++;
   // end colmn 
   for (int  x= strrow; x<=endrow; x++)
   {
    cout<<arr[x][endcol]<<" ";
    
   }
    endcol--;
    // end row
   for (int  x= endcol; x>=strcol; x--)
   {
   cout<<arr[endrow][x]<<" ";
   
   }
   endrow--;
   for (int x= endrow; x>=strrow; x--)
   {
   cout<<arr[strcol][x]<<" ";
   }
   strcol++;
}
}
int main(){
int arr[3][3]={
        { 21, 22, 23 },
        { 37, 38, 39 },
        { 43, 44, 45 }
    };
  spiral(arr,3,3);
  return 0;

}
