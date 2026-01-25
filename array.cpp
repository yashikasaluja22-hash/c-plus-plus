#include <iostream>
int main() {
using namespace std;
//array = a data structure that can hold multiple values
// usually accessed by index number
// kind of like a variable that can hold multiple values

//std::string fruits = "apple" --> this is also an array as it hold multiptle characters but look below
std::string fruits[] = {"apple", "banana", "berries"};
cout << fruits[0] << '\n';
cout << fruits[1] << '\n';
//we can also
fruits[0] = "pineapple";
cout << fruits[0] << '\n';
//OR
std::string fruits1[3]; // here size is 3
fruits1[0] = "orange";
fruits1[1] = "papaya";
fruits1[2] = "kiwi";

double prices[] = {1.55, 2.50, 1.77};
cout << prices[4];// will generate a random garbage value here

return 0;
}