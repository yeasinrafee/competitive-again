#include<bits/stdc++.h>
using namespace std;

int main(){
	
	// 1. Initialization of List
	// list<int> l;		// without size, there will be 0 values;
	// list<int> l(5);		// with size, and all will be garbage values;
	// list<int> l(5, 9);		// with size, and all value will be 9

	// Insterting a list to another list or copy a list
	list<int> l = {1, 2, 3, 4, 5};
	// list<int> l2(l);

	// Inserting an array to a list or copy an array to a list
	// int arr[] = {1, 2, 3, 4, 5};
	// list<int> l(arr, arr+5);

	// Inserting a vectort to a list or copy a vector to a list
	// vector<int> v = {1, 2, 3, 4, 5};
	// list<int> l(v.begin(), v.end());

	// 2. Capacity of List
	// cout<<l.size()<<endl;		// Return the size of the list
	// cout<<l.max_size()<<endl;	// Return the maximum size of the list
	// l.clear();		// Clear the list
	// bool isEmpty = l.empty();		// Return a boolean of linked list if it is empty or not
	// cout<<isEmpty<<endl;
	// l.resize(10);		// Resize the list and initialize with 0, if we put soceond parameter then put the value to the list
	


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