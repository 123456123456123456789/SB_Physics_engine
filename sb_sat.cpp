#include"sb_sat.h"
#include"sb_math.h"

float x_get_dpf(float value1[2],float value2[2]){
	float a;
	a = -((value2[0]-value1[0])/(value2[1]-value1[1]));
	return a;
}

float y_get_dpf(float value1[2],float value2[2]){
	float a;
	a = -((value2[1]-value1[1])/(value2[0]-value1[0]));
	return a;
}

float y_get_intercept(float pos[2],float a){
	float b;
	b = pos[0] - (-1/a)*pos[1];
	return b;
}

float x_get_intercept(float pos[2],float a){
	float b;
	b = pos[1] - (-1/a)*pos[0];
	return b;
}

int intersect(float line1[2],float line2[2]){
	float middle;
	for(int i = 0;i<2;i++){
		for(int j = 0;j<2;j++){
			if(middle<sb_abs((line1[i]-line2[j]))){
				middle = sb_abs((line1[i]-line2[j]));
			}
		}
	}
	if(middle>(sb_abs((line1[0]-line1[1]))+sb_abs((line2[0] - line2[1])))){
		return 0;
	}else{
		return 1;
	}
}

int sb_falloc(float value1[2],float value2[2]){
	float a;
	a = (value2[1] - value1[1])/(value2[0] - value1[0]);
	if(a<0){
		return 1;
	}else{
		return 0;
	}
}
