#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool compare(int a, int b){
    return (a % 10) < (b % 10);
}
int main() {
vector<int>v = {1, 3, 9, 0, 6};
//to use built-in functions like sort,count, etc we need to use algorithm header file
sort(v.begin(), v.end());
//now sort will sort the vector in ascending order
for(int x : v){
    cout << x << " ";
}
cout << '\n';

sort(v.begin(), v.end(), greater<int>());
for(int x : v){
    cout << x << " ";
}

cout << '\n';
vector<string> names = {"zara", "apple", "mango", "banana"};
sort(names.begin(), names.end());
for(string x : names){
    cout << x << " ";
}
cout << '\n';

//to customize sorting
vector<int>v1 = {10, 55, 78, 89, 2};
sort(v1.begin(), v1.end(), compare);
for(int x : v1){
    cout << x << " ";
}

return 0;
}