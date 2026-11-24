#include"prob2.h"
base::base(int a):h1(a)
{
    cout<<"base constructor "<<endl;
}
base::~base()
{
    cout<<"destructor base "<<endl;
}
void base::print()const
{
      cout<<h1<<endl;
      }

derived1::derived1(int x,int y):base( x)
{
     h2=y;
}

void derived1::print()const

    base::print();
      cout<<h2<<endl;
      }
derived1::~derived1()
{
    base::~base();
    cout<<"Derived1 destructor "<<endl;
}
    derived2::derived2(int x ,int y,int z):derived1(x,y)
{
         h3=z; 
    }
       void derived2::print()const
{
      derived1::print();
       cout<<d2_variable1<<endl;
      }
        derived2::~derived2()
{
            derived1::~derived1();
        cout<<"Derived2 destructor "<<endl;
    }
    
