#include <stdio.h>
#include <stdlib.h>


int main(){
	char ch;
	int count=0;
	
	printf("please enter a string, enter EOF to end.\n");
	while((ch = getchar()) != EOF){
		count++;
	}
	printf("you have entered %d characters.\n", count);
	printf("bye!");
	return 0;
}
