#include<iostream>
using namespace std;


int main(){
    /// Decimal to binary
    int no;
    //Init
    cin>>no;
    //Terminate
    while(no>0){
        int rem = no%2;
        cout<< rem ;

        //Update
        no = no/2;
    }

return 0;
}
