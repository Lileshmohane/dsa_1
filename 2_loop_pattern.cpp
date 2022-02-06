#include<iostream>
using namespace std;
// print a number 
int main(){
/*int n;
cin>>n;// for a input 
int i = 1;
while (i<=n)
{
     int j=1 ;
    while (j<=n)
    {
    cout<<n-j+1;
    j++; 
    }
    cout<<endl;
    i++;
}
*/
// make a triangle  
/*int n ;
cin>>n;
int row  = 1;
while (row <=n)
{
     int column =1;
    while (column<=row)
    {
        cout<<row;
        column++;
    }
    cout<<column<<endl;
    row++;
}
*/
/*int n ;
cin>>n;
int row  = 1;
while (row <=n)
{
     int column =1;
     int var= row;
    while (column<=row)
    {
        cout<<var;
        column++;
        var++;
    }
    cout<<column<<endl;
    row++;
}*/
/*int n ;
cin>>n;
int row  = 1;
while (row <=n)
{
     int column =1;
    while (column<=row)
    {
        cout<<n-column+1;
        column++;
        
    }
    cout<<row<<endl;
    row++;
}*/
//make a patern 
/*
int n ;
cin>>n;
int row  = 1;
while (row <=n)
{
     int column =1;
    while (column <=n)
    {
        char ch = 'a'+row -1;
        cout<<ch;
        column++;
        
    }
    cout<<endl;
    row++;
}*/
/*
int n ;
cin>>n;
int row  = 1;
while (row <=n)
{
     // print a space 
     int space = n-1;
    while (space)
    {
        
        cout<<" ";
         space--;
    }
    int column =1;
    while (column<=row)
    {
        cout<<"*";
        column = column+1;
    }
    
    cout<<"*"<<endl;
    row++;
}*/
int n ;
cin>>n;
int row  = 1;
while (row <=n)
{
     // print a space 
     int space = n-row;
    while (space)
    {
        
        cout<<" ";
         space--;
    }
    
    
    int column =1;
    while (column<=row)
    {
        cout<<" "<<column-1;
        column++;
    }
    
    cout<<endl;
    row++;
}
return 0;
}
