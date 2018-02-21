#include<stdio.h>
#include<conio.h>
#define PI 3.14
class circle{ 
	public: float r;
	
	public : void calculatearea(){
		float area= PI * r*r;
		printf("%f",area);
	}
	
	public : circle(){
		r=7;
		
	}
	public : ~circle(){
		printf("\n object is destroyed");
	} 
}; 
main(){
	circle crc;
	crc.calculatearea();
}
