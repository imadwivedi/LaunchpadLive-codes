#include<iostream>
using namespace std;

void printTable(int init,int finalv,int step){

    int f = init,c;
    while(f<=finalv){
        c = 5*(f-32)/9;
        cout<<f<<" "<<c<<endl;
        f = f + step;
    }
}

int main(){

    int initv,finalv,step;
    cin>>initv>>finalv>>step;

    printTable(initv,finalv,step);




    return 0;
}
