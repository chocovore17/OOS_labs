#include <iostream>
#include <cmath>
#include <vector>

class point 
{
	private: 
		double x;
		double y;
	public:
		point(double x_in = 0.0, double y_in = 0.0);
		double get_x();
		double get_y();
		void translate(point p2);
		double distance (const point & P1);
		friend bool operator <(const point& p1 , const point& p2 );
};
