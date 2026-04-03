#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Chai{
    private:
    string teaName;
    int serving;
    public:
    Chai(string name , int serve) : teaName(name),serving(serve){}
    friend bool compareServing(const Chai &Chai1, const Chai &Chai2);
    void display() const{
        cout<<"teaname:"<<teaName<<endl;
    }


};
bool compareServing(const Chai &Chai1, const Chai &Chai2){
    return Chai1.serving>Chai2.serving;
}
int main(){
Chai masalaChai("masalaChai",40);
Chai GingerChai("Ginger Chai",6);
masalaChai.display();
GingerChai.display(); 

if(compareServing(masalaChai, GingerChai)){
cout<<"Masala Chai is Large than ginger"<<endl;
}else{
cout<<"vice versa";
}
    return 0;
}