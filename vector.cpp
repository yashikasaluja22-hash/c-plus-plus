#include <iostream>
#include <vector> //needed to use vector
using namespace std;
int main() {
//in C++ we use something better than an array
// Vector is a dynamic smart array
// int arr[5]
//Size fix
//Baad mein bada ya chhota ❌

//vector<int>v;
/*Size fix nahi
Jab chaaho badhao ✔️
Size khud yaad rakhta ✔️*/

//HOW TO USE??
vector<int>v; //empty vector, will print garbage values if forced
vector<int>v1 = {1, 2, 3}; //values ke saath

//how to add values in vector
v.push_back(10); //assigns value to its 0 index no.
cout << v[0] << '\n';
v.push_back(20); // assigns value to index no. 1
cout << v[1] << '\n';
//and thats how to assign value in an already existing vector

//Vector me specific index par value add karna bilkul possible hai
//syntax --> v.insert(v.begin() + index, value);
vector<int>v3 = {10, 50, 60, 90};
v3.insert(v3.begin() + 2, 35); //index 2 par 30 insert karna and isse size increse hota hai cuz value add hui replace nhi
//to replace type --> v3[2] = 35; ****************
cout << v3[2] << '\n';
cout << v3[4] << '\n';
//insert use karne se desired index par ni. add hua magar uske baad har elemnt ka index shift hua as size increase hua 
cout << v3.size() << '\n';//output will be 5

//now LOOP mein kaise use karein????
for(int i = 0; i < v3.size(); i++){
    cout << v3[i] << " ";
}
cout << '\n';
//OR (BEST OF ALL)
for(int i : v3){ //foreach loop used here
    cout << i << " ";
}
cout << '\n';
//how to delete a specific index number in an vector
v3.erase(v3.begin() + 2);
cout << v3.size();// size will also be changed

return 0;
}