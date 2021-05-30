#include<iostream>
using namespace std;


int main(){


    char array3[3][3] = {{'A','B','\0'}, {'C','D'}, {'E','F'}};

    cout<< array3[0] <<endl;
    cout<<array3[0][1] <<endl;

    char array4[][4] = {"abc", "def", "efg", "hig"};
    cout<<array4[1] <<endl;




return 0;
}
