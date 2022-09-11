  #include<iostream>
  #include<algorithm>
  #include<vector>
  using namespace std;

  int main(){

    vector<int> v;
// using binary search  to find an elements;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(0);
    v.push_back(8);
    v.push_back(12);
    cout<<"finding 6 -> "<< binary_search(v.begin(),v.end(),6)<<endl;
    cout<<"0 means true "<<endl;
    cout<<"lower bound = "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"upper bound = "<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    
    int a=3;
    int b=5;
    cout<<"max = "<<max(a,b)<<endl;
    cout<<"min = "<<min(a,b)<<endl;
 
 string s="DEEPAK";
 reverse(s.begin(),s.end());
 cout<<" reverse DEEPAK string == "<<s<<endl;
 
 cout<<"Rotate the value by one";

// rotate(v.begin(),v.begin+1,v.end());
//  cout<<"after rotate "<<endl;
//  for(int i:v){
//     cout<<i<<endl;
 }
 
 
