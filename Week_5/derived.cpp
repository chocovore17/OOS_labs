#include <iostream>
#include "Base.hpp"


Derived::Derived() : Base() , n_base(0){}
Derived::Derived(int n1 , int n2 , int n3) : Base(n1, n2), n_base(n3) {}
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