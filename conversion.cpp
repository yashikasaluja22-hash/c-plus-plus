// type conversion = conversion of a value of one data type to another 
// implicit = automatic
// explicit = precede value with new data type (int), mostly in parenthesis
#include <iostream>
int main() {
double x = 2.5;
std::cout << x << '\n';
//here if we will change data type of x from double to int so automatically it will print the int value of x
//that is 2 (int value of 2.5) 
// that is implicit conversion

double y = (int) 3.1415;
//here we have stored integer value of y in double datatype of y
//so it will print that
// this is explicit conversion
std::cout << y << '\n';

char t = 100;
// will print acc. to ascii table
//implicit
std::cout << t << '\n';

//explicit
std::cout << (char) 111 << '\n';

int correct = 8;
int questions = 10;
double score = correct/(double)questions * 100;
//explicit used here
std::cout << score << "%" << '\n';
return 0;
}