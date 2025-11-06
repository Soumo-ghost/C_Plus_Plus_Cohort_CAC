#include<iostream>
#include<string>
using namespace std;
int main(){
// //----Arthematic Operater
// //+/-/*///%
// int teaCups;
// float cupsPrice;
// cout<<"Howmany Teacups do you need";
// cin>>teaCups;
// cout<<"Per Tea Cups Price ";
// cin>>cupsPrice;
// float totalPrice=teaCups*cupsPrice;
// if(totalPrice>100){
//     totalPrice=totalPrice-(totalPrice*0.05);
//     cout<<"you are given a 5 persent discount New Total is"<<totalPrice;

// }
// else{
// cout<<"your total Price is "<<totalPrice;
// }
// //-----Assignment Opertaors-----
// int teaBags;
// cout<<"how many Tea Bags do you need";
// cin>>teaBags;
// if(teaBags<10){
//     teaBags=teaBags+5;
//     cout<<"total Tea Bags is"<<teaBags;
// }else{
//     cout<<"your total Tea Bags "<<teaBags;
// }
//----Relation Operators---------
int customerTea;
string rank;
cout<<"Enter the Tea Cups do you have";
cin>>customerTea;
if(customerTea>20){
rank="Gold";
}else if(customerTea>10){
    rank="Silver";
}else{
rank="Normal";
}
cout<<"your Tea Rank is "<<rank;
return 0;
}