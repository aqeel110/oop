#ifndef base_h
#define base_h
#include<iostream>
using namespace std;
{
    int h1{};
    public:
           base();
           ~base();

};

class derived1:public base
{
    int h2{};
    public:
       derived1();
       ~derived1();

};
class derived2: public derived1  
{
    int h3{};
    public:
        derived2(); 
        ~derived2();
};
#endif  
