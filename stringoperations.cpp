#include <iostream>
#include <string>
using namespace std;
int main() {
string name;
cout << "Enter ur name: ";
cin >> name;
cout << "Hello " << name << '\n';
//does not read spaces

cin.ignore();

string Fullname;
cout << "Enter ur Fullname: ";
getline(cin, Fullname);
cout << "Hello " << Fullname << '\n';
//reads spaces

string hey = "Yashika";
cout << hey.length() << '\n';

//STRING CONCATENATION MATLAB 2 STRINGS KO JODNA
string a = "Hello";
string b = "World";
string c = a + " " + b;
cout << c << '\n';

//Character access(indexing)
string  s = "India";
cout << s[0] << '\n';
cout << s[1] << '\n';

//STRING APPEND (END MEIN JODNA)
string t = "Code";
t.append("Chef");
cout << t << '\n';

//to empty an string
string heyy = "Hello";
heyy.clear();
cout << heyy.length() << '\n';//length  will be 0

//to check if string is empty
if(heyy.empty()){
    cout << "heyy string is empty!!" << '\n';
}

string x = "Programming";
cout << x.substr(0, 4) << "\n"; //0 index no. is included while 4 index is excluded

//find character word
string u = "I love coding";
cout << u.find("love") << '\n'; //agar nhi mila toh string::npos return hoga
cout << u.find("c") << '\n';

//to replace a string 
u.replace(7, 6, "coffee");// 7 represents the first character index number of string u wish to replace
//6 represents no. of characters in the preious string which will be replaced
cout << u << '\n';

string h = "dollhouse";
for(int i = 0; i < h.length(); i++){
    cout << h[i]; 
}
cout << '\n';

for(int i = 0; i < h.length(); i++){
    cout << h[i] << " "; 
}
cout << '\n';
//to compare 2 strings
string s1 = "Apple";
string s2 = "Banana";
cout << s1.compare(s2) << '\n';
//if both strings are same then 0 return hoga
//if s1 choti hai s2 se then -1 return hoga
//if s1 is bigger than s2 then +ve 1 return hoga
//OOOOOOOORRRRRRRRRRR
cout << (s1 == s2 ? "same" : "different");

return 0;
}