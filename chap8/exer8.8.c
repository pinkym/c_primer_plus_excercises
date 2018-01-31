#include <stdio.h>
#include <stdlib.h>
// bug: 第二次输入选项的时候输入会被忽略

char get_choice();
float get_float();
char get_first();

int main(){
	char choice;
	float number1,number2;
	
	while((choice = get_choice()) != 'q'){
		printf("please give the first number:\n");
		number1 = get_float();
		printf("please give the second number:\n");
		number2 = get_float();
		switch(choice){
			case 'a':
				printf("a + b = %f\n", number1 + number2);
				break;
			case 'b':
				printf("a - b = %f\n", number1 - number2);
				break;
			case 'c':
				printf("a * b = %f\n", number1 * number2);
				break;
			case 'd':
				if(number2 != 0){
					printf("a / b = %f\n", number1 / number2);
				}else{
					printf("divider can not be 0.\n");
				}
				break;
			default:
				printf("program err!\n");
				break;
		}
	}
	printf("bye!\n");
}

char get_choice(){
	char ch;
	printf("please enter the choice \nto choose the compute method:\n");
	printf("a. add \t b. substract\n");
	printf("c. multiply \t d. divide\n");
	printf("q. quit\n");
	ch = get_first();
	while((ch < 'a' || ch > 'd') && ch != 'q'){
		printf("please enter a,b,c,d or q.\n");
		ch = get_first();
	}
	return ch;
}

float get_float(){
	float number;
	char ch;
	while(scanf("%f", &number) != 1){
		while((ch = getchar()) != '\n'){
			putchar(ch);
		}
		printf("please give a float number:\n");
	}
	return number;
}

char get_first(){
	char ch;
	ch = getchar();
	while(getchar() != '\n'){
		continue;
	}
	return ch;
}
