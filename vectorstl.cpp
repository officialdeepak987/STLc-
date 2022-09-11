// #include <iostream>
// using namespace std;
//  #include<vector>

// int main() {
// 	vector<int> v;
// 	cout<<"size => "<<v.capacity()<<endl;
// 	cout<<"size of vector by size() function =>"<<v.size()<<endl;
//     v.push_back(500);
// 	v.push_back(400);
// 	 v.push_back(500);
	
//    	cout<<"capacity=> "<<v.capacity()<<endl;
// 	cout<<"how many element present size() function =>"<<v.size()<<endl;

//     return 0;
// }

#include <iostream>
using namespace std;
 #include<vector>

int main() {
	vector<int> v;
	int size=v.capacity();
	
	v.push_back(400);
	v.push_back(400);
	v.push_back(400);
	v.push_back(400);
	v.push_back(400);
	v.push_back(400);
	cout<<v.capacity()<<endl;
	v.pop_back();
	v.pop_back();

    v.pop_back();
	v.pop_back();
	for(int i:v){
	cout<<i<<" ";
	}

	// cout<<v.size();

    return 0;
}