#include<iostream>
#include<cstring>
using namespace std;
///Doesnt take memory, just a blueprint & piece of code
class Car{
private:
    int price;
    char name[20];
public:
    ///This is your default constructor
    Car(){
        cout<<"Making a car..."<<endl;
    }
    ///Parametrised Contructor
    Car(int p,char *n){
        price = p;
        strcpy(name,n);
    }
    ///Copy Constructor
    Car(Car &X){
        cout<<"Making a copy of "<<X.name<<endl;
        strcpy(name,X.name);
        price = X.price;
    }

    ///Setters
    void setPrice(int p){
        if(p>200){
            price = p;
        }
        else{
            price = 200;
        }
    }
    int getPrice(){
        return price;
    }
    void setName(char *n){
        strcpy(name,n);
    }
    void print(){
        cout<<name<<endl;
        cout<<price<<endl<<endl;
    }


    void operator=(Car &X){
        ///In Copy Assignment Operator
        strcpy(name,X.name);
        price = X.price*2;
    }
    ~Car(){
        cout<<"Destroying the car "<<name<<endl;
    }
};

int main(){

    Car A; ///A takes memory
    A.setPrice(100);
    A.setName("Audi");
    A.print();

    Car B(200,"BMW");
    B.setPrice(210);
    B.print();
    cout<<B.getPrice()<<endl;

    ///Call the copy constructor to make a copy

    Car C = B; ///Copy Constructor
    C.print();

    Car D(B);  ///Copy Constructor
    D.print();

    D = A; ///Copy Assigment Operator
    D.setName("Datsun");
    D.print();

    Car *dc = new Car(1000,"CBCar");
    (*dc).print();

    delete dc;


return 0;
}
