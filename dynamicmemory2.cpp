#include <iostream>
using namespace std;
int main() {
char *Grades = NULL;
int size;

cout << "How many grades to enter in?:  ";
cin >> size;

Grades = new char[size];

for(int i = 0; i < size; i++){
    cout << "Enter grade # " << i + 1;
    cin >> Grades[i];
}

for(int i = 0; i < size; i++){
    cout << Grades[i] << " ";
}

delete[] Grades;
return 0;
}