#ifndef BASE_HPP
#define BASE_HPP

class Base {
    public: 
        Base();
        Base(int n1, int n2);
        void f();
        void display();
        void call_all_functions();
         ̃Base() {std::cout << "Base(): n_priv=' " << n_priv << ", n_prot = " << n_prot << "is leaving " << std::endl; }

    private:
        int n_priv;
        void  f_priv();

protected :
    int n_prot ;
    void f_prot() ;
    }
};

#endif
