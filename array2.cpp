#include <iostream>
using namespace std;
int main() {
std::string students[] = {"Squidward", "Patrick", "Spnogebob", "Sandy"};
for(int i = 0; i < sizeof(students)/sizeof(std::string); i++){
cout << students[i] << '\n';
}
return 0;
}