#include "body.h"
#include <iomanip>
#define M_PI 3.14159265358979323846

using namespace std;

body::body(vect position_, vect velocity_, float mass_){
	position = position_;
	velocity = velocity_;
	mass = mass_;
}

void body::update(vect force, float dt){
	vect acceleration = force/mass;
	velocity=velocity+acceleration*dt;
	position=position+velocity*dt;
}
void body::print(){
	cout<<fixed<<setprecision(5);
	cout<<position.print()<<", "<<(float)velocity.mag()<<" @ "<<(int)velocity.angle()<<endl;
}