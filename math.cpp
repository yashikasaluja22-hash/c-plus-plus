#include <iostream>
#include <cmath>
int main() {
double x = 4;
double y = 8;
double z;
// basic math functions
//u dont library cmath for max and min functions
z = std::max(x, y);
std::cout << z << '\n';

z = std::min(x, y);
std::cout << z << '\n';

z = pow(2, 4);
std::cout << z << '\n';

z = sqrt(9);
std::cout << z << '\n';

z = abs(-3.15); //absolue value function - it gives +ve version of every number and gives integer value only 
std::cout << z << '\n'; 

double t = 3.14;
z = round(t);
std::cout << z << '\n';

z = ceil(t); //this function will round up the number matlab round off aage ki taraf karega 
std::cout << z << '\n';

z = floor(t);// this function will round off in backward direction only the number
std::cout << z << '\n';


return 0;
}