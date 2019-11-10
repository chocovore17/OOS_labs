#ifndef POINT_HPP
#define POINT_HPP 

class point 
{
	private: 
		double x;
		double y;
		friend bool operator ==(const point& P1, const point &P2);
		friend bool operator < (const point& P1, const point &P2);
	public:
		double get_x();
		double get_y();
		point(double x_in,double y_in);
		double distance(const point& P1);
};
#endif