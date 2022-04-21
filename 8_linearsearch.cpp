#include<iostream>
using namespace std;
 // inearsearch  using  a bool function 
  bool search(int arr[], int size, int key ){
      for (int  i = 0; i < size ; i++)
      {
           if (arr[i] == key)
           {
              return 1;
           }
           
      }
      return 0;
  }
  int main (){
      int arr[8] = { 2,4,5,7,9,56,67,45};
       cout<<" find a linear  searching element  "<<endl;
      int key;
      cin>>key;
      bool find =  search(arr, key, 45);
      if (find)
      {
         cout<<"your eliment is present in this array"<<endl;

      }
      else
      {
          cout<<"your element is not presemt in this array "<<endl;
      }
      
  

return 0;
}
int serch(int arr[],int n,int key){
    for (int  i = 0; i < n; i++)
    {
        if (arr[i]==key)
        {
            return i;
        }
        
    }
   return -1; 
}

// in linea]r search to find index of element 
int main(void){
int arr[]={2,3,4,5,9,6,4,7};
int key= 3;
int n= sizeof(arr)/sizeof(arr[0]);
int fun= serch(arr,n,key);
(fun == -1)
?cout<<" your eliment is not present in array"
:cout<<" your element is present in array at index : "<<fun;

return 0;
}
