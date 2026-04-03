#include<iostream>
#include<vector>
using namespace std;
class Chai{
public:
string* teaName;
int sreving;
vector<string> ing;
//parameter constructer constructer
Chai(string name, int serve, vector<string> ing){
    cout<<"constuctor called"<<endl;
teaName= new string(name);
sreving=serve;
ing=ing;
}
Chai(Chai&& other){
    teaName=new string(*other.teaName);
    sreving=other.sreving;
    ing=other.ing;
    cout<<"Copy constuctor called"<<endl;
}
~Chai(){
    delete teaName;
    cout<<"destruction"<<endl;
}
// Member fuctions
void displaychai(){
    cout<<"Tea name"<<*teaName<<endl;
    cout<<"Serving"<<sreving<<endl;
    cout<<"ingridents";
    for(string ing : ing){
        cout<<ing<<" ";
    }
    cout<<endl;
}

};
int main(){
Chai lemontea("lemontea",2,{"watter, ","lemon","honey"});
lemontea.displaychai();
Chai copiedChai=lemontea;
copiedChai.displaychai();
*lemontea.teaName = "modified tea";
cout<<"lemon tea-----------"<<endl;
lemontea.displaychai();
cout<<"cpoied tea"<<endl;














    return 0;
}