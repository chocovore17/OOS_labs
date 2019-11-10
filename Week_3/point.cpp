#include <iostream>
#include <cmath> 
#include "point.hpp"
#include <vector>



point::point(double x_in, double y_in): x(x_in), y(y_in){}

double point::distance (const point& P1){
	return sqrt((x-P1.x)*(x-P1.x) + (y-P1.y)*(y-P1.y));
}

double point::get_x(){ 
	return x;
}
double point::get_y(){
	return y;
}

bool operator  ==(const point& P1, const point &P2){
	return (P1.x == P2.x) && (P1.y == P2.y);
}

bool operator < (point& P1, point &P2){
	point origin(0.0, 0.0);
	return (P1.distance(origin)) < (P2.distance(origin));
}


int member_point_unordsearch(const point &p1, const std::vector<point> v1){
	double output = v1.size();
	for (int i=0; i < v1.size();i++){
		if (p1 == v1[i]){
			output = i;
		}
	}
	return output;
}


int  member_point_binsearch(point &p1, std::vector<point> v1){
	double output = v1.size();
	while (p1 < v1[output]){
		output++;
	}
	return output;
}



int member_point(point &p1, std::vector<point> v1, bool ordered){
	int output = v1.size();
	if (ordered == true){
		output = member_point_binsearch(p1, v1);
	}
	else{
		output = member_point_unordsearch(p1, v1);
	}
	return output;
}

std::vector<point> pointdup(std::vector<point> v1, std::vector<point> v2, bool ordered){
	std::vector<point> v3;
	for (int i=0; i < v1.size(); i++){
		if (member_point(v1[i], v2, false) != v2.size()){
			v3.push_back(v1[i]);
		}
	}
	return v3;
}




