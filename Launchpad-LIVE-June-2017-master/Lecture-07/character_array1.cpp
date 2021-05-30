#include<iostream>
using namespace std;


int main(){
    char a[] = {'a','b','c','\0'}; ///WE have to store NULL
    cout<<a<<endl;
    cout<<sizeof(a)<<endl;


    char b[] = "abc"; ///Hidden Null character, automatically at the end of string
    cout<<b <<endl;
    cout<< &b <<endl;
    cout<<sizeof(b)<<endl;

    char ch =' ';
    cout<<"Space is ";
    cout<< int(ch);

    char ch2 = '\0';
    cout<<"Null is ";
    cout<<int(ch2);

    char c[1000];

    /// cin>>c; Read the first word.
    ///Read a sentence - cin.getline(nameofarray, sizeofarray,delim='\n')

    cin.getline(c,1000);
    cout<<c <<endl;






}
