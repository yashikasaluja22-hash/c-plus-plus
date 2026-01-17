#include <iostream>
int main() {
std::cout << "***TEMPERATURE CONVERSION***" << '\n';
std::cout << "F = Fahrenheit" << '\n';
std::cout << "C = celsius" << '\n';
char unit;
double temp;
std::cout << "Which unit wud u like to convert to? ";
std::cin >> unit;

if(unit == 'F' || unit == 'f'){
   std::cout << "Enter temp in celsius? ";
   std::cin >> temp;
   temp = (1.8 * temp) + 32.0;
   std::cout << "Temperature is : " << temp << "F\n";
}
else if(unit == 'C' || unit == 'c'){
   std::cout << "Enter temp in fahrenheit? ";
   std::cin >> temp;
   temp = (temp - 32) / 1.8;
   std::cout << "Temperature is : " << temp << "C\n";
}
else{
    std::cout << "bitch type C or F only!!\n";
}

return 0;
}