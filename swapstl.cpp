
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

array<int,5> a={12,34,56,7,7};

array<int,5> b={0,8,6,3,1};

a.swap(b);
for(int i=0;i<5;i++){
	cout<<a[i]<<" ";
	cout<<" ";
	
	
}
cout<<"swap";
for(int i=0;i<5;i++){
	cout<<b[i]<<" ";
	cout<<" ";
	
	
}



// for(int i=0;i<5;i++){
//     cout<<a[i]<<" ";
// }

// cout<<"Element at index ->"<<a.at(3)<<endl;
// cout<<"find the first element ->"<<a.front()<<endl;
// cout<<"find the last element ->"<<a.back()<<endl;
//  cout<<"find the size element ->"<<a.size()<<endl;
// cout<<"Element at index ->"<<a.begin()<<endl;
// cout<<"Empty or not ->"<<a.empty();


    return 0;
}