#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    Person() {}
    Person(string s, int a)
    {
        name = s;
        age = a;
    }

    virtual void display()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << " years" << endl;
    }
};

class Teacher : public Person
{
    float salary;
    string major;

public:
    Teacher() {}
    Teacher(string a, int b, float s, string m) : Person(a, b)
    {
        salary = s;
        major = m;
    }
    void display()
    {
        Person::display();
        cout << "Salary : " << salary << endl;
        cout << "Major : " << major << endl;
    }
};

class Student : public Person
{
    char grade;
    float score;

public:
    Student() {}
    Student(string a, int b, char c, float s) : Person(a, b)
    {
        grade = c;
        score = s;
    }

    void display()
    {
        Person::display();
        cout << "Grade : " << grade << endl;
        cout << "Score : " << score << endl;
    }
};

int main()
{
    Person *p;

    // Person Class
    Person people[3];
    string person_name;
    int person_age;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter name of person " << i + 1 << " and age" << endl;
        cin >> person_name >> person_age;
        people[i] = Person(person_name, person_age);
    }
    for (int i = 0; i < 3; i++)
    {
        cout << "Person " << i + 1 << endl;
        p = &people[i];
        p->display();
        delete p;
    }

    // Teacher Class
    Teacher teachers[3];
    string teacher_name, teacher_major;
    int teacher_age;
    float teacher_salary;

    for (int i = 0; i < 3; i++)
    {
        cout << "Teacher " << i + 1 << endl;
        cout << "Enter name: ";
        cin >> teacher_name;
        cout << "Enter age: ";
        cin >> teacher_age;
        cout << "Enter salary: ";
        cin >> teacher_salary;
        cout << "Enter major: ";
        cin >> teacher_major;

        teachers[i] = Teacher(teacher_name, teacher_age, teacher_salary, teacher_major);
    }
    for (int i = 0; i < 3; i++)
    {
        cout << "Teacher " << i + 1 << endl;
        p = &teachers[i];
        p->display();
        delete p;
    }

    // Student Class
    Student students[3];
    string student_name;
    char student_grade;
    float student_score;
    int student_age;
    for (int i = 0; i < 3; i++)
    {
        cout << "Student " << i + 1 << endl;
        cout << "Enter name: ";
        cin >> student_name;
        cout << "Enter age: ";
        cin >> student_age;
        cout << "Enter grade: ";
        cin >> student_grade;
        cout << "Enter score: ";
        cin >> student_score;

        students[i] = Student(student_name, student_age, student_grade, student_score);
    }
    for (int i = 0; i < 3; i++)
    {
        cout << "Student " << i + 1 << endl;
        p = &students[i];
        p->display();
        delete p;
    }
    return 0;
}