#include<iostream>
#include<set>
using namespace std;


int main(){
    set<int> s;

        auto x = 5; /// x is an integer
        auto f = 3.14 /// make f a float
        /// auto automatically determines the datatype based upon the value on the RHS

    int d;
    cin>>d;
    while(d!=-1){
        s.insert(d);
        cin>>d;
    }

    ///Print the no's stored in set - MAGIC OF SET
    for(auto i:s){
        cout<<i<<" ";
    }

return 0;
}
