#ifndef base_h
#define base_h
#include<iostream>
using namespace std;
{
int h1{};
public:
base(int);
void  print() const 
~base();
};
class derived1:public base
{
    int h2{};
    public:
       derived1(int,int);
       void  print() const;
       ~derived1();
};
class derived2:public derived1
{
    int h3{};
    public:
    derived2(int,int,int);
    void print () const ; 
    ~derived2;

};
#endif
