#include <iostream>
int main() {
srand(time(NULL));// srand to run a different code each time we run the program 
int num = rand();  //this will generate a random no. 
std::cout << num << '\n';

int num1 = rand() % 6; // this will generate a random numbers from between 0 to 5 both inclusive
std::cout << num1 << '\n';

int num2 = (rand() % 6) + 1;// now it will generate randome numbers from 1 to 6 both inclusive as we have set min value
std::cout << num2 << '\n';
return 0;
}