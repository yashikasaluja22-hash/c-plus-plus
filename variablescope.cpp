#include<iostream>
using namespace std;
int myNum = 3;//global variable

void printNum();
int main(){
// LOCAL VARIABLES: declared inside a function or block{}
// GLOBAL VARIABLES: declared outside of all functions
int myNum = 1;// local variable
printNum();
cout << myNum << '\n';
return 0;
}
void printNum(){
    int myNum = 2;//local variable
    cout << myNum << '\n';
}
// local variables will be chosen over global variables always
// it's secure to use local variables than global.