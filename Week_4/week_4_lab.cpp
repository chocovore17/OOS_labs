#include <iostream>
#include "point.hpp"
#include "polynomial.hpp"
#include <vector> 
using namespace std; 

int main() {
	/*{
		cout << " a new scope begins " << endl;
		point p1(1,2); 
		point *p2 = new point(1, 2);
		cout << " the new scope ends " << endl;
	}
	cout << "exited " << endl;*/


	/*Write a program which reads from a file a sequence of points (around 20) and stores them into:
􏰀 A vector of point objects. Remember that there are two ways of doing this (with or without temporaries). Try both.
􏰀 A vector of pointers to point (i.e. point*), each pointing to a point dynamically constructed using new. Call origin symmetric() on each of these points right after they are stored in the vector.
After each push back print size and capacity of the vector.
Observe what happens in terms of calls to the destructor both during the
program execution (as points are read and stored) and at the end.
You should keep the habit of using delete (at the right time) on any memory
allocated with new, in this exercises try also omitting it.

	std::vector<point*> v1;
	cout << "enter 20 points " << endl;
	for (int i=0; i < 10; i++){
		//{
		int i1, i2;
		cin >> i1 >> i2; 
		v1.push_back(new point (i1, i2));
		//}
	}
	for (int i =0; i < v1.size(); i++){
		cout << v1[i] << endl;
		delete v1[i];
	}*/

	polynomial p1(3, 4); 
	p1.get_polynomial();
	//double att_2 = p1.at(2);
	//cout << " at 2 is " << att_2 << endl;
	double at_2 = p1.evaluate(2);
	cout << "evaluate 2 is " << at_2 << endl;
	return 0;
}

