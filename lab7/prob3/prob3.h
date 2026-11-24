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
    void seth1(int );
    int geth1()const;
    void print()const;
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
    void seth2(int);
    int geth2()const;
    void print()const;
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
    void seth3(int );
    int geth3()const;
    void print()const;
    ~derived2();
};
#endif
