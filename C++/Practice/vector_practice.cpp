#include<bits/stdc++.h>
using namespace std;

int main(){
	
	// 1. vector initialization:
	vector<int> v; //type 1
	vector<int> v2(10); //type 2
	vector<int> v3(10, -1); //type 3
	vector<int> v4(v3); // type 4
	int a[5] = {1, 2, 3, 4, 5};
	vector<int> v5(a, a+5); // type 5
	vector<int> v6 = {1, 2, 3, 4, 5}; // type 6

	for(int i = 0; i < v6.size(); i++){
		cout<<v6[i]<<" ";
	}
	cout<<endl;

	// 2. vector modifiers methods:
	// v6.push_back(6);
	// v6.max_size();
	// v6.clear();
	// v6.empty();
	// v6.resize();
	// v6.pop_back();
	// v6.insert(v6.begin() + 2, 100);
	// v6.insert(v6.begin() + 2, v5.begin(), v5.end());
	// v6.erase(v6.begin()+1, v6.begin() + 5);
	// replace(v6.begin(), v6.end() - 1, 2, 100);
	// auto it = find(v6.begin(), v6.end(), 100);
	// cout<<v6.capacity()<<endl;

	// if(it == v.end()){
	// 	cout<<"Not found"<<endl;
	// }else{
	// 	cout<<"Found"<<endl;
	// }

	// 3. vector element access
	// cout<<v6[3]<<endl;
	// cout<<v6.at(3)<<endl;
	// cout<<v6.back()<<endl;
	// cout<<v6.front()<<endl;

	// 4. vector iterators:
	for(int x : v6){
		cout<< x <<" ";
	}
	cout<<endl;

	for(auto it = v6.begin(); it < v6.end(); it++){
		cout<<*it<<" ";
	}
	cout<<endl;

	// 5. Input and Output
	int n;
	cin>>n;
	vector<int> v7(n);
	vector<int> v8;
	for(int i = 0; i < n; i++){
		cin>>v7[i];
	}
	for(int i = 0; i < n; i++){
		int x;
		cin>>x;
		v8.push_back(x);
	}
	for(int x : v7){
		cout<< x <<" ";
	}
	cout<<endl;
	for(int x : v8){
		cout<< x <<" ";
	}
	cout<<endl;

	// 7. vector of string
	int n1;
	cin>>n1;
	cin.ignore();
	vector<string> v9(n1);
	for(int i = 0; i < n; i++){
		getline(cin, v9[i]);
	}
	for(string s: v9){
		cout<<s<<endl;
	}


	return 0;
}