//return Type functionname(parameters)
//ffunction body
//void -- return empty
#include<iostream>
#include<string>
using namespace std;
// int checkTemp(int temp){
// return temp;
// }
// void makeChai(){
//     cout<<"Chai is good";
// }   
// //declaration for chai
// void serveChai(int cups);

// void serveChai(string teaType="Masala Tea"){
// //upper masala Tea is for when no value is passed through man function like a backup parameter
//     cout<<"serving"<<teaType;
// }
// int main(){

// int temp =checkTemp(12);
// cout<<temp;
// makeChai;
// serveChai("lemon Tea");
//     return 0;
// }
// void serveChai(int cups){
//     cout<<"cups of chai"<<cups;
// }
//-------------------Second--------------------
//passed By value--
void pourChai(int cups){
    cups=cups+4;
    cout<<"Poured Cups"<<cups<<endl;
}
int main(){
    int Cups=2;
    pourChai(Cups);
    cout<<"Total Cusp Pourd"<<Cups<<endl;
    return 0;
}
//Passed By Reference
