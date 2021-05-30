#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    ///Rows1 denotes rows in first part of pattern
    int rows1 = n/2 + 1;
    int i=1; /// i denotes the current row
    ///Print the first part
    while(i<=rows1){
        ///Spaces
            int cnt = 1;
            while(cnt<=rows1-i){
                cout<<" ";
                cnt = cnt + 1;
            }

        ///Stars
            cnt = 1;
            while(cnt<=2*i-1){
                cout<<"*";
                cnt = cnt + 1;
            }
        cout<<endl;

      i = i + 1;
    }
    /// Lets print the second part
    /*
    acrooss
    multipele
    lines
    */


}
