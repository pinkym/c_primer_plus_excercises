#include <stdio.h>
#include <stdlib.h>

double avg(double m, double n);

int main(){
	double a, b;
	printf("give 2 number:\n");
	
	//double 的转换说明符必须是%lf,
	//%f, %l都无法正确读取数值保存到变量中
	scanf("%lf %lf", &a, &b);
	
	printf("a is %f, b is %f\n", a, b);
	double _avg = avg(a, b);
	printf("the average is %f\n", _avg);
	return 0;
}

double avg(double m, double n){
	double _m = (m == 0) ? 0 : (1/m);
	double _n = (n == 0) ? 0 : (1/n);
	double _avg = ( _m + _n ) / 2;
	return _avg == 0 ? 0 :(1/_avg);
}
