#include<iostream>
using namespace std;

int power(int x,int y){
    if(y==0){
        return 1;
    }
    return x*power(x,y-1);

}

///Some Problem with Pen
int fastPower(int x,int y){
    if(y==0){
        return 1;
    }

    int halfPower = fastPower(x,y/2);
    //cout<<halfPower<<endl;


    halfPower *= halfPower;

    if(y&1){
        return x*halfPower;
    }

    return halfPower;
}

int main(){
    cout<< fastPower(3,5) <<endl;

return 0;
}
