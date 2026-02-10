#include <iostream>
using namespace std;
int add(int x, int y);
int main() {
int x, y;
cout << "Enter value of x and y: ";
cin>>x>>y;
cout << add(x,y);

return 0;
}
int add(int x, int y){
    int result = x + y;
    return result;
}