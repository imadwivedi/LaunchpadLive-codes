#include<iostream>
#include<unordered_map>
using namespace std;


class Fruit{
public:
    string name;
    int price;
    string city;
public:
    Fruit(){ //Imporatant becuase we need default constructor
        //in opeartor overloading as we have paarameterised constructor
        //It will be overrides tahts why we need default constructor.
    }
    Fruit(string n,int p,string c){
        name = n;
        price = p;
        city = c;
    }
};


int main(){
    unordered_map<string,Fruit>  myMap;
    Fruit f("Mango",100,"Delhi");
    
    myMap[f.name] = f;
    //similiar to mymap["Mango"]=100;
    //mymap["Key"]=value;
    
    Fruit fs = myMap["Mango"];//Searching of mango
    cout<<fs.city<<endl;
    cout<<fs.price<<endl;
    
    //Another way of searching
    unordered_map<string,Fruit> ::iterator got=myMap.find("Mango");
    if(got==myMap.end())
        cout<<"Not Found"<<endl;
    else
        cout<<got->first<<(got->second).price;
    
    ///Count function - 0 or 1 whether fruit exist or not
    cout<<"Apple "<<myMap.count("Apple")<<endl;
    cout<<"Mango "<<myMap.count("Mango")<<endl;
    
    cout<<"Enter a fruit to search ";
    string fruit;
    cin>>fruit;
    
    ///deletion in mango
    //myMap.erase("Mango");
    
    if(myMap.count(fruit)!=0){
        cout<<"price is "<<myMap[fruit].price<<endl;
    }
    else{
        cout<<"fruit doesn't exist";
    }
    
}
