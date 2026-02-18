#include <iostream>
using namespace std;

class Area{
private:
    double length, breadth;

public:
    void getInput(){
        cout << "Enter length and breadth: ";
        cin >> length >> breadth;
    }

    double areaofrectangle(){
        return length * breadth;
    }
};

int main() {
    Area rectangle;

    rectangle.getInput();  // input inside class
    cout << "Area = " << rectangle.areaofrectangle();

    return 0;
}
// declare different function for taking input and calculating part inside class