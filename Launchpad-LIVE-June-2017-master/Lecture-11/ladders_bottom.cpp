#include<iostream>
using namespace std;


int waysBU(int n,int k){
    int ans[100] = {0};
    ans[0] = 1;

    for(int step=1;step<=n;step++){

        for(int jump=1;jump<=k;jump++){
            if(step-jump>=0){
                ans[step] += ans[step-jump];
            }
        }
    }
    return ans[n];
}

int main(){
    int n,k;


}
