#include<iostream>
using namespace std;

int main(){
    char ch;
    int x = 0,y=0;


    ch = cin.get();
    while(ch!='\n'){
        if(ch=='N'){
            y++;
        }
        else if(ch=='S'){
            y--;
        }
        else if(ch=='E'){
            x++;
        }
        else if(ch=='W'){
            x--;
        }
        ch = cin.get();
    }
    ///I know the final coordinate
    cout<<x<<" and "<<y<<endl;

    ///x and y are both positive - First Quadrant
    if(x>=0&&y>=0){
        ///Print E x times
        for(int i=1;i<=x;i++){
            cout<<"E";
        }

        ///Print N y times
        for(int i=1;i<=y;i++){
            cout<<"N";
        }
    }
    /// Second , Third and Fourth Quadrants - Homework !




return 0;
}
