/*WAP using the concept of class and object:
• Define Student class
• Data members : Enrollno, Name, float marks[5], float perc
• Member functions: input() calculatePerc() output()
Calculate the percentage of two students.*/

#include <iostream>
#define SUBJECT_MAX_MARKS 100.0
using namespace std;
class Student {
 public:
 string enroll_no, name;
 float marks[5], perc;
 int input();
 int calculatePerc();
 int output();
};
int Student::input() {
 cout << "Enter marks of 5 subjects: " << endl;
 for (int i = 0; i < 5; i++) {
 cout << "Enter marks of subject " << i + 1 << ": ";
 cin >> marks[i];
 }
 return 0;
}
int Student::output() {
 cout << "Percentage : " << perc << endl;
 return 0;
}
int Student::calculatePerc() {
 perc = 0;
 for (int i = 0; i < 5; i++) {
 perc += marks[i];
 }
 perc = (perc / (5 * SUBJECT_MAX_MARKS)) * 100.0;
 return 0;
}
int main() {
 Student bca[2];

 for (int i = 0; i < 2; i++) {
 cout << "============ STUDENT " << i + 1 << "============" << endl;
 bca[i].input();
 bca[i].calculatePerc();
 bca[i].output();
 cout << endl;
 }
 return 0;
}
