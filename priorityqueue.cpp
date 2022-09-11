
// priority queue relate with heap concept
// max_heap, min_heap

//first element always gratest

#include<iostream>
#include<queue>
using namespace std;

int main(){
    // max - heap
    priority_queue<int> maxi;

    //min -heap
 priority_queue<int,vector<int>,greater<int> > mini;

cout<<"always gives max heap element "<<endl;
maxi.push(1);
maxi.push(4);
maxi.push(6);
maxi.push(9);
maxi.push(2);
maxi.push(0);
int n=maxi.size();
for(int i=0;i<n;i++){
    cout<<maxi.top()<<" ";
    maxi.pop();
}

cout<<endl;

cout<<"always give mim -heap"<<endl;

mini.push(1);
mini.push(4);
mini.push(6);
mini.push(9);
mini.push(2);
mini.push(0);
int size=mini.size();
for(int i=0;i<size;i++)
{
    cout<<mini.top()<<" ";
    mini.pop();

}
cout<<endl;




}