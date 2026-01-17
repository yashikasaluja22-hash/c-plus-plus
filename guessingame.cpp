#include <iostream>
int main() {
int num;
int tries = 0;
int guess;

srand(time(NULL));
num = (rand() % 100) + 1;
std::cout << "NUMBER GUESSING GAME" <<'\n';

do{
    std::cout << "Guess a no. b/w(1-100): ";
    std::cin >> guess;
    tries++;
    
    if(num > guess){
        std::cout << "TOO LOW!!\n";
    }
    else if(num < guess){
        std::cout << "TOO HIGH!!\n";
    }
    else{
        std::cout << "CORRECT!! Your no. of tries are: " << tries << '\n';
    }
}while(num != guess);
std::cout << "*******END******";

return 0;
}