#include <iostream>
using namespace std;
class student{
    public: 
     string name;
     int age;
     double gpa;

    student(string name, int age, double gpa){// this is a constructor
    this-> name = name;// above in constructor we can write instead of name --> x, age --> y, etc
    this-> age = age;// then name = x, age = y and so on
    this-> gpa = gpa;
    }
};
int main() {
// constructors  = special method that is automatically called when an object is instantiated 
// useful for assigning values to attributes as arguments

student student1("Spongebob", 25, 3.6);
student student2("Patrick", 46, 9.8);

cout << student1.name << '\n';
cout << student1.age << '\n';
cout << student1.gpa << '\n';
return 0;
}