#include<bits/stdc++.h>
using namespace std;

int main(){
	
	// Initialization of List
	// list<int> l;		// without size, there will be 0 values;
	// list<int> l(5);		// with size, and all will be garbage values;
	// list<int> l(5, 9);		// with size, and all value will be 9

	// Insterting a list to another list or copy a list
	// list<int> l = {1, 2, 3, 4, 5};
	// list<int> l2(l);

	// Inserting an array to a list or copy an array to a list
	// int arr[] = {1, 2, 3, 4, 5};
	// list<int> l(arr, arr+5);

	// Inserting a vectort to a list or copy a vector to a list
	vector<int> v = {1, 2, 3, 4, 5};
	list<int> l(v.begin(), v.end());


	// Printing List
	// With iterator
	// for(auto it = l.begin(); it != l.end(); it++){
	// 	cout<<*it<<endl;
	// }

	// Without iterator
	for(int val: l){
		cout<<val<<endl;
	}

	return 0;
}