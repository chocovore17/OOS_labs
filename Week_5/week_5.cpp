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

    std::vector<Base*> vb;

    for (int i =0; i<5; i++){
        vb.push_back(new Base(i, i+1));
    }

    for (int i=0; i < vb.size(); i++){
        vb[i]->display();
    }

    return 0;
}