#include"sb_physics.h"

void SB_box_collider::update(void){
	//改坐标
	position[0] += momentum.direction.value[0] / mass;
	position[1] += momentum.direction.value[1] / mass;
	
}

void SB_box_collider::force(dls f) {
	//改动量(无角动量)
	//if (mode == ) {
		momentum.direction.value[0] += f.direction.value[0];
		momentum.direction.value[0] += f.direction.value[0];
	//}
	
	//角动量难度有点大
	//else if ()
}