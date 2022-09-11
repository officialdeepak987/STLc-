#include<iostream>
using namespace std;
#include<map>

int main(){


// map is a data structer the value  willbe store in the form of key
// key 1,value =mango
//key unique

map<int ,string> m;
m[1]="mango";
m[12]="banana";
m[3]="papaya";
m[4]="orange";
m.insert({5,"watermelon"});
for(auto i:m)
   cout<<i.first<<"="<<i.second<<endl;

}    

