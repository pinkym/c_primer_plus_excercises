#include <stdio.h>
#include <stdlib.h>

long fibonacci(int n);

int main(){
	int n;
	printf("give the length of fibonacci:\n");
	printf("enter q to quit.\n");
	
	//注意格式说明符
	while(scanf("%d", &n) == 1){
		if(n < 0){
			printf("please give a positive number.\n");
			continue;
		}
		printf("fibonacci(%d)'s value is %ld:\n", n, fibonacci(n));
		printf("Enter next number :\n");
	}
	
	printf("bye!");
	return 0;
}

//如果这里用unsigned long ,计算出来的结果则是f(3)=21
//需要理解计算机是如何存储无符号数和有符号数以及他们之间的差别
long fibonacci(int n){
	if(n <= 2){
		return 1;
	}
	long first = 1, second = 1;
	for (int i = 3; i <= n; i++){
		long tmp = second;
		second = first + second;
		first = tmp;
	}
	return second;
}
