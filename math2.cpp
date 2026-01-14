#include <iostream>
#include <cmath>
int main() {
//hypotenuse formula
double a, b, c;
std::cout << "Enter side A: ";
std::cin >> a;

std::cout << "Enter side B: ";
std::cin >> b;

std::cout << "Enter side C: ";
std::cin >> c;

a = pow(a, 2);
b = pow(b, 2);
c = sqrt(a + b);
//or c = sqrt(pow(a, 2) + pow(b, 2))
std::cout << "Side C: " << c << '\n';

return 0;
}