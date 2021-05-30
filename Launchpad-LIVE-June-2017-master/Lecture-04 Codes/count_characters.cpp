#include<iostream>
using namespace std;

int main(){
    /// Read a string till $ doesnt come
    char ch;
    int count = 0;

    ///Read the first input character
    ch = cin.get();

    ///Termination - $
    while(ch!='$'){
        count = count + 1;

        ///Read the next character
        ch = cin.get();


    }

    cout<<"Count is "<<count<<endl;
        count = 0;
        ch = cin.get();
      while(ch!='$'){
        count = count + 1;

        ///Read the next character
        ch = cin.get();
    }
    cout<<count<<endl;


    return 0;
}
