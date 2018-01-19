#include <stdio.h>
#include <stdlib.h>
/*  这道题的思路，统计单词个数word_count，累加。
	统计字母个数char_count，累加。两者求商即可。
	如何统计单词个数？dhjskh
	连续的读入字符，如果遇到空格，则一个单词结束。
	一个问题是，必须在单独的一行中输入^D，系统才会识别EOF
*/

int main(){
        char ch;
        int word_count=0;
        double char_count=0;

        printf("please enter a string, enter EOF to end.\n");
        while((ch = getchar()) != EOF){
			if(ch == ' ' || ch == '\n'){
					continue;
			}else{
				word_count++;
				while(ch != ' ' && ch != '\n'){
						char_count++;
						ch = getchar();
				}
			}
        }

        double avg = (word_count == 0)? 0: (char_count/word_count);
        printf("you have entered %d words, %lf chars,\n the average char is %lf\n", word_count, char_count, avg);
        printf("bye!");
        return 0;
}
