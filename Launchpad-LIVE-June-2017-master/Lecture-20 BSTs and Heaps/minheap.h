#include<vector>
using namespace std;

class minHeap{
    vector<int> v;

    void heapify(int i){

        int leftChild = 2*i;
        int rightChild = leftChild + 1;

        ///It is not necessary left and right child actually exist
        int minIndex = i;

        if(leftChild < v.size()&& v[leftChild]<v[i]){
                minIndex = leftChild;
        }
        if(rightChild <v.size() && v[rightChild]<v[minIndex]){
                minIndex = rightChild;
        }
        if(minIndex!=i){
            swap(v[i],v[minIndex]);
            heapify(minIndex);
        }
    }

public:
    minHeap(){
        v.push_back(-1);
    }
    void push(int data){
        v.push_back(data);
        int index = v.size()-1;
        int parent = index/2;

        while(index>1&&v[index]<v[parent]){
            swap(v[index],v[parent]);
            index = parent;
            parent = parent/2;
        }
    }

    int getMin(){
        return v[1];
    }

    ///Deletes the min element or the root node
    void pop(){
        ///Swap 1 and last element
        int last = v.size() - 1;
        swap(v[1],v[last]);
        v.pop_back();

        heapify(1);

    }
    bool isEmpty(){
        return v.size()==1;
    }



};
