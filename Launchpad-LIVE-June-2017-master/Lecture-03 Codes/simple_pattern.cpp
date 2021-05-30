#include<iostream>
using namespace std;


int main(){

    int rows;
    cin>>rows;

   int i=1;
   /// i is for row count, j is for count of no in that row
    while(i<=rows){

        int no;

        if(i%2==1){
            no = 1;
        }
        else{
            no = 0;
        }

        ///For each row - print i no's starting from no
        int j = 1;
        while(j<=i){
            cout<<no<<" ";
            no = 1 - no;
            j = j + 1;
        }

        cout<<endl;
        i=i+1;
    }

return 0;
}
