#include <iostream>
using namespace std;
struct car{
    string model;
    int year;
    string color;
};// passing struct in a function
void Printcar(car &car);
int main() {
car car1;
car car2;

car1.model = "Mustang";
car1.year = 2023;
car1.color = "red";

car2.model = "Corvette";
car2.year = 2024;
car2.color = "blue";

Printcar(car1); // calling the function

return 0;
}
void Printcar(car &car){
    cout << car.model << '\n';
    cout << car.year << '\n';
    cout << car.color << '\n';
}