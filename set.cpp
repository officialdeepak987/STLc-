#include<iostream>
using namespace std;
#include<set>
int main(){
// set always take unique value;
    set<int> s;
    s.insert(2);
    s.insert(2);
    s.insert(6);
    s.insert(3);
    s.insert(4);

    // for(int i:s)
    // cout<<i<<endl;

    for(auto i:s){
        cout<<i<<endl;
    }
    cout<<endl;
//
set<int> :: iterator it = s.begin();
it++;
s.erase(it);
for(auto i:s)
cout<<i<<endl;

cout<<"find 5 "<<endl;
cout<<s.count(5)<<endl;


}