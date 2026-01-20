#include <iostream>
using namespace std;
string concatStrings(string string1, string string2);
int main() {
string firstname = "Yashika";
string lastname = "Saluja";
cout << "Fullname is: " << concatStrings(firstname, lastname) << '\n';
return 0;
}
string concatStrings(string string1, string string2){
    return string1 + " " + string2;
}
