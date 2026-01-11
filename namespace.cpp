// NAMESPACE = provides solution for preventing name conflicts in large projects. 
//each entity needs a unique name. A Namespace allows for identically named entities as long as the
// namespaces are different.
#include <iostream>
namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}
//u can write any random name instead of first or second
int main() {
int x = 0;
std::cout << x << '\n';
std::cout << first::x << '\n';
std::cout << second::x << '\n';
return 0;
}      