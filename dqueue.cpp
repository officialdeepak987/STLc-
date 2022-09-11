#include <iostream>

using namespace std;
#include <deque>

int main() {

  deque<int> nums;
nums.push_back(4);
nums.push_front(412);
nums.push_back(41);
nums.push_back(14);
nums.push_front(410);
nums.push_front(4192);
cout<<endl;
// cout<<nums.front();
// cout<<nums.back();
// nums.pop_back();
// nums.pop_front();
// nums.erase(nums.begin(),nums.begin()+2);


for(int i=0;i<nums.size();i++)
cout<<nums[i]<<" ";
cout<<endl;
// cout<<nums.at(0);
cout<<nums.empty();
 
}