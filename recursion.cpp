#include <iostream>
using namespace std;
void walk(int steps);
int main() {
int steps = 100;
walk(100);//invoked a function here
//recursion = breaks a complex concept into a repeatable single step
//advantages = less code and is cleaner, is for algorithms
//disadvantages = takes more memory

return 0;
}
void walk(int steps){
    if(steps > 0){
        cout << "You take a step!\n";
        walk(steps - 1);
    }//this is recursive approach and more easy to understand 
}
/*void walk(int steps){
    for(int i = 0; i < steps; i++){
        cout << "You take a step\n";
    }
} now this is iterative approach and is more useful */