#include <iostream>
#include "base.hpp"

void base::f_prot();
void base::f();
void base::display();
void base::call_all_functions();
void base::f_priv();


base::Base() : n_priv(0), n_prot(0){};
base::Base(int n1, int n2) : n_priv(n1), n_prot(n2){}

void base::f() {
    std::cout << "Base::f()" << std::endl; 
}
void base::display() {
    std::cout << std::cout << "Base::display():n_priv=" << n_priv << ", n_prot = " << n_prot << std::endl; 
    }
void base::call_all_functions() { 
    std::cout << "Base::call_all_functions()" << std::endl; 
    f(); 
    f_priv(); 
    f_prot();
    }

void base::f_prot() { 
    std::cout << "Base::f_prot()" << std::endl;
}
void  f_priv() { 
    std::cout << "Base::f_priv()" << std::endl;
     }
