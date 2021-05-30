#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

///Sort length k base pe krna, length same to alphabet(lexico)
bool compare(string &s1,string &s2){

    if(s1.length()==s2.length()){
        return s1<s2;
    }
    return s1.length()>s2.length();
}


int main(){


    string s[100];

    int n;
    cin>>n;
    cin.get();

    for(int i=0;i<n;i++){
        getline(cin,s[i]);
    }

    sort(s,s+n,compare);

    cout<<"Sorted array is "<<endl;
    for(int i=0;i<n;i++){
        cout<<s[i]<<endl;
    }



    return 0;
}
