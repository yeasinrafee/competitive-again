#include<bits/stdc++.h>
using namespace std;

int main(){
	
	// 1. Initialization of List
	// list<int> l;		// without size, there will be 0 values;
	// list<int> l(5);		// with size, and all will be garbage values;
	// list<int> l(5, 9);		// with size, and all value will be 9

	// Insterting a list to another list or copy a list:
	list<int> l = {1, 2, 3, 1, 5, 3, 2, 4, 5};
	// list<int> l2(l);
	// Inserting an array to a list or copy an array to a list:
	// int arr[] = {1, 2, 3, 4, 5};
	// list<int> l(arr, arr+5);
	// Inserting a vectort to a list or copy a vector to a list:
	// vector<int> v = {1, 2, 3, 4, 5};
	// list<int> l(v.begin(), v.end());


	// 2. Capacity of List
	// cout<<l.size()<<endl;		// Return the size of the list
	// cout<<l.max_size()<<endl;	// Return the maximum size of the list
	// l.clear();		// Clear the list
	// cout<<l.empty()<<endl;		// Return a boolean of linked list if it is empty or not
	// l.resize(10);		// Resize the list and initialize with 0, if we put soceond parameter then put the value to the list


	// 3. Modifiers Function of List
	// list<int> l2;
	// l2 = l;
	// l2.assign(l.begin(), l.end());
	// l.push_back(6);
	// l.push_front(100);
	// l.pop_back();
	// l.pop_front();
	// cout<<*next(l.begin(), 2)<<endl;		// Access list element with index number
	// l.insert(next(l.begin(), 2), 100);		// Insert at any position
	// list<int> l2 = {100, 200};
	// l.insert(next(l.begin(), 3), l2.begin(), l2.end());		// Insert a list into a list at any position
	// l.erase(next(l.begin(), 2));		// It will erase a value from any position
	// l.erase(next(l.begin(), 1), next(l.begin(), 3));		// It will erase multiple values
	// replace(l.begin(), l.end(), 3, 100);		// It will replace the value of list
	// auto it = find(l.begin(), l.end(), 2);	// Search the specific value in a list
	// if(it == l.end()){
	// 	cout<<"Not found"<<endl;
	// }else{
	// 	cout<<"Found"<<endl;
	// }


	// 4. Operation in Doubly Linked List
	// l.remove(2);		// It will remove all the given values
	// l.sort();		// It will sort the list in ascending order
	// l.sort(greater<int>());		// It will sort the list in descending order
	// l.unique();		// It will remove the duplicate values and return the unique values (works on the sorted list)
	// l.reverse();	// It will reverse the list


	// 5. Element Access in Doubly Linked List
	// cout<<l.front()<<endl;		// return the first value
	// cout<<l.back()<<endl;		// return the last value
	// cout<<*next(l.begin(), 2)<<endl;	// return the value of given position


	// 6. Iterators
	// cout<<*l.begin()<<endl;		// Return the first pointer of the list
	// cout<<*l.end()<<endl;		// Point to the last element
	// cout<<*l.rbegin()<<end;		// returns a reverse iterator to the last element.
	// cout<<*l.rend()<<end;		// eturns a reverse iterator to the position before the first element.


	// 7. Printing List
	// With iterator
	// for(auto it = l.begin(); it != l.end(); it++){
	// 	cout<<*it<<endl;
	// }
	// Reverse Print 
	// for (auto it = l.rbegin(); it != l.rend(); ++it) {
    //     cout << *it << " ";
    // }
	// Without iterator
	for(int val: l){
		cout<<val<<endl;
	}

	return 0;
}