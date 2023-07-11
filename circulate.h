/**
 * 循环状态机
 * student build physics engine 采用GPL3协议发布
 **/

#ifndef CIR
#define CIR

#include"sb_physics.h"

typedef struct COLLIDER_LIST{
	SB_box_collider *head;
	struct COLLIDER_LIST *next;
}collider_list;

typedef struct COLLITION_LIST{
	SB_collition *head;
	struct COLLITION_LIST *next;
}collition_list;

static struct circulate{
	int mode; //选择是否能够旋转0为能(性能消耗较大)1为不能(性能消耗较小)
	collider_list collider;
	collition_list collition;
	void (*EXIT)(void);
} cir;

void SB_INIT(int mode);
void SB_MOUNT_EXIT_FUNC(void (*EXIT)(void));
void SB_ADD_COLLIDER(SB_box_collider *addition);

#endif
