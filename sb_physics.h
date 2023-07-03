/** 
 * 你说的对，但是《student build physics engine》是由中学生自主研发的一款高自由度物理引擎。引擎运行在一个被称作「计算机」的数字世界，
 * 在这里，被遍历到的碰撞将会被授予「碰撞对象」,引导动能、动量、角动量传递。你将扮演一位名为「box_collider」的神密角色在内存空间中
 * 邂逅质量各异、速度独特的同伴们，和他们相互碰撞，模拟相对真实的物理环境————同时，逐步发掘「op」的真相。
 **/

#include<stdio.h>
#include<stdlib.h>

#ifndef SBPH
#define SBPH

//向量
typedef struct vector{
	float value[2];
}vector;

//矢量
typedef struct directed_line_segment{
	vector direction;
	float position[2];
}dls;

//矩形碰撞体积
class box_collider{
	public:
		void force(dls f);
		void update(void);
	private:
		float vertex[8];
		float position[2];
		dls momentum;
};

//材质
typedef struct material{
	float e;
	float u;
}

#endif
#ifdef SBPH
#endif
