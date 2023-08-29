#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Student {
    string name;
    double grade;
};

int main() {
     vector<Student> students;
     string name;
    double grade;

    while (1) {
         cout << "Enter student name (or 'quit' to exit): ";
         getline( cin >>  ws, name); 

        if (name == "quit") {
            break;
        }

         cout << "Enter " << name << "'s grade: ";
         cin >> grade;

        students.push_back({name, grade});
    }

    if (students.empty()) {
         cout << "No student data entered." <<  endl;
        return 0;
    }

    double totalGrade = 0.0;
    double highestGrade = students[0].grade;
    double lowestGrade = students[0].grade;

    for (const Student& student : students) {
        totalGrade += student.grade;
        highestGrade =  max(highestGrade, student.grade);
        lowestGrade =  min(lowestGrade, student.grade);
    }

    double averageGrade = totalGrade / students.size();

     cout <<"\nAverage Grade: " <<averageGrade <<endl;
     cout <<"Highest Grade: " <<highestGrade <<endl;
     cout <<"Lowest Grade: " <<lowestGrade <<endl<<endl;

    return 0;
}
