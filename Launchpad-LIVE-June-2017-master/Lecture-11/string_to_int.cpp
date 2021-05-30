#include<iostream>
#include<cstring>
using namespace std;

int stringToInt(char *a,int j){
    if(j==0){
        return 0;
    }

    int last_digit = a[j-1] - '0';
    int chotaInt = stringToInt(a,j-1);

    int ans = chotaInt*10 + last_digit;
    return ans;
}

int main(){

    char a[] = "1234";
    int len = strlen(a);

    int ans = stringToInt(a,len);
    cout<<ans<<endl;
    cout<<ans+1<<endl;

return 0;
}
