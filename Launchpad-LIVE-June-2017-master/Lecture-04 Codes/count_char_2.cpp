#include<iostream>
using namespace std;

int main(){
    /// Read a string till $ doesnt come
    char ch;
    int digits=0,alpha=0,spaces=0,other=0;

    ///Read the first input character
    ch = cin.get();

    ///Termination - $
    while(ch!='$'){


        if(ch>='0'&&ch<='9'){
            digits++;
        }
        else if(ch>='a'&&ch<='z'){
            alpha++;
        }
        else if(ch==' '||ch=='\n'){
            spaces++;
        }
        else{
            other++;
        }





        ///Read the next character
        ch = cin.get();


    }

    cout<<"Count is "<<digits<<" Digits "<<endl;
    cout<<"Count is "<<spaces<<" Spaces "<<endl;
    cout<<"Count is "<<other<<" Others "<<endl;
    cout<<"Count is "<<alpha<<" Alphabets "<<endl;


    return 0;
}
