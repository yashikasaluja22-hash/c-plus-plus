#include <iostream>
using namespace std;
int main() {
//object = collection of attributes and methods
// they can have characteristics and could perform actions
// can be used to mimic real world items (ex. phone, book, etc)

// method = it is a function that belongs to an object

// in an object we can relate to function as real life functions of that object jus like below
class human{
    public:
    string name;
    string occupation;
    int age;

    void eat(){
        cout << "This person is eating\n";
    }
    void drink(){
        cout << "This person is drinking\n";
    }
    void sleep(){
        cout << "This person is sleeping\n";
    }
};
human human1;
human human2;

human1.name = "Rick";
human1.occupation = "scientist";
human1.age = 70;

cout << human1.name << '\n';
cout << human1.occupation << '\n';
cout << human1.age << '\n';
//calling function next
human1.eat();
human1.drink();
human1.sleep();

human2.name = "Morty";
human2.occupation = "Badass";
human2.age = 25;

cout << human2.name << '\n';
cout << human2.occupation << '\n';
cout << human2.age << '\n';

return 0;
}