#include<iostream>
using namespace std;
#include<queue>

//first in first out

int main(){
    queue<string> name;
    name.push("deepak");
    name.push("singh");
    name.push("kumar");

   cout<<name.front();
  
// for(int i:name)
// {
//     cout<<i<<" ";
// }

}