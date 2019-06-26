#include "body.h"
#include "vect.h"

using namespace std;

int main(){
	//instatiate bodies
	body particle(vect(0,0), vect(1,1), 1);


	vect force(0,-0.25);
	float dt = 0.1;
	int secs = 0;

	while(secs<100){
		particle.print();
		particle.update(force, dt);
		secs++;
	}
}