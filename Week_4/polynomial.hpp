#ifndef POLYNOMIAL_HPP
#define POLYNOMIAL_HPP 

class polynomial 
{
	private: 
		double n;
		double x;
		double poly;
	public: 
		polynomial();
		polynomial (const double n_in , const double x_in);
		void get_polynomial();
		double evaluate(double i);
		~polynomial(){
			std::cout << "destructor for polynomial " << n << ", " << x << std::endl;
		}
};
#endif