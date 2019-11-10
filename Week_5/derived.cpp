#include <iostream>
#include "Derived.hpp"



void Derived::f() { 
    std::cout << "Derived::f()" << std::endl; 
}
void Derived::f(int n) { 
    std::cout << "Derived::f(int n) with n=" << n<<std::endl; 
}
void Derived::display() { 
    std::cout << "Derived::display(): " << std::endl; Base::display(); 
    std::cout << "n_base=" << n_base << std::endl; 
 }
void Derived::new_function() { 
    std::cout << "Derived::new_function()"<<std::endl; 
}