#include <iostream>
int main() {
// if statments: if given condition, then runs the code
// otherwise skips the code and move on
int age;
std::cout << "Enter ur age: ";
std::cin >> age;

if(age >= 18){
    std::cout << "Welcome to this Site!";
}
else if(age < 0){
std::cout << "You are not born yet!";
}
else{
    std::cout << "You  are not old enough!";
}
// if statments can work without else statments too
return 0;
}