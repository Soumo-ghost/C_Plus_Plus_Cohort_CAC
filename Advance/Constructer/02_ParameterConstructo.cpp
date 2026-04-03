#include<iostream>
#include<vector>
using namespace std;
class Chai{
public:
string teaName;
int sreving;
vector<string> ing;
//parameter constructer constructer
Chai(string name, int serve, vector<string> ing){
    cout<<"constuctor calle";
teaName="not tea";
sreving=2;
ing={"wat","tea"};
}

// Member fuctions
void displaychai(){
    cout<<"Tea name"<<teaName<<endl;
    cout<<"Serving"<<sreving<<endl;
    cout<<"hehe";
    for(string ing : ing){
        cout<<ing<<"";
    }
    cout<<endl;
}

};
int main(){
Chai lemontea("lemontea",2,{"watter, ","lemon","honey"});
lemontea.displaychai();














    return 0;
}