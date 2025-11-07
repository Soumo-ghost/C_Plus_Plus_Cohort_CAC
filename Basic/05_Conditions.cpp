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

    return 0;

}