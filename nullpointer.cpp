#include <iostream>
using namespace std;
int main() {
// NULL VALUE = as special value that means something has no value
// When a pointer is holding a null value,
// that pointer is not pointing at anything 

//nullptr = keyword reprsents a null pointer literal
// nullptrs are helpful when determining if an address was successfully assigned to a pointer
int *hello = nullptr;
int x = 123;
hello = &x;
if(hello == nullptr){
    cout << "Address was not assigned\n";
}
else{
    cout << "Address was assigned\n";
    cout << *hello;
}

return 0;
}