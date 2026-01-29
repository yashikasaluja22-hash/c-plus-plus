#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
string s = "Programming";
char ch = 'g';
int count1 = 0;
//to read a character in a string
for(char i : s){//foreach loop
    if(i == ch){
        count1++;
    }
}
cout << count1 << '\n';
//another method 
cout << count(s.begin(), s.end(), ch);
//cout << count(s.begin(), s.end(), 'g') <-- this will work too
return 0;
}