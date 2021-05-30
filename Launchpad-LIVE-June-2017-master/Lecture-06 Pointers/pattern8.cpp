#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        ///SPaces
        for(int s=1;s<=n-i;s++){
            cout<<" ";
        }

        ///Inc nos
        int no=i;
        for(int s=1;s<=i;s++){
            cout<<no<<"";
            no++;
        }

        ///Dec nos
        no=2*i-2;
        for(int s=1;s<i;s++){
            cout<<no<<"";
            no--;
        }
        cout<<endl;
    }

}
