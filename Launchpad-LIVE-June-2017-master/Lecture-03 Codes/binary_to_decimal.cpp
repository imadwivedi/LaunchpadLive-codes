#include<iostream>
using namespace std;


int main(){
    /// Binary To Decimal
    long int no;
    //Init
    cin>>no;

    long int ans = 0, p = 1;

    while(no>0){
        int last_digit = no%10;

        ans = ans + last_digit*p;
        p = p*2;

        ///Update
        no = no/10;
    }

    cout<<ans;


return 0;
}
