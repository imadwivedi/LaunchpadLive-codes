#include<iostream>
#include<cstring>
#include "Vector.h"
using namespace std;


int main(){

    Vector<int> v1;
    for(int i=0;i<10;i++){
        v1.push_back(i);
    }

    cout<<v1;
    /*
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<",";
    }

    !v;


    cout<<v<<endl;

    cout<<endl;

    cout<<v1<<endl;


    Vector v2;
    cin>>v2;
    cout<<v2;

    v1 + v2;
    cout<<v1 <<endl;
    */

    Vector<string> vs;
    string s;
    cin>>s;
    while(s!="-1"){
        vs.push_back(s);
        cin>>s;
    }
    cout<<vs<<endl;


return 0;
}
