#include <iostream>
int main() {
// cout << (insertion operator)
// cin >> (extraction operator)
// so basically cin is used for taking user input
std::string name;
int age;
std::cout << "What's your name?" << '\n';
std::cin >> name; // user input stored in name variable
std::cout << "What's your age?" << '\n';
std::cin >> age;

std::cout << "Hello " << name << '\n';
std::cout << "You are " << age << " yrs old" << '\n';
//cin does not read spaces


return 0;
}