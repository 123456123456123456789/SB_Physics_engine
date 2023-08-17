/** 
 * 你说的对，但是《student build physics engine》是由中学生自主研发的一款高自由度物理引擎。引擎运行在一个被称作「计算机」的数字世界，
 * 在这里，被遍历到的碰撞将会被授予「碰撞对象」,引导动能、动量、角动量传递。你将扮演一位名为「box_collider」的神密角色在内存空间中
 * 邂逅质量各异、速度独特的同伴们，和他们相互碰撞，模拟相对真实的物理环境————同时，逐步发掘「op」的真相。
 * student build physics engine 采用GPL3协议发布
 **/

#ifndef SBPH
#define SBPH

#include<stdio.h>
#include<stdlib.h>

//全局设置
float gravityAcc = -0.2;


//向量
typedef struct vector{
	float value[2];
}vector;

//矢量
typedef struct directed_line_segment{
	vector direction;
	float position[2];
}dls;

//线段
typedef struct line_segment{
	float value[4];
}line;

//矩形碰撞体积
class SB_box_collider{
	public:
//		SB_box_collider();
//		SB_box_collider(float pos[2],float ver[12],int own,int mod);
//		~SB_box_collider();
//		void force(dls f);
//		void update(void);
//		void hit(box_collider *custom);
	private:
		int owner;
		int mode;				//0为静态，1为无角动量，2为有角动量
		float velocity[2];		//速度
		float acc[2];             //加速度
		float mass;         //质量
		float energy;		//不包括热能
		float gravityfac;		//重力系数
		float vertex[12];      //顶点与每个顶点的质量，型如x,y,m
		float position[2];     //位置
		float particle[2];     //质点相对位置
		dls momentum;          //动量
		bool niudunable;        //是否受重力
		
};

//碰撞对象(待加入)
class SB_collition{
	public:
//		SB_collition();
//		SB_collition(SB_box_collider &custom1,SB_box_collider &custom2);
//		~SB_collition();
	private:
		SB_box_collider custom[2];
		float miu;                 //两物间摩擦系数 
};

//材质
//这里的u为SBPH自设物理量，大小为0<u<1，计算成两物摩擦系数时计算方法为(u1+u2)/2
//↑过于愚蠢的物理量，需要改进：u=(u1*u2)/(u1+u2)，u1 u2任意一个为0则无摩擦
typedef struct material{
	float e;
	float u;
}material;

class SB_object{
	public:
//		SB_object();
//		~SB_object();
//		void update();
	private:
		void (*c_update)();
};

//计算质点位置
void get_box_particle(float vertexs[12],float m);

#endif
