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
    void print() const{
        cout<<name<<endl;
        cout<<price<<endl<<endl;
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

int Car::cnt = 0;

int main(){

    Car A(200,"Audiiiiiii");
    cout<<sizeof(A)<<endl;
    //A.print();

    Car C(A);
    C.price  = 300;
    C.name[0] = 'C';
    C.print();
    A.print();

    cout<<"Tyres is "<<A.tyres<<endl;

    Car *D = new Car(1000,"CBCar");
    cout<<Car::cnt<<endl;

    delete D;
    cout<<Car::cnt<<endl;


return 0;
}
