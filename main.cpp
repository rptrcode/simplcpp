#include <iostream>

class A {
public:


virtual ~A() {
  std::cout<<"~A()"<<std::endl;
}
};

class C {
  public :
  ~C() {
        std::cout<<"~C()"<<std::endl;
  }
};

class B : public A{
public:
C c;

};



int main() {
  A* a = new B();

delete a;
}