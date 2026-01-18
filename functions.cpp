#include <iostream>
void happybirthday(){
    std::cout << "Happy Birthday!!\n";
    std::cout << "Happy Birthday!!\n";
    std::cout << "Happy Birthday!!\n";
}   

void happybirthday2(std::string name);
void happybirthday3(std::string name2, int age);

int main() {
// Function = a block of reusable code
happybirthday();

std::string name = "Minnie";
happybirthday2(name);// u need to make aware ur function of the variable u r using with it

std::string name2 = "Blossom";
int age = 20;
happybirthday3(name2, age);
return 0;
}
void happybirthday2(std::string name){// here u aware ur function
std::cout << "Happy Birthday " << name << '\n';
}

void happybirthday3(std::string name2, int age){
    std::cout << "Happy Birthday " << name2 << '\n';
    std::cout << "You are " << age << "yrs old now!!\n";
}
//u can write block of code for function before int main or after return 0;
//now we will be using two paramenters in our function
// enter the parameter in the function --> which u r using in function's block of code 