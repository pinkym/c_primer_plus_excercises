#include <stdio.h>
#include <stdlib.h>
//#define ch 'j'

void chline(char ch, int i, int j);

int main(){
	char ch; 
	printf("please give a char:\n");
	ch = getchar();
	printf("string is %c\n",ch);
	chline(ch, 2, 5);
	
	return 0;
}

void chline(char ch, int col, int row){
	for (int i=0; i < row; i++){
		for(int j = 0; j < col; j++){
			printf("%c", ch);
		}
		printf("\n");
	}
}
