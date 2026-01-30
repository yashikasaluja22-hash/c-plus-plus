#include <iostream>
#include <vector>
using namespace std;
int main() {
int x, n;
vector<int>v;

cout << "Enter no. of elements: ";
cin >> n;

cout << "Enter elements here: ";
for(int i = 0; i < n; i++){
cin >> x;
v.push_back(x);
}

for(int i : v){
 cout << i << " ";
}

return 0;
}