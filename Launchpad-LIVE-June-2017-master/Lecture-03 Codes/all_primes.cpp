#include<iostream>
using namespace std;

int main(){
    int range;
    cin>>range;

    ///Print for a range of numbers
    for(int no=1;no<=range;no++){
    ///Logic for a single number
    int i;
    for(i=2;i<=no-1;i++){
        if(no%i==0){
           //cout<<"Not prime" <<endl;
           break;
        }
    }
        if(i==no){
            cout<<no<<" ";
        }
    }
    cout<<"Thanks"<<endl;

return 0;
}
