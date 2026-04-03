#include<iostream>
#include<string>
#include<vector>
using namespace std;    
class Chai{
    private:
    string teaName;
    int serving;
    vector<string> ingredients;
    public:
    Chai(){
        teaName = "Masala Chai";
        serving = 1;
        ingredients = {"Tea Leaves", "Water", "Milk", "Sugar", "Spices"};
    } 
    Chai(string n, int s, vector<string> i){
        teaName = n;
        serving = s;
        ingredients = i;
    }
    //Getters
    string getTeaName(){
        return teaName;
    }
    //Setters
    void setTeaName(string n){
     //logic
        teaName = n;
    }
    //getter for serving
    int getServing(){
        return serving + 2;
    }
    //setter for serving
    void setServing(int s){
        if(s > 0){
            serving = s+1;
        }
    }   
    //getter for vector
    vector<string> getIngredients(){
        return ingredients;
    }
    //setter for vector
    void setIngredients(vector<string> i){
        ingredients= i;
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
    Chai chai;
    chai.setTeaName("MASALA CHAI");
    
    cout << "Tea Name: " << chai.getTeaName() << endl;
    cout << "Serving: " << chai.getServing() << endl;
    return 0;
}