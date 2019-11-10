#include <iostream>
#include <cmath>
#include <vector>
#include "classpoint.hpp"

class triangle  
{
	private: 
		point p1;
		point p2;
		point p3;
	public:
		triangle(point tr_in[3] );
		float perimeter();
		void translate(const point p_in);

};

//Define a class Triangle, which attributes are the three points
// delimiting it.
//Define a constructor which takes three points as arguments. 
//Define a member function perimeter which returns the perimeter
// of the triangle object on which it is called. Define a member function 
//translate which takes as argument a point (representing a vector) and 
//changes the state of the triangle translating it by the vector.
