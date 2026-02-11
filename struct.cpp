#include <iostream>
using namespace std;
struct student{
    string name;
    double gpa;
    bool enrolled;
};
int main() {
// struct = a structure that group related variables under one name 
// structs can contain many different data types
//variables in a struct are known as "members"
// members  
student student1;
student1.name = "Sponegbob";
student1.gpa = 3.2;
student1.enrolled = true;

student student2;
student2.name = "Patrick";
student2.gpa = 8.5;
student2.enrolled = false;

cout << student1.name << '\n';
cout << student1.gpa << '\n';
cout << student1.enrolled << '\n';

cout << student2.name << '\n';
cout << student2.gpa << '\n';
cout << student2.enrolled << '\n';
return 0;
}