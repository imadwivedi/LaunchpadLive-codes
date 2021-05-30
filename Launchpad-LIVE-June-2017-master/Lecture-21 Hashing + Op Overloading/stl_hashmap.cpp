#include<iostream>
#include<unordered_map>
using namespace std;



int main(){
    unordered_map<string,int>  myMap;

    ///Insert in 3 ways
    myMap["Banana"] = 20;
    myMap["Mango"] = 100;
    myMap.insert(make_pair("Apple",120) );

    pair<string,int> p("Guava",130);
    myMap.insert(p);


    ///Print
    for(auto node:myMap){
        cout<<node.first<<","<<node.second<<endl;
    }
    ///Buckets iterate
    for(int i=0;i<myMap.bucket_count();i++){
        ///Iterate over every linked list, ith
        cout<<"Bucket "<<i<<"->";
        for(auto it=myMap.begin(i);it!=myMap.end(i);it++){
            ///it is a pointer to a pair
            cout<<it->first<<","<<it->second;
        }
        cout<<endl;

    }



}
