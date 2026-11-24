#ifndef base_h
#define base_h
#include<iostream>
using namespace std;
class base
{
    private:
    int h1{};
    public:
    base(int a=0);
    base(const base &);
    base& operator=(const base &);
    void setb_variable(int );
    int getb_variable()const;
   
      ~base();
};
class derived1:public base
{
    private:
    int h2{};
    public:
    derived1(int ,int);
     derived1(const derived1 &);
    derived1& operator=(const derived1 &);
    void setd1_variable(int);
    int getd1_variable()const;
    ~derived1();
};
class derived2:public derived1
{
    private:
    int h3{};
    public:
    derived2(int ,int,int);
     derived2(const derived2 &);
    derived2& operator=(const derived2 &);
    void setd2_variable(int );
    int getd2_variable()const;
    ~derived2();
};
ostream& operator<<(ostream &, const derived2 &);
#endif
