#include<iostream>
#include<string>
#include<vector>
using namespace std;

class BankAcc{
    private:
    string accountNumber;
    double balance;
    public:
    BankAcc(string accNum, double initialballance){
        accountNumber = accNum;
        balance = initialballance;
    }
    //getter
    double getBalance() const{
        return balance;
    }
    //Method to deposite Money
    void deposite(double amount){
        if(amount>0){
            balance += amount;
            cout<<"Deposited: "<<amount<<". New Balance: "<<balance<<endl;
        }else{
            cout<<"Invalid amount. Please enter a positive value."<<endl;
        }
    }
    void withdraw(double amount){
        if(amount>0 && amount <= balance){
            balance -= amount;
            cout<<"Withdrew: "<<amount<<". New Balance: "<<balance<<endl;
        }else{
            cout<<"Invalid amount."<<endl;
        }
    }

};
int main(){
    BankAcc myAcc("123456789", 1000.0);
    myAcc.getBalance();
    myAcc.deposite(500.0);
    myAcc.withdraw(200.0);

    return 0;
}
