#include <stdio.h>
#include <stdlib.h>

int main(){
	int start =0;
	int end = 100;
	char ch ;
	int middle = (end - start)/2;

	printf("pick a number through 1 to 100, i will guess it.\n");
	printf("if my guess is right, response Y.\n");
	printf("otherwise, response s if it is smaller or b if it is bigger.\n");
	printf("enter EOF to quit.\n");
	
	printf("is it %d?\n", middle);
	
	while((ch = getchar()) != EOF){
		if(ch == 'Y' || ch == 'y'){
			printf("i know i can do it !\n");
			printf("pick a number through 1 to 100, i will guess it.\n");
			start =0;
			end =100;
			middle = (end - start)/2;
			printf("is it %d?\n", middle);
		}else if(ch == 's' || ch == 'S'){
			end = middle;
			middle = start + (end - start)/2;
			printf("is it %d?\n", middle);		
		}else if(ch == 'b' || ch == 'B'){
			start = middle;
			middle = middle + (end - start)/2;
			printf("is it %d?\n", middle);
		}
		while(getchar() != '\n'){
			continue;
		}
	}

	printf("bye!\n");
	return 0;
}
