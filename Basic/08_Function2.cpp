#include<iostream>
#include<string>
using namespace std;
void PourChai(int &Cups){
    Cups=Cups+3;
    cout<<"Poured Cups Is "<<Cups<<endl;
}
int main(){
int Cups=6;
PourChai(Cups);
cout<<"Total Cups"<<Cups<<endl;
    return 0;
}