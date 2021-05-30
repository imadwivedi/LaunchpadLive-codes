#include<iostream>
#include<vector>
using namespace std;



int main(){

    ///Vector is a resizable(dynamic) array
    /// that can grow or shrink in size.

    vector<int>   v;
    cout<<v.capacity() <<endl;

    /// Reserve - tell the vector to reserve some fixed no boxes in the beginning
    v.reserve(100); /// will contain atleast 100 boxes in the beginning

    cout<< v.capacity()<<endl;

    /// Push_back(element) inserts elements in the vector

    for(int i=1;i<=5;i++){
       int d;
       cin>>d;  /// dont write cin>>v[i] !
       v.push_back(d);
    }
    /// 1 4 9 16

    ///Print the Vector
    /// size() given the no of elements stored in the vector
    for(int i=0;i<v.size();i++){
        cout<< v[i] <<" ";
    }



    cout<<endl;
    ///Pop_back function
    v.pop_back();
    //v.shrink_to_fit();


    v.resize(2);
    /// At function
    for(int i=0;i<v.size();i++){
        cout<< v.at(i) <<" ";
    }

    /// Capacity - the actual size of the vector
    cout<<endl;
    cout<<v.capacity()<<" is capacity "<<endl;












return 0;
}
