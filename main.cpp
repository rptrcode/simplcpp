#include <iostream>

class A {
  public:
virtual ~A() {
  std::cout<<"~A()"<<std::endl;
}
};

class B : public A{
public:
};

int main() {
  A* a = new B();

delete a;
}