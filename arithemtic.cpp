#include <iostream>
int main() {
int students = 20;
//to do students = students + 1
// you can do this students += 1;
//or below one
students++;
std::cout << students << '\n';

int children = 40;
//to do children = children - 1
//u can do this --> children -= 1
//OR
children--;
std::cout << children << '\n';

students*=2;
std::cout << students << '\n';

students/=3;
std::cout << students << '\n';

int remainder = students % 3;
students%=3;
std::cout << remainder << '\n';
std::cout << students << '\n';

std::cout << 6 + 5 << '\n';
std::cout << 1212121 * 742;
return 0;
}