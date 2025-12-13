//opp----
//everything tretes as objects
//main fb can exist without any class
//in comparosion with JAVA and c# (100 % Oopl)

//cpp may not a true OOp langauge unlike java is,

//oopsla-- paper to read

//like SBI  Original from is Class And  given from to users are copy of original form 
#include<iostream>
#include<vector>
//vector Documentation is from microsoft
using namespace std;
class Chai{
    public://this give acsess to main fn
    //data members(attribuits)
    string teaName;//name of tea
    int servings;//Number of Serving tea
    vector<string>ingridents; //list of ingidents for thr tea
    //Member Function 
    void displayChaiDetails(){
        cout<<"Tea NAme:"<<teaName<<endl;
        cout<<"Tea Servings"<<servings<<endl;
        cout<<"Ingridents";
        for(string ingrident:ingridents){
         //spelized loop for array or vector used 
         cout<<ingrident<<" ";  
        }
        cout<<endl;
    }
};

int main(){
    Chai chaiOne;//Chai Chai is Also valid
    chaiOne.teaName="Tea Name";//Acsess Modifiers in CPP MS WEBSITE
// defaults is Privet in nature
    chaiOne.servings=3;
    chaiOne.ingridents={"Water","Lemon","Honey","Tea"};
    chaiOne.displayChaiDetails();
    Chai chaiTwo;
    chaiTwo.teaName="Masala Tea";
    chaiTwo.servings=5;
    chaiTwo.ingridents={"Water","Milk","Ginger","Masala","Tea"};
    chaiTwo.displayChaiDetails();
    return 0;
}

