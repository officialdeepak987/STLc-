#include <iostream>
using namespace std;
#include<array>
int main() {
   
   // Normal array
//   int arr[]={12,34,56,77,9};
//   int n=arr.size();
//   for(int i=0;i<n;i++){
//       cout<<arr[i]<<" ";
//   }

// STL array

array<int,9> a={12,34,56,7,7};

int size=a.size();
for(int i=0;i<size;i++){
    cout<<a[i]<<" ";
}
cout<<"Element at index ->"<<a.at(3)<<endl;
cout<<"Element at index ->"<<a.front()<<endl;
cout<<"Element at index ->"<<a.back()<<endl;
 cout<<"Element at index ->"<<a.size()<<endl;
cout<<"Element at index ->"<<a.begin()<<endl;
cout<<"Empty or not ->"<<a.empty();


    return 0;
}