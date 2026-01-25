#include <iostream>
int main () {
// do while loop = do some block of code first
// THEN repeat again if the condition is true
int number;
do{
    std::cout << "Enter a positive no. : ";
    std::cin >> number;
}while(number < 0);
return 0;
}
//intialize variables for do-while loop, same for "while" loop
