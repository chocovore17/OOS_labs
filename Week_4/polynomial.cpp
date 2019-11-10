#include <iostream>
#include "polynomial.hpp"
#include <cmath>

polynomial::polynomial(){
	this->n = 1;
	this->x = 1;

}

polynomial::polynomial (const double n_in, const double x_in){
	this->n = n_in;
	this->x = x_in;
	double polynomial_array[10] = {1 ,2, 3, 4, 5, 5, 4, 3, 2, 1};
	double result;
	for (int i=0; i < n_in; i++){
		if (polynomial_array[i]!= 0 ){
			result = result + polynomial_array[i]*(pow(x_in,i));
		}
	}
	// compute a double 
	this->poly = result; 
}

void polynomial::get_polynomial(){
	std::cout << this->poly << std::endl;
}


double polynomial::evaluate(double i){
	polynomial p1(i, this->x); 
	return p1.poly;
}
