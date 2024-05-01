#include<stdio.h>
void countchar(char[]);
void input(char[]);

void input(char str[]) {

	printf("\n enter string\n");
	fflush(stdin);
	gets_s(str, 100);

}

void countchar(char ch[]) {
	char temp; int  flag;
	for (int b = 0; ch[b]!='\0'; b++) {
		temp = ch[b];
		flag = 0;
		for (int j = 0; j < b; j++) {
			if (temp == ch[j]) {
				flag = 1;
			}
		}
		if (!flag) {
			int count = 0;
			for (int i = b; ch[i]!='\0'; i++) {
				if (ch[b] == ch[i] && ch[i]!=' ') {
					count++;
				}
			}
			printf("\n %c occurs %d times", ch[b], count);
		}
	}

}


int main() {
	char str[100];
	input(str);

	countchar(str);
}