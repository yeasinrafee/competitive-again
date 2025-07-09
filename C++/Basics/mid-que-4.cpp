#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    string name;
    char section;
    int marks;
    Student(int i, string n, char s, int m)
    {
        id = i;
        name = n;
        section = s;
        marks = m;
    }
};

int main()
{

    int t;
    cin >> t;
    while (t != 0)
    {
        Student *student[3];
        for (int i = 0; i < 3; i++)
        {
            int id;
            string name;
            char section;
            int marks;
            cin >> id >> name >> section >> marks;
            student[i] = new Student(id, name, section, marks);
        }

        Student *highest = student[0];
        for (int i = 1; i < 3; i++)
        {
            if (student[i]->marks > highest->marks)
            {
                highest = student[i];
            }
            else if (student[i]->marks == highest->marks)
            {
                if (student[i]->id < highest->id)
                {
                    highest = student[i];
                }
            }
        }

        cout << highest->id << " " << highest->name << " " << highest->section << " " << highest->marks << endl;

        t--;
    }
    return 0;
}