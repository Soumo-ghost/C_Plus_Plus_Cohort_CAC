#include<iostream>
using namespace std;

int* prepareChaiOrders(int cups){
    // stack and heap/dynamic memory
    //stack memory s temporary but Heap is permanent 
    int* order =new int [cups];//new signs the dynamic memroy
    for (int i=0;i<cups;i++){
        order[i]=(i+1)*10;
    }
    return order;
}


int main(){

//cpp can not give array by dafault ---
//but can be a work around to give by memory addresss  aka Pointer
//Pointer hold The memory location
//Pointer has (* &)----
//* is data type 
// & is Memory Adress
int cups=5;
prepareChaiOrders(cups);
 //------------------------incomplete--------------------

    return 0;
}