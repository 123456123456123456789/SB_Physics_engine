#include"sb_physics.h"

void SB_box_collider::update(void){
	
	if (mode != 0) {
		//���ٶ�
		velocity[0] += acc[0];
		velocity[1] += acc[1];
		//����
		if (niudunable) {
			velocity[1] += gravityfac * gravityAcc;
		}
		//������
		position[0] += velocity[0];
		position[1] += velocity[1];
		//�㶯��
		momentum.direction.value[0] = velocity[0] * mass;
		momentum.direction.value[1] = velocity[1] * mass;
	}
}

void SB_box_collider::force(dls f) {
	//�Ķ���(������ת)
	if (mode == 1) {
		acc[0] += f.direction.value[0] / mass;
		acc[1] += f.direction.value[1] / mass;
	}
	//��ת�Ҳ���
	//else if (mode == 2) {

	//}
}