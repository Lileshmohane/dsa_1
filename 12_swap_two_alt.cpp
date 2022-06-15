#include<iostream>
// swap two alternat array
using namespace std;
void printarr(int arr[],int n){
    for (int  i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
     cout<<endl;
}
 void reverse(int arr[], int size){
for (int  i = 0; i <size; i+=2)
{
   if (i+1 <size)
   {
      swap(arr[i],arr[i+1]);
   }
}
 }
int main(){
int arr[8]={2,4,6,7,8,9,1,0};
reverse(arr ,8);
printarr(arr ,8);
return 0;
}
