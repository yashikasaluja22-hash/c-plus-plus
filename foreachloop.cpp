#include <iostream>
using namespace std;
int main() {
// Foreach loop = loop that eases the traversal over an iterable data set
//below is foreach loop
std::string students[] = {"Squidward", "Patrick", "Spnogebob", "Sandy"};
for(std::string i : students){
    cout << i << '\n';
}

char grades[] = {'A', 'B', 'C', 'D'};
for(char i : grades){
    cout << i << '\n';
}
return 0;
}