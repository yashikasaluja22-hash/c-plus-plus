#include <iostream>
int main() {
char op; // op = opperator
double num1;
double num2;
double result;

std::cout << "*****CALCULATOR*****" << '\n';
std::cout << "Enter either (* / + -): ";
std::cin >> op;

std::cout << "Enter num 1: ";
std::cin >> num1;
std::cout << "Enter num 2: ";
std::cin >>  num2;

switch(op){
case '+':
result = num1 + num2;
std::cout << "Result: " << result << '\n';
break;
case '-':
std::cout << "Result: " << num1 - num2 << '\n';
break;
case '/':
std::cout << "Result: " << num1 / num2 << '\n';
break;
case '*':
std::cout << "Result: " << num1 * num2 << '\n';
break;
default:
std::cout << "Invalid Input!" << '\n';
break;
}

std::cout << "********end********";


return 0;
}