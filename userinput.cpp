#include <iostream>
int main() {
// cout << (insertion operator)
// cin >> (extraction operator)
// so basically cin is used for taking user input
std::string name;
std::string name1;
int age;
std::cout << "What's your name? ";
std::cin >> name; // user input stored in name variable
std::cin.ignore(); //it ignores \n and place it b/w cin and getline
std::cout << "What's ur full name dearie? ";
std::getline(std::cin, name1);
std::cout << "What's your age?" << '\n';//while using cin \n is not needed, but if u use it, then it will ask u answer below the ques
std::cin >> age;

std::cout << "Hello " << name << '\n';
std::cout << "Hey " << name1 << '\n';
std::cout << "You are " << age << " yrs old" << '\n';
//cin does not read spaces


return 0;
}