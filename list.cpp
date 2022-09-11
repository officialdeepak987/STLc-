#include<iostream>
using namespace std;
#include<list>

// list is empleated by double link list

int main(){
    
    list<int> l;
    // if you add old list in any new list
    
    // list<int> n(l);
    list<int> a(5,100);
    for(int i:a)
    cout<<i<<endl;
    
    // l.push_back(1);
    // l.push_front(2);
    // l.pop_back();
    // l.pop_front();
    // l.erase(l.begin());
    
    
for(int i:l)
{
    cout<<i<<" ";
}

}