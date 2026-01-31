#include <iostream>
using namespace std;
void printinfo(const string &name, const int &age);
int main() {
// const parameter = parameter that is effectively read-only 
// code is more secure and conveys intent, useful for refernces and pointers
string name = "Bro";
int age = 21;
printinfo(name, age);
return 0;
}
void printinfo(const string &name, const int &age){
//name = " ";
//age = 0; if u remove comments and write this code under this function then it will show error
//as we have used const parameter (comment ke andar wala code)
cout << name << '\n';
cout << age << '\n';
}//here we can use our above function without & too, using & is more preferable and accurate