//Loops started again after a backlog
#include <iostream>
#include <string.h>
using namespace std;
int main(){
    //keywords 
   // while loops
    int teaCups;
    cout<<"enter no of teacups to serve"<<endl;
    cin>>teaCups;
    while(teaCups>0){
        cout<<"Serving A cup of Tea \n"<<teaCups<<"Remining"<<endl;
        teaCups--;
    }
    cout<<"All tea cups are served";
    string response;
    do{
        cout<<"Do you want Tea (yes/no) ";
        cin>>response;
    }while(response!="No"||response!="no");
    int Cups=6;
    for(int i=1;i<=Cups;i++){
        cout<<"Brewing a cup OF tea  "<<i<<endl;

    }
    cout<<"Outside";
    string Respopnse;
    while(true){
        cout<<"Do you Want MOre (Type stoppppp to not)";
        cin>>Respopnse;
        if(Respopnse=="stop"){
            break;
        }
    }
    cout<<"No more tEa for Youu Banchod";
   // List or Array---- Continious Memory Allocation
    string TeaTypes[3]={"Green", "Black","Lemon"};
    for (int i = 0; i < 3; i++)
    {
        if(TeaTypes[i]=="Green"){
            cout<<"Skipping Tea"<<endl;
            continue;
        }
        cout<<"Brewing"<<TeaTypes[i];

    }
        for(int i=0;i<5;i++){
        cout<<"Brewing"<<TeaTypes[i]<<endl;
        for(int j=1;j<=3;j++){
            cout<<"Brewing"<<j<<"cup Of"<<TeaTypes[i]<<endl;

        }
    }
    return 0;
}