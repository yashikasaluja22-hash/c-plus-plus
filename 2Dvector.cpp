#include <iostream>
#include <vector>
using namespace std;
int main() {
vector<vector<int>> v; //empty vector
//Outer vector → rows
//Inner vector → columns

int rows = 3, cols = 4;
vector<vector<int>> v1(rows, vector<int>(cols, 0)); //fills each element with zero
//0 0 0 0
//0 0 0 0
//0 0 0 0 --> output of v1
v1[0][1] = 5; //first row, second column
cout << v1[0][1] << '\n';

return 0;
}