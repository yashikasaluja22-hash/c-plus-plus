#include<iostream>
using namespace std;
void bakePizza();
void bakePizza(string topping1);
void bakePizza(string topping1, string topping2);
int main(){
bakePizza();
bakePizza("pepperoni");
bakePizza("pepperoni", "mushrooms");

return 0;
}
void bakePizza(){
    cout << "Here is ur Pizza!\n";
}
void bakePizza(string topping1){
    cout << "Here is ur " << topping1 << " Pizza\n";
}
void bakePizza(string topping1, string topping2){
    cout << "Here is ur " << topping1 <<" and " << topping2 << " Pizza\n";
}