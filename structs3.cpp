#include <iostream>
using namespace std;
struct student{
  string name;
  double gpa;
  void display(){
    cout << "Name: " << name << '\n';
    cout << "gpa: " << gpa << '\n';
  }
  void setdata(string a, double n){
    name = a;
    gpa = n;
  }
};
int main() {
student s1;
s1.setdata("cindy", 8.5);
s1.display();
return 0;
}