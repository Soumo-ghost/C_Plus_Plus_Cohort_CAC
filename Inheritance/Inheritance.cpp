#include<vector>
#include<string>
#include<iostream>
using namespace std;
//base class
class Tea{
    protected:
    string teaName;
    int servings;
    public:
    Tea(string name, int serve){
        teaName = name;
        servings = serve;
        cout<<"Tea constructor called for "<<teaName<<endl;     
    }
virtual void brew() const{
    cout<<"Brewing"<<teaName<<"with genric method"<<endl;

}
virtual void serve() const{
    cout<<"Serving"<<servings<<"with genric method"<<endl;
    
}
virtual ~Tea(){
    cout<<"Tea destructor called for "<<teaName<<endl;     

}
};
//derived class
class GreenTea:public Tea{
    public:
    GreenTea(int servings):Tea("Green Tea", servings){
        cout<<"GreenTea constructor called"<<endl;     
    }
    void brew() const override{
        cout<<"Brewing "<<teaName<<" with specific method for green tea."<<endl;
    }
    ~GreenTea(){
        cout<<"GreenTea destructor called"<<endl;     
    }
};
class MasalaTea:public Tea{
    public:
    MasalaTea(int servings):Tea("Masala Tea", servings){
        cout<<"MasalaTea constructor called"<<endl;     
    }
    void brew() const override final{
        cout<<"Brewing "<<teaName<<" with specific method for masala tea."<<endl;
    }
    ~MasalaTea(){
        cout<<"MasalaTea destructor called"<<endl;     
    }
};

// class SpicedTea:public MasalaTea{
//     public:
//     void brew() const override{
//         cout<<"Brewing "<<teaName<<" with specific method for spiced tea."<<endl;
//     }
// };

int main(){
    Tea* myTea = new GreenTea(2);
    Tea* tea2 = new MasalaTea(9);
    myTea->brew();
    tea2->serve();


    
    delete myTea;
    delete tea2;
    
    
    
    
    return 0;
}