#include<iostream>
using namespace std;

template<typename T>
class Vector{

    T * arr;
    int cs;
    int ms;

public:
    Vector(const int ds=4){
        cs = 0;
        ms = ds;
        arr = new T[ms];
    }
    void push_back(const T d){
        if(cs==ms){
            ///Expand it to twice
            T *oldArr = arr;
            ms = ms*2;
            arr = new T[ms];

            for(int i=0;i<cs;i++){
                arr[i] = oldArr[i];
            }

            delete [] oldArr;
        }

        arr[cs] = d;
        cs++;
    }
    void pop_back(){
        if(cs>0){
            cs--;
        }
    }

    T at(const int i) const{
        return arr[i];
    }

    T operator[](const int i){
        return arr[i];
    }
    int size() const{
        return cs;
    }
    int capacity() const{
        return ms;
    }
    void operator!(){
        for(int i=0;i<cs;i++){
           // arr[i] *= -1;
        }
    }
    void operator+(Vector &X){

        for(int i=0;i<X.size();i++){
            push_back(X[i]);
        }
    }
};
/*
istream& operator>>(istream&is,Vector &v){

            T d;
            is>>d;
            while(d!=-1){
                v.push_back(d);
                cin>>d;
            }
            return is;
}
*/

template<typename T>
ostream& operator<<(ostream&os,Vector<T> &v){

    for(int i=0;i<v.size();i++){
        os<<v[i]<<" ";
    }
    cout<<endl;
    return os;
}


