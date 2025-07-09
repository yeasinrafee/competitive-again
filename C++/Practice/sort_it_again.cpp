#include<bits/stdc++.h>
using namespace std;

class Student{
public:
	string nm;
	int cls;
	char s;
	int id;
	int math_marks, eng_marks;
};

bool compare(Student l, Student r){
	if(l.eng_marks != r.eng_marks){
	 return l.eng_marks > r.eng_marks;
	}else if(l.math_marks != r.math_marks){
		return l.math_marks > r.math_marks;
	}else{
		return l.id < r.id;
	}
}

int main(){
	int n;
	cin>>n;
	Student s[n];
	for(int i = 0; i < n; i++){
		cin>>s[i].nm>>s[i].cls>>s[i].s>>s[i].id>>s[i].math_marks>>s[i].eng_marks;
	}
	
	sort(s, s + n, compare);

	for(int i = 0; i < n; i++){
		cout<<s[i].nm<<" "<<s[i].cls<<" "<<s[i].s<<" "<<s[i].id<<" "<<s[i].math_marks<<" "<<s[i].eng_marks<<endl;
	}

	return 0;
}