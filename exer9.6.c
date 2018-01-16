#include <stdio.h>
#include <stdlib.h>

int char_location(char c);

int main(){
	char ch;
	printf("give a string:\n");
	while((ch = getchar()) != EOF){
		int location = char_location(ch);
		if(location != -1){
			printf("location of %c is %d\n", ch, location);
		}else{
			printf("can't get location of %c\n", ch);
		}
	}

	return 0;
}

int char_location(char c){
	if(c >= 65 && c <= 90){
		return c%65 +1;
	}else if(c >= 97 && c <= 122){
		return c%97 +1;
	}else{
		return -1;
	}
}
