#include <iostream>
int main() {
int x; //declaration
x = 5; //assignment
int y = 6;
int sum = x + y;
std::cout << x << '\n';
std::cout << y << '\n';
std::cout << sum << '\n';
//int used for integers and double used for decimal values
double gpa = 9.5;
double price = 45.55, total = 8.800;
std::cout << gpa << '\n';
std::cout << price << '\n';
std::cout << total << '\n';

//char for single character
char grade = 'A';
char initial = 'Y';
char currency = '$';
std::cout << grade << '\n';
std::cout << initial << '\n';
//for boolean 
bool student = true;
bool power = false;
std::cout << student << '\n';
//string = sequence of text

std::string name = "Brocode";
std::string day = "Friday";
std::string address = "123 fake st.";
std::string item = "popcorn";
std::cout << item << '\n';
std::cout << "Hello " << name << '\n';
std::cout << "You live at " << address << '\n'; 




return 0;
}