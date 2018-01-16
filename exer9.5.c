#include <stdio.h>
#include <stdlib.h>

double large_of(double * p_m, double * p_n);

int main(){
	double a, b;
	printf("give 2 number:\n");
	
	//double 的转换说明符必须是%lf,
	//%f, %l都无法正确读取数值保存到变量中
	scanf("%lf %lf", &a, &b);
	
	printf("num1 is %f, num2 is %f\n", a, b);
	large_of(&a, &b);
	printf("after call large_of, num1 is %f, num2 is %f\n", a, b);
	
	return 0;
}

double large_of(double * p_m, double * p_n){
	if(*p_m >= *p_n){
		*p_n = *p_m;
	}else{
		*p_m = *p_n;
	}
}
