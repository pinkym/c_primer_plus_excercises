#include <stdio.h>
#include <stdlib.h>

double power(double a, int x);

int main(){
	double a;
	int x;
	printf("give the number and a power number:\n");
	printf("enter q to quit.\n");
	while(scanf("%lf %d", &a, &x) == 2){
		printf("the power of %lf of %d is %lf\n", a, x, power(a, x));
	}
	printf("bye!");
	return 0;
}

double power(double a, int x){
	if(a == 0){
		return 0;
	}else if(x == 0 || a == 1){
		return 1;
	}else if(x > 0){
		return a * power(a, x - 1);
	}else if(x < 0){
		return (1 / a) * power(1 / a, - x - 1);
	}
}
