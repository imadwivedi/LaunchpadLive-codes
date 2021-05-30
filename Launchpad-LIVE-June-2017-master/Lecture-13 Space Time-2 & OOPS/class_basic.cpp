#include<iostream>
#include<cstring>
using namespace std;

///Class is just a piece of code, representing how a car bucket will look like
///Car is class ( doesn't take up memory)
class Car{

private:
   char name[13];
   int price;


public:
    ///This is your default constructor - Hidden by default
    Car(){
        cout<<"Making one car"<<endl;
    }
    ///Parametrised Constructor
    Car(char *n,int p){
        cout<<"Making one car by second constructor "<<endl;
        strcpy(name,n);
        price = p;
    }
    ///Copy Constructor - must accept parameter by refernce
    Car(Car &X){
        cout<<"Making one car by copy constructor "<<endl;
        strcpy(name,X.name);
        price = X.price;
    }

   ///Function that operate on class data members
   void setName(char *n){
        strcpy(name,n);
   }
   ///Setters
   void setPrice(int p){
        if(p>2000){
            price = p;
        }
        else{
            price = 2000;
        }
    }
    int getPrice(){
        return price;
    }
    ///Getters
   void print(){
        cout<<"Name :"<<name<<endl;
        cout<<"Price :"<<price<<endl;
    }
    ///Copy Assignment Operator
    void operator=(Car &X){
        cout<<"In Copy Assignment Operator "<<endl;
        strcpy(name,X.name);
        price  = X.price;
    }
    ///Destructor - which gets called when an object is destroyed
    ///Static Object - Destructor Scope Over
    ///Dynamic Object - Destructor 'delete' se call hoga
    /// Inside destructor we should free the dynamically allocated memory
    ~Car(){
        cout<<"Destroying car "<<name<<endl;
    }

};

int main(){

     Car *dc = new Car("CB Car",20005);
    (*dc).print();

    delete dc;
    Car A; ///A - is an object of that class.Actually Takes up Memory
    cout<<sizeof(A) <<endl;

   // A.price = -100;
    A.setName("Audi");
    A.setPrice(2500);
   // A.print();
    ///Print price
    cout<<A.getPrice()<<endl;


    Car B("BMW",10000); ///Line call the constructor of the class.
    B.print();

    ///Copy Constructor -
    Car C(B);
    C.print();
    B.print();
    Car D = C; ///THis will call Copy Constructor !
    D.print();

    ///Copy Assignment Operator
    Car E; /// Default constructor call hoga

    E = A;
    E =B;
    E = C; ///Copy Assignment operator call hoga
    E.print();

    /// Suppose i want to create a dynamic car ( heap )





return 0;
}
