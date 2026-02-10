#include <iostream>
using namespace std;
int main() {
// dynamic memory = Memory that is allocated after the program is compiled & running.
// we are using a operator --> new
int *Num = NULL;
Num = new int;
*Num = 21;
cout << Num << '\n';
cout << *Num << '\n';
//whenever using new operator, you should use "delete" too;
delete Num;
return 0;   
}