#include<iostream>
using namespace std;
#include<stack>

// lifo=>last in first out

int main(){
    stack<string> name;
    name.push("deepak");
    name.push("singh");
    name.push("kumar");

    
    cout<<name.top();
  
// for(int i:name)
// {
//     cout<<i<<" ";
// }

}