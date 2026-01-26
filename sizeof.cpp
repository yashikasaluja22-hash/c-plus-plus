#include <iostream>
int main() {
using namespace std;
//sizeof() = determines size in bytes of a;
// variable, data type, class, objects, etc.
double gpa = 2.4;
cout << sizeof(gpa) << " bytes\n";
//double has always 8 bytes size
std::string name = "yashika is goat";
cout << sizeof(name) << " bytes\n";//does 'nt matter even if u write whole sentence in this string
//it will still show same size
char alpha = 'A';
bool pretty = true;
cout << sizeof(alpha) << " bytes\n";// char has 1 byte size
cout << sizeof(pretty) << " bytes\n";// bool has 1 byte size only

char grades[] = {'A', 'B', 'F', 'C'};
cout << sizeof(grades) <<'\n';
std::string name1[] = {"Peter", "Susan", "Edmund", "Lucy"};
cout << sizeof(name1) << '\n';
cout << sizeof(name1)/sizeof(name1[0]) << '\n'; //gives no. of elements in array
//OR
cout << sizeof(name1)/sizeof(std::string) << '\n'; //to get no. of elements another method
return 0;
}