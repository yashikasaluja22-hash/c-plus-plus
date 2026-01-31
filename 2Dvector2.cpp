#include <iostream>
#include <vector>
using namespace std;
int main() {
int rows, cols;
cout << "Enter no. of rows and columns: ";
cin >> rows >> cols;

vector<vector<int>> v(rows, vector<int>(cols));

cout << "Enter Matric elements:::\n";
for(int i = 0; i < rows; i++){
    for(int j = 0; j < cols; j++){
        cin >> v[i][j];
    }
}
// cin har ek cheez ke liye ek line dedicate karta hai, so dusri cheez woh automat., second row mein puchega  

cout << "Matric here it is:\n";
for(int i = 0; i < rows; i++){
    for(int j = 0; j < cols; j++){
        cout << v[i][j] << " ";
    }
    cout << endl;
}


//another method to print 2d vector metrix
for(auto rows : v){
    for(auto x : rows){
        cout << x << " ";
    }
    cout << endl;
}
return 0;
}