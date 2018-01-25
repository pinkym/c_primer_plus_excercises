#include <stdio.h>
#include <stdlib.h>

int main(){
	char ch;
	char first_ch = ' ';
	printf("please input a string, enter EOF to quit.\n");
	while((ch = getchar()) != EOF){
		if(ch == ' ' || ch == '\n' || ch == '\t'){
			continue;
		}else if(first_ch == ' '){
			first_ch = ch;
		}
	}
	if(first_ch != ' '){
		printf("the first none white char is %c.\n", first_ch);
	}else{
		printf("no none-white char is given.\n");
	}

	printf("bye!\n");
	return 0;
}
