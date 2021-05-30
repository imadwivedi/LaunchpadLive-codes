#include<vector>
using namespace std;

template<typename T>
class Stack{

    vector<T> v;
public:
    void push(T d){
        v.push_back(d);
    }
    void pop(){
        v.pop_back();
    }
    T top(){
        return v[v.size()-1];
    }
    bool empty(){
        return v.size()==0;
    }
    int size(){
        return v.size();
    }
};
