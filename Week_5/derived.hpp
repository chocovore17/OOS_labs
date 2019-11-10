#ifndef DERIVED_HPP
#define DERIVED_HPP
#include "Base.hpp"
#include <iostream>


class Derived : public Base {
    public :
        Derived() : Base() , n_base(0){}
        Derived(int n1 , int n2 , int n3) : Base(n1, n2), n_base(n3) {}
         ~Derived() {std::cout << " ̃Derived(): n_base=" <<n_base << "is leaving" << std::endl;}
        void f() ;
        void f(int n);
        void display() ;
        void new_function() ;
    protected:
        int n_base;
};

#endif 