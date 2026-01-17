#include <iostream>
int main() {
// break = break out a loop, exits a loop
// continue = skips current iteration
for(int i = 1; i <=20; i++){
    if(i == 13){
        break;
    }
    std::cout << i << '\n';
}

for(int i = 1; i <= 8; i++){
    if(i == 6){
        continue;
    }
    std::cout << i << '\n';
}
return 0;
}