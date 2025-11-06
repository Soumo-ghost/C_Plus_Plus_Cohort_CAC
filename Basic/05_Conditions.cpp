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


    return 0;

}