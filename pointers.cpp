#include <iostream>
#include <vector>
using namespace std;
int main() {
// Pointers = variable that stores memory address of another variable
// sometimes it is easier to work with an address
// & address of operator
// * dereference operator
string name = "Bro";
string *pName = &name;
cout << pName << '\n';// it will show stored address of name
cout << *pName << '\n';//here it will access the value stored in the memory address which this variable holds

vector<string>v = {"pizza1", "pizza2", "pizza3", "pizza4"};
//vector is itself an address so no need to use & to store its address
//string *pV = &v[0]; u can use this too
//but below is most preferred
string *pV = v.data();
cout << pV << "\n";
cout << *pV << '\n';//it will value of index no. 0
cout << *(pV + 1) << '\n';// gives value of index no.1
cout << *(pV + 2) << '\n';
return 0;
}