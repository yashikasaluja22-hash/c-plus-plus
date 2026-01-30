#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
//user input using vector --> another method
int n;
cout << "how many elements: ";
cin >> n;
cin.ignore(); //buffer clear

cout << "Enter elements: ";
vector<string>items(n);
//for one line input
for(int i = 0; i < n; i++){
    getline(cin, items[i]);//iss getline u can write a name including spaces but it will ask input for
    //every single element in next line
}

for(string x : items){
    cout << x << " ";
}

return 0;
}