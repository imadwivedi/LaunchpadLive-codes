#include<iostream>
using namespace std;

int main(){
    ///Read no's till user enters
    /// a positive no

    int no;
    ///Init
    cin>>no;

    ///Termination
    while(no<0){
        cout<<no<<" ";

        ///Update Condition
        cin>>no;
    }

    return 0;
}
