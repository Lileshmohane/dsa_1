#include<iostream>
using namespace std;
// row wise sum 
void printrow(int arr[][3],int row,int col){
   
    for (int  row= 0; row< 3; row++)
{    int sum =0;
    for (int  col = 0; col < 3; col++)
    {
         sum+=arr[row][col];
        
    }
    cout<<sum<<" ";
  
}
cout<<endl;
}

//now we search a column wiise element 
void printcol(int arr[][3],int row,int col){
   
    for (int  col= 0; col< 3; col++)
{    int sum =0;
    for (int  row= 0; row < 3; row++)
    {
         sum+=arr[row][col];
        
    }
    cout<<sum<<" ";
  
}
cout<<endl;
}
//  also be write like this 
// column  wise sum 2d array 
/*void colsum(int arr[][3],int row ,int col){
   for (int  row= 0; row < 3; row++)
    {
      int sum= 0;
       for (int  col = 0; col<3; col++)   
       {
          sum+=arr[col][row];
       }
       cout<<sum<<" ";
    }
    cout<<endl;
}*/
int main(){
int arr[3][3];
cout<<"  enter a element :"<<endl;
for (int  row= 0; row< 3; row++)
{
    for (int  col = 0; col < 3; col++)
    {
        cin>>arr[row][col];
    }
  
}

for (int  row= 0; row< 3; row++)
{
    for (int  col = 0; col < 3; col++)
    {
        cout<<arr[row][col]<<" ";
    }
  cout<<endl;  
}
cout<< "enter a element :"<<endl;
cout<< "it is row element  :"<<endl;
printrow(arr,3,3);
cout<< "it is column element  :"<<endl;
printcol(arr,3,3);
return 0;

}
