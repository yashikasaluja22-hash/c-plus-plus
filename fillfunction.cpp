#include <iostream>
#include <vector>
#include <string>//Compiler ko batana padta hai ki string kya hoti hai aur uske functions kaise kaam karte hain.
#include <algorithm>// cuz we have used fill function
using namespace std;
int main() {
// Fill Function = fills a range of elements with a specified value
// fill(begin, end, value)
vector<string>foods(100); // 100 strings ka vector
fill(foods.begin(), foods.end(), "pizza");
for(string x : foods){
    cout << x << '\n';
}

const int SIZE = 100; 
vector<string> fruits(SIZE);
fill(fruits.begin(), fruits.begin() + 50, "apple");//first half
fill(fruits.begin() + 50, fruits.end(), "Cherry");// second half
for(string x : fruits){
    cout << x << '\n';
}
return 0;
}