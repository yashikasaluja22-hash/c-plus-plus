#include <iostream>
int main() {
// LOGICAL OPERATORS
// && = checks if two condition are true 
// || = checks if at least one condition is true 
// ! = reverses the logical state of operand

double temp;
std::cout << "Enter temp: ";
std::cin >> temp;

if(temp > 0 && temp <= 30){
std::cout << "temp is good!!" << '\n';
}
else if(temp <= 0 || temp > 30) {
std::cout << "temp is either too hot or too cold" << '\n';
}
else{
    std::cout << "temp is bad!!" << '\n';
}
//above else statment is not needed, juss ignore it ....

bool sunny = true;
if(!sunny){
    std::cout << "It's cold outside!";
}
else {
    std::cout << "It's sunny outside";
}

return 0;
}