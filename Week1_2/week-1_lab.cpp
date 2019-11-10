#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

class point 
{
	private: 
		double x;
		double y;
	public:
		void set_x(double x_in);
		void set_y (double y_in);
		double distance (point );
		void display ();
		double get_x();
		double get_y();
		void translate(point p2, double x1, double y1);

};

double point::distance(point P1) 
{
	return sqrt((x-P1.get_x())*(x-P1.get_x()) + (y-P1.get_y())*(y-P1.get_y()));
}

void point::set_x(double  x_in)
{
	x = x_in;
}

void point::set_y(double y_in) 
{
	y = y_in;
}

double point::get_x()
{
	return x;
}

double point::get_y()
{
	return y;
}

void point::display()
{
	cout << "(" << x << " ; " << y << ")" << endl;
}

void point::translate(point p2, double x1, double y1)
 {
 	x = x+p2.get_x();
 	y = y+p2.get_y();
 	p2.set_x(x);
 	p2.set_y(y);
 }
	

int main()
{
		point p;
		point P0;
		std::vector<int> V1; 
		int input;
		double x0, y0;
		p.set_x(9);
		p.set_y(4);
		double result = p.distance(p);
		cout << "distance is " << result << endl;
		p.display();
		point p2;
		p2.set_x(3);
		p2.set_y(7);
		cout << " p2 distance is " << p2.distance(p2) << endl;
		double x1 = p.get_x();
		double x2 = p.get_y();
		p.translate(p2, x1, x2);
		cout << "p after translation is " << p.get_x() << "  " << p.get_y() <<endl;
		cout << " p distance after translation is " << p.distance(p) << endl;
		cout << endl;

		// Reads from the user a vector of numbers, 
		// each representing the paramter b in the line equation y = b.
		cout << " Please enter a vector of number , each numbers represents b in y = b " << endl;
		cout << " write 0 when done " << endl;
		cin >> input ; 
		while (input != 0) {
			V1.push_back(input); 
			cin >> input;
		}

		// Reads from the user (the coordinates of) a point P0.
		cout << " enter coordinates of point P0 " << endl;
		cin >> x0 >> y0; 
		P0.set_x(x0);
		P0.set_y(y0); 

		//For each number b, computes the distance between the line y = b and P0 using the member 
		//function distance described above 
		//(hint: as for the declaration of usual variables, 
		//you can declare an object locally to the scope e.g. of a loop), 
		//and prints it on the screen.

		for (int i = 0; i < V1.size(); i++){
			point P1;
			P1.set_y(V1[i]);
			P1.set_x(P1.get_x());
			cout << " for line y = " << V1[i] << ", the distance between point P1 (" << x0 << ", " << y0 << ") is : " << P0.distance(P1) << endl;
		}



		//Write a (global) function which takes as argument a vector of points
		// and returns the index of the one which is farthest from the origin. 
		//Write a main to test the function.

		cout << " Please enter a vector of points " << endl;
		cout << " write 666 when done " << endl;
		double x3, y3;
		cin >> x3 >> y3 ; 
		std::vector<point> V2; 
		while (x3 != 666) {
			point P1; 
			P1.set_x(x3);
			P1.set_y(y3);
			V2.push_back(P1); 
			cin >> x3 >> y3;
		}

		point farthest;
		point origin;
		origin.set_x(0);
		origin.set_y(0);
		farthest.set_x(0);
		farthest.set_y(0);

		for (int i=0; i < V2.size(); i++){
			if (V2[i].distance(origin) > farthest.distance(origin)){
				farthest = V2[i];
			}
		}

		cout << " farthest point to origin is  :  (" << farthest.get_x() << "; " << farthest.get_y() << ") " << endl;




}
