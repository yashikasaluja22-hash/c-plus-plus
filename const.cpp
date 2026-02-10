//the const keyword specifies that a variable's value is constant 
// tells compiler to prevent anything to modifying it 
//(read only)
#include <iostream>
int main() {
const double PI = 3.14159;
//u can try changing value of PI, it wont change 
const int LIGHT_SPEED = 299792458;
const int HEIGHT = 1234;
double radius = 10;
double circumference = 2 * PI * radius;
std::cout << circumference << "cm" << '\n';

return 0;
}