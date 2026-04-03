#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Chai{
    public:
    string teaName;
    int serving;
    vector<string> ingredients;
    //DELIGATING CONSTRUCTOR
    
    Chai(string n):Chai(n,1,{"Water","Tea Leaves"}){}
    
    //MAIN CONSTRUCTOR
    
    Chai(string n, int s, vector<string> i){
        teaName = n;
        serving = s;
        ingredients = i;
        cout<<"main constrauctor called"<<endl;

    }
    void displayChaiDetails(){
        cout << "Tea Name: " << teaName << endl;
        cout << "Serving: " << serving << endl;
        cout << "Ingredients: ";
        for(string ingredient : ingredients){
            cout << ingredient << ", ";
        }
        cout << endl;
    }

};
int main(){
    Chai quickChai( "Quick Chai");
    quickChai.displayChaiDetails();
    return 0;
}