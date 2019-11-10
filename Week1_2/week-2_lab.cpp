#include <iostream>
#include <cmath>
#include <vector>
#include "triangle.hpp"
using namespace std;

/*􏰀 An overloaded constructor with two parameters for the initial value of the coordinates.
􏰀 Where appropriate, the call by const references for member functions.
􏰀 Where appropriate, const member functions. Organise your code using headers and separate source files.
Use a basic Makefile, similar to the one presented in the lecture, to build your application (compiling, linking, executing, etc ...)
*/


point::point(double x_in , double y_in){
	x = x_in;
	y = y_in;
}

double point::distance(const point &P1) 
{
	return sqrt((x-P1.x)*(x-P1.x) + (y-P1.y)*(y-P1.y));
}

double point::get_x()
{
	return x;
}

double point::get_y()
{
	return y;
}

void point::translate(point p2)
{
	x = x*p2.get_y();
	y = y*p2.get_x();
}

triangle::triangle(point a_in[3] ){
	p1 = a_in[0];
	p2 = a_in[1];
	p3 = a_in[3];
}

float triangle::perimeter(){
	return (p1.distance(p2) + p1.distance(p3) + p3.distance(p2));
}

void triangle::translate(point p_in){
	p1.translate(p_in);
	p2.translate(p_in);
	p3.translate(p_in); 
}
bool operator <(const point& p1 , const point& p2 ){
	point orig(0,0);
	return (orig.distance(p1) < orig.distance(p2));
}

int main(){
	point pin1, pin2(1, 0), pin3(0, 1);
	point PointArray[] = {pin1, pin2, pin3};
	triangle t1(PointArray);
	cout << endl;
	cout << " distance p1 p2 = "<< pin1.distance(pin2) << endl;
	cout << " distance p1 p3 = "<< pin1.distance(pin3) << endl;
	cout << " distance p3 p2 = "<< pin3.distance(pin2) << endl;
	cout << t1.perimeter() << endl;
	t1.translate(pin3);
	cout << t1.perimeter()<< endl;
	cout << (pin1 < pin2);
}




