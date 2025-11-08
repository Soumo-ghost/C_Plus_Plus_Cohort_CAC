#include<iostream>
#include<string>
using namespace std;
int main(){
    //-----If Statement------
    string order;
    cout<<"Only Green Tea is available others are not";
    cin>>order;
    if(order!="Green Tea"){
        cout<<"Order is Canceled "<<order<<"not avaiable";
    }
    cout<<"order confrimed";
//-----If- ELse Statemenr--------
float time;
cout<<"Current Hour ";
cin>>time;
if(time>8&&time<18){
    cout<<"Dukan Khula ha a jao";
}else{
    cout<<"nikal lamda dukan bandh hai";
}
//-----Nested If--------
int cups;
float price;
cout<<"Enter no of cups you have";
cin>>cups;
price=cups*1.99;
if(cups>20){
    cout<<"tou get 20% discount";
price=price-(price*0.2);
cout<<"price="<<price;
}else if(cups>10){
    cout<<"tou get 10% discount";
price=price-(price*0.1);
cout<<"price="<<price;
}else{
cout<<"price="<<price;
}
//------Switch Case---------
double price;
int choise;
cout<<"select a tea";
cout<<"1: Green Tea";
cout<<"2: Lemon Tea";
cout<<"3: Ulong Tea";
cout<<"4: Darjiling Tea";
cout<<"Enter Choise no";
cin>>choise;
switch(choise){
    case 1:
        price=2.0;
        cout<<price<<"Green tea"<<endl;
        break;
    case 2:
        price=3.5;
        cout<<price<<"Lemon"<<endl;
        break;
    case 3:
        price=3.5;
        cout<<price<<"Ulong"<<endl;
        break;
    case 4:
        price=5.5;
        cout<<price<<"Darjiling"<<endl;
        break;
    default:
        cout<<"bc thik se ppar"<<endl;
}
    return 0;

}