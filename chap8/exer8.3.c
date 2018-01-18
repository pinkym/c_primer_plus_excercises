#include <stdio.h>
#include <stdlib.h>
/* 	这道题有点奇怪，在windows cmd中，
	连续多行输入，然后在最后一行输入末尾
	输入^C,有时候统计大小写的个数，
	有时候小写统计还没打印就结束程序了。
	另外，类似这样的输入kdkllklldk^C会被直接当做^C会被直接当做^C
	用^Z试过，有时候也会出现异常。
	这个问题很值得深究。
	我测试过，在Linux下，只有单独一行中输入了^D(linux的EOF)，
	才会被当做文件结尾。
	否则，类似ksljdl^D的输入会统计并且末尾的^D会被忽略。
	并且程序会运行到return,而不是中途退出。
	我觉得linux的处理方式更合理一些。
*/

int main(){
	char ch;
	int upper_count=0;
	int lower_count=0;
	
	printf("please enter a string, enter EOF to end.\n");
	while((ch = getchar()) != EOF){
		if(ch >= 65 && ch <= 90){
			upper_count++;
		}else if(ch >= 97 && ch <= 122){
			lower_count++;
		}
	}
	printf("you have entered %d upper case characters\n", upper_count);
	printf("and %d lower case characters.\n", lower_count);
	printf("bye!");
	return 0;
}
