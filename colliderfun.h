#include"sb_physics.h"

void SB_box_collider::update(void){
	//������
	position[0] += momentum.direction.value[0] / mass;
	position[1] += momentum.direction.value[1] / mass;
	
}

void SB_box_collider::force(dls f) {
	//�Ķ���(�޽Ƕ���)
	//if (mode == ) {
		momentum.direction.value[0] += f.direction.value[0];
		momentum.direction.value[0] += f.direction.value[0];
	//}
	
	//�Ƕ����Ѷ��е��
	//else if ()
}