#include <iostream>
using namespace std;
template <typename T, typename U>// to use template functions
auto max(T x, U y){// u can use here anything --> integer, deciamls, char, etc.
return (x > y) ? x : y;
}
int main() {
cout << max(4, 8.2) << '\n';

return 0;
}