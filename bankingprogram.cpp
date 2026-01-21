#include<iostream>
using namespace std;
void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main() {
double balance = 0;
int choice = 0;

do{
cout << "****Welcome to BANK*******\n";
cout << "Enter ur choice\n";
cout << "1.Show Balance\n";
cout << "2.Deposit Money\n";
cout << "3.Withdraw Money\n";
cout << "4.Exit\n";
cin >> choice;

switch(choice){
    case 1: showBalance(balance);
           break;
    case 2: balance =+ deposit()
         break;
    case 3: balance =- withdraw(balance);
         break;
    case 4: cout << "Thanks for visiting!!\n";
         break;
    default: cout << "Invalid choice!\n";
          break;
}
}while(choice != 4);



return 0;
}