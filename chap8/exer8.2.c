#include <stdio.h>
#include <stdlib.h>


int main(){
	char ch;
	int count=0;
	
	printf("please enter a string, enter EOF to end.\n");
	while((ch = getchar()) != EOF){
		//每次遇到换行符，重新计数
		if(ch != '\n'){
			count++;
		}else if(ch == '\n'){
			count = 0;
		}
		
		//修改一下题目，把控制字符的显示字符也打印出来
		if(ch == '\n'){
			printf("\\n, %d \t", ch, ch);
		}else if(ch == '\t'){
			printf("\\t, %d \t", ch, ch);
		}else if(ch == 0){
			printf("%c, ^%c, %d \t", ch, ch + 80, ch);
		}else if(ch >= 1 && ch <= 31){
			printf("%c, ^%c, %d \t", ch, ch + 64, ch);
		}else if(ch == 32){
			printf("%c,  , %d \t", ch, ch);
		}else{
			printf("%c, %d \t", ch, ch);
		}
		
		//10个一行
		if((count % 10 )== 0){
			printf("\n");
		}
	}
	printf("you have entered %d characters.\n", count);
	printf("bye!");
	return 0;
}
