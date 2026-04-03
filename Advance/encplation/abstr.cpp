#include<iostream>
#include<string>
#include<vector>
using namespace std;        
class Tea{

    public:
    virtual void prepareIngradients()=0; //PPure Functions
    virtual void brew()=0; //PPure Functions
    virtual void serve()=0; //PPure Functions
    void makeTea(){
        prepareIngradients();
        brew();
        serve();
    }



};
//Derived class
class GreenTea:public Tea{
   public:
   void prepareIngradients() override{
    cout<<"Preparing green tea ingradients: green tea leaves, water."<<endl;
   }
    void brew() override{
     cout<<"Brewing green tea for 2-3 minutes."<<endl;
    }
    void serve() override{
     cout<<"Serving green tea in a cup."<<endl;
    }
   
   


};
class TaiwalTea:public Tea{
   public:
   void prepareIngradients() override{
    cout<<"Preparing Taiwan tea ingradients: green tea leaves, water."<<endl;
   }
    void brew() override{
     cout<<"Brewing Taiwan tea for 2-3 minutes."<<endl;
    }
    void serve() override{
     cout<<"Serving Taiwan tea in a cup."<<endl;
    }
   
   


};
int main(){
    GreenTea myGreenTea;
    myGreenTea.makeTea();
    // MInd it we dont declare Make function in the derived class but we can call it because its in the base class and its not pure function    
    cout<<endl;

    TaiwalTea myTaiwalTea;
    myTaiwalTea.makeTea();

    return 0;
}