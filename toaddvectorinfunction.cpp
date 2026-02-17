#include <iostream>
#include <vector>
using namespace std;
void printvector(vector<int>& v);

vector<int> createvector(){// we use these kind of vector functions of this format to return more than 1 value
    vector<int>v2 = {5, 4, 3, 6};
    return v2;
}

int main() {
vector<int>v = {1, 2, 3, 4};
printvector(v);
cout << '\n';

vector<int>v1 = createvector();
cout << v1[1];

return 0;
}
void printvector(vector<int>& v){
  for(int x : v){
    cout << x << " ";
  }
}