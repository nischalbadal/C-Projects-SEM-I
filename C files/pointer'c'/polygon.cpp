#include<stdio.h>
#include<conio.h>
class polygon{
	public: void area(float length, float breadth){
		float area=length*breadth;
		printf("Area of Rect is %f",area);
		
	}
	public: void area(float length){
		float area=length*length;
		printf("\n Area of Square is %f ",area);
	}
};
main(){
	polygon p;
	p.area(3.14,2.13);
	p.area(9.8);
}
