#include <iostream> 
#include "point.hpp"
#include <vector>
using namespace std; 


int member_point_unordsearch(const point &p1, const std::vector<point> v1);
int member_point_binsearch( point &p1,  std::vector<point> v1); 
int member_point(point &p1, std::vector<point> v1, bool ordered = false);
std::vector<point> pointdup(std::vector<point> v1, std::vector<point> v2, bool ordered = false);


int main(){
	point p1(1.0, 2.0);
	point p2(2.0, 3.0);
	point p3(1.0, 1.0);
	std::vector<point> v1;
	std::vector<point> v2;
	v2.push_back(p1);
	v2.push_back(p2);
	v1.push_back(p1);
	v1.push_back(p3);
	int out = member_point(p1, v2 );
	cout << " out : " << out << endl;
	std::vector<point> vfinal = pointdup(v1, v2);
	cout << "final size is " << vfinal.size() << endl;
}
