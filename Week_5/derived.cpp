#include <iostream>
#include "base.hpp"


derived::Derived() : Base() , n_base(0){}
derived::Derived(int n1 , int n2 , int n3) : Base(n1, n2), n_base(n3) {}
void derived::f() { 
    std::cout << "Derived::f()" << std::endl; 
}
void derived::f(int n) { 
    std::cout << "Derived::f(int n) with n=" << n<<std::endl; 
}
void derived::display() { 
    std::cout << "Derived::display(): " << std::endl; Base::display(); 
    std::cout << "n_base=" << n_base << std::endl; 
 }
void derived::new_function() { 
    std::cout << "Derived::new_function()"<<std::endl; 
}