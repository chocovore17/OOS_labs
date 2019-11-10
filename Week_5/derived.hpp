#ifndef DERIVED_HPP
#define DERIVED_HPP
#include "Base.hpp"


class Derived : public Base {
    public :
        Derived() ;
        Derived(int n1 , int n2 , int n3);
         ̃Derived() {std::cout << " ̃Derived(): n_base=" <<n_base << "is leaving << std::endl;"}
        void f() ;
        void f(int n);
        void display() ;
        void new_function() ;
    protected:
        int n_base;
};

#endif 