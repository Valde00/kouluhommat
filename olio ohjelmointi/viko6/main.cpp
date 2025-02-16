#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Student {
private:
    string name;
    int age;
public:
    Student(string n, int a) : name(n), age(a) {}

    void setAge(int a);
    void setName(int n);
    int getAge() {
        return age;
    };
    string getName() {
        return name;
    };

    void printStudentInfo() const{
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

void printAllStudents(const vector<Student>& students)
{
    for (const auto& student : students) {
        student.printStudentInfo();
    }
}

int main ()
{
    int selection =0;
    vector<Student>studentList;
    studentList.push_back(Student("Valtteri", 19));
    studentList.push_back(Student("Juuso", 20));
    studentList.push_back(Student("Eero", 25));
    studentList.push_back(Student("Jonne", 18));

    do
    {
        cout<<endl;
        cout<<"Select"<<endl;
        //cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

        switch(selection)
        {
        /*case 0:
            // Kysy käyttäjältä uuden opiskelijan nimi ja ikä
            // Lisää uusi student StudentList vektoriin.
            break;*/
        case 1:
            // Tulosta StudentList vektorin kaikkien opiskelijoiden
            // nimet.

            printAllStudents(studentList);
            break;
        case 2:
            // Järjestä StudentList vektorin Student oliot nimen mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat

            sort(studentList.begin(), studentList.end(), [](Student& a, Student& b) {
                return a.getName() < b.getName();
            });
            printAllStudents(studentList);
            break;
        case 3:
            // Järjestä StudentList vektorin Student oliot iän mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat

            sort(studentList.begin(), studentList.end(), [](Student a, Student b) {
                return a.getAge() < b.getAge();
            });
            printAllStudents(studentList);
            break;
        case 4: {
                // Kysy käyttäjältä opiskelijan nimi
                // Etsi studentListan opiskelijoista algoritmikirjaston
                // find_if funktion avulla löytyykö käyttäjän antamaa nimeä
                // listalta. Jos löytyy, niin tulosta opiskelijan tiedot.

                cout << "Enter student name to find: ";
                string searchName;
                cin >> searchName;
                auto it = find_if(studentList.begin(), studentList.end(), [&](Student& s) {
                    return s.getName() == searchName;
                });
                if (it != studentList.end()) {
                    it->printStudentInfo();
                } else {
                    cout << "Student not found." << endl;
                }
            }
            break;
        default:
            cout<< "Wrong selection, stopping..."<<endl;
            break;
        }
    }
    while(selection < 5);

    return 0;
}
