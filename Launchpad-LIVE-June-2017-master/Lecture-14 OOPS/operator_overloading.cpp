#include<iostream>
#include<cstring>
using namespace std;
///Doesnt take memory, just a blueprint & piece of code
class Car{
public:
    int price;
    char *name;
    const int tyres;
    static int cnt;

public:
    ///This is your default constructor
    Car():name(NULL),price(0),tyres(4){
        cout<<"Making a car..."<<endl;
        cnt++;
    }
    ///Parametrised Contructor
    Car(const int p,const char *n,int t=4):tyres(t){
        price = p;
        name = new char[strlen(n)+1];
        strcpy(name,n);
        cnt++;
    }
    Car(Car &X):tyres(X.tyres){
        name = new char[strlen(X.name)+1];
        strcpy(name,X.name);
        price = X.price;
        cnt++;
    }

    ///Setters
    void setPrice(const int p){
        if(p>200){
            price = p;
        }
        else{
            price = 200;
        }
    }
    int getPrice() const{
        return price;
    }
    void setName(const char *n){
        strcpy(name,n);
    }
    void input(){
        char s[1000];
        cin>>s;
        name = new char[strlen(s)+1];
        strcpy(name,s);
        cin>>price;
    }
    void print() const{
        cout<<name<<endl;
        cout<<price<<endl<<endl;
    }
    void operator+(Car &X){
        int l1 = strlen(name);
        int l2 = strlen(X.name);

        char *oldName = name;
        name = new char[l1+l2+1];
        strcpy(name,oldName);
        strcpy(name+l1,X.name);
        delete [] oldName;

        price = price + X.price;
    }
    void operator[](char *s){
        cout<<s<<" use this car "<<name<<endl;
    }


    ~Car(){
        cout<<"Destroying the car "<<name<<endl;
        if(name!=NULL){
            delete name;
            name = NULL;
            cnt--;
        }

    }



};

ostream& operator<<(ostream &os,Car &X){
    X.print();
    return os;
}
istream& operator>>(istream&is, Car &X){
    X.input();
    return is;
}

int Car::cnt = 0;

int main(){

    Car A(200,"Audi");
    Car B(300,"BMW");

    A.print();
    B.print();

    A+B;
    cout<<A;

    A["Prateek"];

    Car C,D;
    cin>>C>>D;
    cout<<C<<D;



return 0;
}
