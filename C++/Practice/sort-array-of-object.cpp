#include<bits/stdc++.h>
using namespace std;

class Student{
public:
	string name;
	int roll, marks;
};

bool cmp(Student l, Student r){
	return l.marks > r.marks;
}

int main(){
	
	int n;
	cin >> n;
	Student s[n];
	for(int i = 0; i < n; i++){
		cin>>s[i].name >>s[i].roll >> s[i].marks; 
	}
	sort(s, s+n, cmp);
	for(int i = 0; i < n; i++){
		cout<<s[i].name << " " <<s[i].roll << " " << s[i].marks <<endl; 
	}

	return 0;
}