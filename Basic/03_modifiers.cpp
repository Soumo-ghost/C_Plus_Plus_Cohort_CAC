#include<iostream>
#include<string>
using namespace std;

int main(){
    int smallTeaPack=100;
    unsigned TeaPack=-19;
    cout<<TeaPack;//Will give Garbage Value
    long LargerTeaStorage=1000000;
    cout<<LargerTeaStorage;
    //long long is biggest data type
    //-------Type Casting---------
    float teaPrice=49.99;
    int roundedTeaPrice=(int) teaPrice;
    //float to int
    int TeaQuantity=3;
    double totalprice=teaPrice*TeaQuantity;
    //---Strings-----
    string favarouteTea="Lemmon Tea\n";
    //char is for i charecter----
    string description="Known as \"best\" Tea";
    //\"best\" it is escappe Chatrecter
    cout<<favarouteTea<<description;
    string userTea;
    int Teaquanntity;
    cout<<"What you like to order";
    getline(cin,userTea);
    //ask for quntity
    cout<<"how many cups of "<<userTea<<"would you like to have";
    cin>>Teaquanntity;
    
    return 0;
} 