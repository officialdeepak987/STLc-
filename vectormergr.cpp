
#include <bits/stdc++.h>
using namespace std;
#include<vector>

int main(){
  int arr[]={1,2,4,3,5,5,6,7,8,9};
  int n=sizeof arr/sizeof(arr[0]);
  vector<int> v;
  for(int i=0;i<n;i++)
  v.push_back(arr[i]);
  for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
  }
  cout<<endl;
  
    int arr1[]={9,8,7,5,4,3,2,1,1,3};
    vector<int> v1;
  for(int i=0;i<n;i++)
  v1.push_back(arr1[i]);
  for(int i=0;i<n;i++){
    cout<<v1[i]<<" ";
    
  }
  cout<<endl;
  sort(v.begin(), v.end());
  sort(v1.begin(), v1.end());
  vector<int> v2(20);
  merge(v.begin(), v.end(), v1.begin(), v1.end(), v2.begin());
  for(int i=0;i<v2.size();i++)
  cout<<v2[i]<<" ";
  
  return 0;
}
