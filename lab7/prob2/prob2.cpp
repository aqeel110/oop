#include"prob2.h"
base::base(int a):h1(a){
    cout<<"base constructor "<<endl;
}
base::~base(){
    cout<<"destructor base "<<endl;
}
void base::print()const{
      cout<<h1<<endl;
      }

derived1::derived1(int a,int b):base( a){
     h2=b;
}

void derived1::print()const{
    base::print();
      cout<<h2<<endl;
      }
derived1::~derived1(){
    base::~base();
    cout<<"Derived1 destructor "<<endl;
}
    derived2::derived2(int a ,int b,int c):derived1(a,b){
         h3=c; 
    }
       void derived2::print()const{
      derived1::print();
       cout<<d2_variable1<<endl;
      }
        derived2::~derived2(){
            derived1::~derived1();
        cout<<"Derived2 destructor "<<endl;
    }
    
