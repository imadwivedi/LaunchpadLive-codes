#include<iostream>
using namespace std;

int main(){
    char a,b,c;

    //cin>>a>>b>>c;
    ///cin doesnt read white spaces & enter
    /// cin.get() reads every character including white spaces & enter
    /// Is this difference clear ?
    a = cin.get();
    b = cin.get();
    c = cin.get();


    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;

    return 0;
}
