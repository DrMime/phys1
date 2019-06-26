#include <iostream>
#include "vect.h"

class body{
public:
	body(vect position_, vect velocity_, float mass_);
	void update(vect force, float dt);
	void print();
private:
	vect position;
	vect velocity;
	float mass;
};