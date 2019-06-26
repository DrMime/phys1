#ifndef VECT_H
#define VECT_H

#include <iostream>
#include <cmath>
#include <string>

#define M_PI 3.14159265358979323846

class vect{
public:
	vect(float x_=0, float y_=0);
	vect operator+(vect rhs);
	vect operator-(vect rhs);
	vect operator/(float rhs);
	vect operator*(float rhs);
	int angle();
	float mag();
	std::string print();
private:
	float x;
	float y;
};

#endif