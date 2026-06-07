#include <iostream>
#include <string>
using namespace std;
/*What are Template Functions?

A template function lets you write one function that works for multiple data types.
Avoid Code Repetition

Without templates → same logic repeated
With templates → write once, use everywhere

2. Type Flexibility

Works with:

int
float
double
even string (if operation supports it)
3. Used Everywhere (Real Industry)
STL (vector, sort, max) uses templates
Makes code scalable + reusable*/
template <typename T>
T add(T a, T b){
    return a + b;
}

template <typename T>
T getMax(T a, T b){
    return (a > b) ? a : b;
}
int main() {
cout << add(2, 3) << '\n'; //int 
cout << add(4.5, 7.9) << '\n'; //double
cout << add(string("blah"), string("slah")) << '\n';

cout << getMax(45, 67)<< '\n';
cout << getMax("hello", "cindy")<< '\n';//both have same no. of chacarcters so code will give results acc. to ASCII value

return 0;
}