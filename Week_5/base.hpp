#ifndef BASE_HPP
#define BASE_HPP

class Base {
    public: 
        Base() : n_priv(0), n_prot(0){}
        Base(int n1, int n2) : n_priv(n1), n_prot(n2){}

         ̃Base() {std::cout << "Base(): n_priv=' " << n_priv << ", n_prot = " << n_prot << "is leaving " << std::endl; }

        void f() {std::cout << "Base::f()" << std::endl; }
        void display() {std::cout << std::cout << "Base::display():n_priv=" << n_priv << ", n_prot = " << n_prot << std::endl; }
        void call_all_functions() { std::cout << "Base::call_all_functions()" << std::endl; f(); f_priv(); f_prot():}

    private:
        int n_priv;
        void  f_priv() { std::cout << "Base::f_priv()" << std::endl;
            }

protected :
    int n_prot ;
    void f_prot() { std::cout << "Base::f_prot()" << std::endl;
    }
};

#endif
