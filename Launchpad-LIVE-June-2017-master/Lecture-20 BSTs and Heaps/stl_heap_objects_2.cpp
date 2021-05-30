#include<iostream>
#include<queue>
#include<functional>
#include<vector>
using namespace std;


class Fruit{
public:
    string name;
    int price;

    Fruit(string n,int p){
        name = n;
        price = p;
    }

};


class myCompare{

public:
    bool operator()(Fruit a,Fruit b){
        ///If Price is Equal to sort lexicographically, Min heap based upon price > name
        if(a.price==b.price){
            return a.name> b.name;
        }
        return a.price>b.price;
    }

};

class myCompare2{

public:
    bool operator()(Fruit a,Fruit b){
        return a.name > b.name ;
    }

};
/// a  > b = MIN HEAP else max heap

int main(){


    Fruit f1("Mango",180);
    Fruit f2("Apple",180);
    Fruit f3("Guava",60);
    Fruit f4("Banana",60);

    ///Heap of Fruit objects - 1) Price 2) Name
    priority_queue<Fruit, vector<Fruit>, myCompare2>  pq;

    pq.push(f1);
    pq.push(f2);
    pq.push(f3);
    pq.push(f4);

    cout<<"Size is "<<pq.size()<<endl;

    while(!pq.empty()){

        Fruit f = pq.top();
        pq.pop();
        cout<<f.name<<endl;
        cout<<f.price<<endl<<endl;
    }




}

