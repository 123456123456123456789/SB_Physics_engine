#include"sb_physics.h"

void SB_box_collider::update(void){
	
	if (mode != 0) {
		//改速度
		velocity[0] += acc[0];
		velocity[1] += acc[1];
		//重力
		if (niudunable) {
			velocity[1] += gravityfac * gravityAcc;
		}
		//改坐标
		position[0] += velocity[0];
		position[1] += velocity[1];
		//算动量
		momentum.direction.value[0] = velocity[0] * mass;
		momentum.direction.value[1] = velocity[1] * mass;
	}
}

void SB_box_collider::force(dls f) {
	//改动量(不可旋转)
	if (mode == 1) {
		acc[0] += f.direction.value[0] / mass;
		acc[1] += f.direction.value[1] / mass;
	}
	//旋转我不会
	//else if (mode == 2) {

	//}
}