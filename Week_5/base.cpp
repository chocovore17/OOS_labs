#include <iostream>
#include "base.hpp"

void Base::f_prot();
void Base::f();
void Base::display();
void Base::call_all_functions();
void Base::f_priv();


Base::Base() : n_priv(0), n_prot(0){};
Base::Base(int n1, int n2) : n_priv(n1), n_prot(n2){}

void Base::f() {
    std::cout << "Base::f()" << std::endl; 
}
void Base::display() {
    std::cout << std::cout << "Base::display():n_priv=" << n_priv << ", n_prot = " << n_prot << std::endl; 
    }
void Base::call_all_functions() { 
    std::cout << "Base::call_all_functions()" << std::endl; 
    f(); 
    f_priv(); 
    f_prot();
    }

void Base::f_prot() { 
    std::cout << "Base::f_prot()" << std::endl;
}
void  Base::f_priv() { 
    std::cout << "Base::f_priv()" << std::endl;
     }
