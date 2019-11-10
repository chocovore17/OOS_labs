#include <iostream>
#include "base.hpp"


        Derived() : Base() , n_base(0){}
        Derived(int n1 , int n2 , int n3) : Base(n1, n2), n_base(n3) {}
         ̃Derived() {std::cout << " ̃Derived(): n_base=" <<n_base << "is leaving << std::endl;"}
        void f() { std::cout << "Derived::f()" << std::endl; }
        void f(int n) { std::cout << "Derived::f(int n) with n=" << n<<std::endl; }
        void display() { std::cout << "Derived::display(): " << std::endl; Base::display(); std::cout << "n_base=" << n_base << std::endl; }
        void new_function() { std::cout << "Derived::new_function()"<<std::endl; }
    protected:
        int n_base;
};