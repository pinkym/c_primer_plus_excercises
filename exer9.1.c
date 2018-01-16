#include <stdio.h>
#include <stdlib.h>

double min(double a, double b);

int main(){
	double a, b;
	printf("give 2 number:\n");
	
	//double 的转换说明符必须是%lf,
	//%f, %l都无法正确读取数值保存到变量中
	scanf("%lf %lf", &a, &b);

	printf("the small one of %lf and %lf is %lf\n", a, b, min(a, b));
	
	return 0;
}

double min(double a, double b){
	return (a <= b) ? a: b;
}
