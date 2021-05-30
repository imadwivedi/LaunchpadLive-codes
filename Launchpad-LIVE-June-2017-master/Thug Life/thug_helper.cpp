#include<iostream>
#include<cstring>
using namespace std;

#define MAXSIZE 50000

/* Returns the Run Length Encoded string for the
   source string src */

int cnt[MAXSIZE];
char dest[MAXSIZE];

int k;

void encode(char *a)
{

    int len = strlen(a);

    k=0;

    for(int i=0;i<len; ){
        char current_char = a[i];
        cnt[k] = 0;
        dest[k] = current_char;
        while(i<len && a[i]==current_char){
            i++;
            cnt[k]++;

        }
        k++;
    }

}

void decode(){

    for(int i=0;i<k;i++){

        for(int j=0;j<cnt[i];j++){

            if(dest[i]=='@'|| dest[i]==' '||dest[i]=='\n')
                cout<<dest[i];
            else
                cout<<"+";
        }
    }
}
void generateOutput(){

    for(int i=0;i<k;i++){
            cout<<cnt[i]<<" ";
            switch(dest[i]){
            	case ' ': cout<<'x';
            				break;
            	case '\n':cout<<'y';
            				break;
            	case '@':cout<<'z';
            				break;
            	case '+':cout<<'w';
            			break;
            }
            cout<<' ';
    }
}


int main(){
    char str[1000000];

    cin.getline(str,1000000,'$');

   // cout<<str<<endl;
    encode(str);

    generateOutput();
	//decode();
    //cout<<k<<endl;
   // decode();
   //cout<<encode(str)<<endl;
   // decode();


return 0;
}
