#include<iostream>
using namespace std;
int isfound(int arr[][4],int tar,int row,int col){
  for (int  row= 0; row< 3; row++)
{
    for (int  col = 0; col < 4; col++)
    {
        if (arr[row][col]==tar)
        {
           return 1;
        }
        
    }
 
}
    return  0;
}
int main(){
    int arr[3][4];
//int arr[3][4]={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};
/*
for (int  i = 0; i < 3; i++)
{
   for (int  j = 0; j < 4; j++)
   {
    cin>>arr[i][j];
   }
}
*/
//now print a output 
for (int  row= 0; row< 3; row++)
{
    for (int  col = 0; col < 4; col++)
    {
        cin>>arr[row][col];
    }
  
}
for (int  row= 0; row< 3; row++)
{
    for (int  col = 0; col < 4; col++)
    {
        cout<<arr[row][col]<<" ";
    }
  cout<<endl;  
}
cout<< "enter a element :"<<endl;
int tar;
cin>>tar;
int se=isfound(arr,tar,3,4);
if(se){
    cout<<"element is found :  "<<se<<endl;
}
else
{
    cout<<"element is not found :"<<endl;
}

return 0;
}
