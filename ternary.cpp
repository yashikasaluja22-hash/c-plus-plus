#include <iostream>
int main() {
// ternary operator ? = replacment to and if/else statment
// condition ? expression 1(if true) : expression 2 (if false)
int grade;
std::cout << "Enter ur grade(in number): ";
std::cin >> grade;

grade >= 60 ? std::cout << "You'll pass!" : std::cout << "You'll fail!";
//agar kisi number ko 2 se divide karo toh remainder ya 0 ya fir 1 (or 1. smtg) aata hai
std::cout << '\n';
int num = 9;
num % 2 == 1? std::cout << "ODD" :  std::cout << "EVEN";

std::cout << '\n';
bool hungry = true;
hungry? std::cout << "You are HUNGRY!" : std::cout << "You are FULL!";
return 0;
}