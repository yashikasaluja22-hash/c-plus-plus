#include <iostream>
using namespace std;
int main() {
// Foreach loop = loop that eases the traversal over an iterable data set
//below is foreach loop
std::string students[] = {"Squidward", "Patrick", "Spnogebob", "Sandy"};
for(std::string student : students){
    cout << student << '\n';
}

char grades[] = {'A', 'B', 'C', 'D'};
for(char grade : grades){
    cout << grade << '\n';
}
return 0;
}