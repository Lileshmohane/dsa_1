/*
// use array data structure
#include <iostream>
#include <array>
using namespace std;
int main() {
 array<int ,4> a={1,2,3,4};
  int size= a.size();
  for(int i= 0;i<size;i++){
    cout<<a[i]<<" ";
  }  
  cout<< " finf second element of an arr : "<<a.at(2);
  // its return bollen or not 
  cout<<" check a element is empty or not  : "<<a.empty();
  cout<<" check front of element in array"<<a.front()<<endl;
  cout<<" check front of element in array"<<a.back()<<endl;
  cout<<"check a data in array"<<a.data()<<endl;
}


//  use vector data structure 
#include<iostream>
// incluse a library
#include<vector>
using namespace std;

int main(){
vector<int> v;
int size=  v.size();
cout<<" size: "<<v.capacity()<<endl;
v.push_back(2);
cout<<" size: "<<v.capacity()<<endl;
cout<<" size: "<<v.size()<<endl;
return 0;
}

#include<iostream>
// include a library of deck
#include<deque>
using namespace std;
//  deck  
int main(){
deque<int> d;
d.push_back(1);
d.push_front(2);
for ( int i:d)
{
  cout<<i<<" ";
}
d.pop_back();
cout<<endl;
for ( int i:d)
{
  cout<<i<<" ";
}
return 0;
}

#include<iostream>
#include<list>
using namespace std;

int main(){
list<int> l;
l.push_back(4);
l.push_front(5);
for ( int i:l)
{
  cout<<i<<" ";
}
cout<<" the size :"<<l.size()<<endl;
return 0;
}

//  use of stack 
#include<iostream>
#include<stack>
using namespace std;

int main(){
stack<int> s;
s.push(5);
s.push(4);
s.push(3);
cout<<" you element is :"<<s.top()<<endl;
s.pop();
cout<<" you element is :"<<s.top()<<endl;
cout<<" you element is :"<<s.empty()<<endl;
return 0;
}

// use ques
#include<iostream>
#include<queue>
using namespace std;

int main(){
queue<int> q;
q.push(5);
q.push(4);
q.push(3);
cout<<" you element is :"<<q.front()<<endl;
q.pop();
cout<<" you element is :"<<q.front()<<endl;
//cout<<" you element is :"<<s.empty()<<endl;
return 0;
}

// priority queue 
#include<iostream>
#include<queue>
using namespace std;

int main(){
priority_queue<int> maix;
priority_queue<int,vector<int>,greater<int>>mini;
maix.push(1);
maix.push(2);
maix.push(3);
maix.push(4);
int n  = maix.size();
for (int  i = 0; i < n; i++)
{
  cout<<maix.top()<<" ";
  maix.pop();
}
cout<<endl;
mini.push(1);
mini.push(2);
mini.push(3);
mini.push(4);
int m = mini.size();
for (int  i = 0; i < m; i++)
{
  cout<<mini.top()<<" ";
  mini.pop();
}

return 0;
}
*/

// use set 
#include<iostream>
#include<set>
using namespace std;

int main(){
set<int> s;
s.insert(5);
s.insert(4);
s.insert(3);
s.insert(2);
for ( auto i:s)
{
  cout<<i<<endl;
}
s.erase(s.begin());
for ( auto i:s)
{
  cout<<i<<endl;
}
return 0;
}
