#include "vect.h"
#include <sstream>
#include <iostream>
#include <iomanip>

using namespace std;

vect::vect(float x_, float y_){
	x=x_;
	y=y_;
}
vect vect::operator+(vect rhs){
	return vect(rhs.x+x, rhs.y+y);
}
vect vect::operator-(vect rhs){
	return vect(x-rhs.x, y-rhs.y);
}

vect vect::operator/(float rhs){
	return vect(x/rhs, y/rhs);
}
vect vect::operator*(float rhs){
	return vect(x*rhs, y*rhs);
}
int vect::angle(){//for display purposes
	return atan(y/x)*180/M_PI;
}
float vect::mag(){//for display purposes
	return pow(pow(x,2)+pow(y,2),0.5);
}
string vect::print(){
	stringstream ss;
	ss<<fixed<<setprecision(5);
	ss<<"("<<x<<", "<<y<<") ";
	return ss.str();
	//cout<<"("<<x", "<<y<<") ";
}