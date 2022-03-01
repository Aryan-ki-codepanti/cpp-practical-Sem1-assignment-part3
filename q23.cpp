#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    int age;
public:

    Person(string s , int a){
        name = s;
        age = a;
    }

    virtual void display(){
        cout << "Name : " << name << endl;
        cout << "Age : " << age << " years" << endl;
    }
};

class Teacher : public Person
{
    float salary;
    string major;
public:
    Teacher(string a , int b ,float s , string m) : Person(a , b){
        salary = s;
        major = m;
    }
    void display(){
        Person::display();
        cout << "Salary : " << salary << endl;
        cout << "Major : " << major  << endl;
    }
};

class Student : public Person
{
    char grade;
    float score;
public:
    Student(string a , int b , char c , float s) : Person(a , b){
        grade = c;
        score = s;
    }

    void display(){
        Person::display();
        cout << "Grade : " << grade << endl;
        cout << "Score : " << score << endl;
    }

};

int main()
{
    Person* p;
    Person shelby("Shelby" , 40);
    Teacher john("John" , 18 , 15000 , "CS");
    Student jane("Jane" , 20 , 'C' , 98.0);
    p = &shelby;
    p->display();
    delete p;
    p = &john;
    p->display();
    delete p;
    p = &jane;
    p->display();
    return 0;
}