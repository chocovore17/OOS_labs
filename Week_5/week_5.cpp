#include <iostream>
#include <vector> 
#include "DerivedAgain.hpp"
#include "Base.hpp"
#include "Derived.hpp"


int main(){
    std::cout << "compiled" << std::endl;

    //TEST 1: Base and Derived classes
    Base* b1 = new Base(2, 3); 
    Derived* d1 = new Derived;
    DerivedAgain* da1 = new DerivedAgain;

    b1->call_all_functions();
    d1->display();
    delete b1;
    delete d1;
    delete da1;

    std::vector<Base> vb;

    for (int i =0; i<5; i++){
        vb.push_back(new Base(i, i+1));
    }

    for (int i=0; i < vb.size(); vb++){
        vb[i]->display();
    }

    //TEST 2: DerivedAgain class
    //TEST 3: Vector of Base objects (intro to polymorphism)
    //TEST 4: Vector of Base dynamic objects (intro to polymorphism )
    //TEST 5: Make f() a virtual member function in Base class, and repeat TEST 3 and TEST 4
    //virtual void f() { std::cout << ”Base::f()” << std::endl; }
//􏰯 TEST 4: Vector of Base dynamic objects
//􏰯 TEST 5: TEST 3 and TEST 4 with f() as a virtual function in class Base.

    return 0;
}