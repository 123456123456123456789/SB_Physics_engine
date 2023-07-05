#include<sb_physics.h>

void get_box_particle(const float vertexs[12],float m,float pos[2]){
	int middle = 0;

	for(int i=0;i < 11;i+=3){
		middle += vertexs[i]*vertexs[i+2];
	}

	pos[0] = middle/m;
	middle = 0;

	for(int i = 1;i < 12;i+=3){
		middle += vertexs[i]*vertexs[i+2];
	}

	pos[1] = middle/m;
	return;
}
