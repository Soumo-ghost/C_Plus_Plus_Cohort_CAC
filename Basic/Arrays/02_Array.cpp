#include<iostream>
using namespace std;
int totalChaiServed(int chai[], int size){
int total=0;
for(int i; i<size;i++){
total = total+chai[i];
}
return total;
};

int main(){
    // int chaiServed[7]={60, 80, 78, 89, 90, 50 ,60};
    // cout<<"Chai Cups Served o day 1:"<<chaiServed[0];
    // cout<<"chai Cups Served on day 2:"<<chaiServed[1];

//12 min pause
int chaiServed[7]={34, 46, 78,56 ,55,45,56};
int total=totalChaiServed(chaiServed,7);
    return 0;
}
