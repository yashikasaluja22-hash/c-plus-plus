// typedef =  reserved keyword used to create an additional name (alias) for another data type.
// new identifier for an existing type 
// helps with readability abd reduces typos
#include <iostream>
typedef std::string text;
typedef int num;
//instead of typedef u can use "using" , just format is a bit different
// better to use 'using'
using num1 = int;
int main() {
text name = "Yashika";
text surname = "Saluja";
//here now text acts as string matlab name and surname are text (string) variables 
num pin = 1212;
num marks = 45;

num1 items = 10;
num1 rate = 55;

std::cout << name << '\n';
std::cout << surname << '\n';
std::cout << "here is my pin number " << pin << '\n';
std::cout << "marks: " << marks << '\n';
std::cout << items;
return 0;
}