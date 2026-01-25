#include<iostream> // for input & ouput commands
#include <iomanip> // for setprecision and fixed
#include <limits> // for numeric_limits, cin.ignore wale mein 
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

//agar user input galat deta hia eg: abc, 1234, etc then cin hamara fail ho jayega means true ho jayega
//then cin clear taki invalid user input clear ho sake
// cin ignore taki code tab tak ignore jab tak newline nhi dikh jati, warna woh new code mein bhi aaygea
//and as input hi galat hai toh baad wala code run karne ka no use so we have used continue here, skip ho jaye
//fir ekdum fresh start hogi
// agar hum yeh nhi karenge ho cin hang ho skata hai
if(cin.fail()){
     cin.clear();
     cin.ignore(numeric_limits<streamsize>::max(), '\n');
     cout << "Invalid input\n";
     continue;
}

switch(choice){
    case 1: showBalance(balance);
           break;
    case 2: balance += deposit();
         showBalance(balance);
         break;
    case 3: balance -= withdraw(balance);
         showBalance(balance);
         break;
    case 4: cout << "Thanks for visiting!!\n";
         break;
    default: cout << "Invalid choice!\n";
          break;
}
}while(choice != 4);
return 0;
}
//sometime double doesnt add decimal points so we use header file <iomanip>
// and use setprecision(integer here)
// this fixed will display our balance upto 3 decimal places.
void showBalance(double balance){
 cout << "Your balance is: $" << setprecision(3) << fixed << balance << '\n';
}
// agar tum function ke andar variable ko intialise kar rhe ho then no need ki uske parementer ke andar(brackets)  mein uska variable ka naam likho
double deposit() {
     double amount = 0;
     cout << "How much money u wish to deposit: ";
     cin >> amount;
     //after this u need to show user its balance so we will include showbalance function in case 2 above 
     if(amount > 0){
          return amount;
     }
     else{
          cout << "Not a valid amount!!\n";
          return 0;
     }
}
double withdraw(double balance){
     double amount = 0;
     cout << "How much money u wish to withdraw: ";
     cin >> amount;

     if(amount <= balance){
          cout << '$ ' << amount << " has been withdrawn.\n";
          return amount;
     }
     else if(amount < 0){
          cout << "That's not a valid amount!!\n";
          return 0;
     }
     else{
          cout << "Insufficient funds!!\n";
          return 0;
     }
}