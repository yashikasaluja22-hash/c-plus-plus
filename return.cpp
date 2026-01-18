#include <iostream>
double square(double length);

int main() {
// return = a keyword, return a value to the spot
// where u called a the encompassing function
double length = 5.0;
double area = square(length);
std::cout << "area of square: " << area << "cm\n";
return 0;
}
double square(double length){
    return length * length;
}