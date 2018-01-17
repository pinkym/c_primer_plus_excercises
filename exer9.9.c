#include <stdio.h>
#include <stdlib.h>

void to_base_n(unsigned long number, unsigned x);

int main(){
	unsigned long number;
	unsigned x;
	printf("give the number and a base number:\n");
	printf("enter q to quit.\n");
	
	//注意格式说明符
	while(scanf("%lu %u", &number, &x) == 2){
		printf("converted value is:\n");
		to_base_n(number, x);
		printf("Enter next number and base:\n");
	}
	
	printf("bye!");
	return 0;
}

void to_base_n(unsigned long number, unsigned x){
	int r = number % x;
	if(number  >= x){
		to_base_n(number / x, x);
	}
	putchar('0' + r);
	return ;
}
