#include <iostream>
int main() {
std::string name;

std::cout << "Enter ur name pls: ";
std::getline(std::cin, name);

if(name.length() > 12){ //name.length() checks length of string variable
    std::cout << "Your name cannot be over 12 characters\n";
}
else if(name.empty()){ //checks if string variable is empty
    std::cout << "u did'nt enter ur name!!\n";
}
else{
    std::cout << "Welcome " << name << '\n';
}

name.clear();// clear the value in string variable 
std::cout << "Hello " << name;

std::string name1 = "yashika";

name1.append("@gmail.com");// this adds another given string (suffix) in the string value 
std::cout << "You username now is " << name1  << '\n';

std::cout << name1.at(0)<< '\n';// character the index 0
std::cout << name1.at(6) << '\n';// character at index 6 of name1 string variable 

//to insert a charcter at some index number in ur string varaiable the use below
name1.insert(1, "#");
std::cout << name1 << '\n';

std::cout << name1.find('a') << '\n'; // to find a character in a string variable
//to erase in string variable use below

name1.erase(0, 3); // here first no. is the beginning and next no. is end of erase but the last no.(index no.) is exclusive
std::cout << name1 << '\n';

return 0;
}