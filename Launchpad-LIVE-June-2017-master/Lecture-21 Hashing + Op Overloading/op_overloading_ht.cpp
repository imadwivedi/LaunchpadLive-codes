#include<iostream>
#include"hashtable.h"
using namespace std;

int main(){
///Fruit, 100 Key = string, price= int

    Hashtable<int> h(7);
    h.insert("Mango",100);

    h["Apple"] = 120; ///Insert
    h["Mango"] =  140; ///Update


    h.print();

    cout<< h["Mango"] <<endl; ///Search
    cout<<h["Apple"]<<endl;





return 0;
}

