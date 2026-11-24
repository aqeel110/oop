#include"prob3.h"

base::base(int h)
{
h1=h;
}
void base:: print()const
{
cout<<"h1: "<<h1<<endl;
}
void base::seth1(int x)
{
    h1=x;
}
int base::geth1()const
{
    return h1;
}
 base::base(const base & rhs)
{
    h1=rhs.h1;
 }
  base& base::operator=(const base & rhs)
  {
      if(this!=&rhs)
      {
    h1=rhs.h1;
  }
  return *this;
}
  base::~base()
  {
  cout<<"base destructor "<<endl;
  }
  derived1::derived1(int x,int y):base(x) 
{
    h2=y;
  }
  void derived1::print()const
{
    base::print();
    cout<<"h2: "<<h2<<endl;
  }
  void derived1::seth2(int x )
{
    
    h2=x;
}
int derived1::geth2()const
{
    return h2;
}
derived1::derived1(const derived1 & rhs):base(rhs)
{
    h2=rhs.h2;
 }
  derived1& derived1::operator=(const derived1 & rhs)
  {
      if(this!=&rhs)
      {
    base::operator=(rhs);
    h2=rhs.h2;
  }
  return *this;
}
derived1::~derived1()
{
    cout<<"derived1 destructor"<<endl;
}
derived2::derived2(int x,int y,int z):derived1(x,y)
{
    h3=z;
}
void derived2::print()const
{
    derived1::print();
    cout<<"h3: "<<h3<<endl;
}
void derived2::seth3(int x)
{
    
    h3=x;
}
int derived2::geth3()const{
    return h3;
}
derived2::derived2(const derived2 & rhs):derived1(rhs)
{
    h3=rhs.h3;
 }
  derived2& derived2::operator=(const derived2 & rhs)
  {
      if(this!=&rhs)
      {
    derived1::operator=(rhs);
    h3=rhs.h3;
  }
  return *this;
}
derived2::~derived2()
{
    cout<<"derived2 destructor"<<endl;
}
