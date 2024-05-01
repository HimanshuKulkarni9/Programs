#include<stdio.h>
void countvowel(char[]);
void input(char[]);

void input(char str[]) {

	printf("\n enter string\n");
	gets_s(str, 100);

}

void countvowel(char ch[]) {
	char temp; int  flag;
	for (int b = 0; ch[b] != '\0'; b++) {
		temp = ch[b];
		flag = 0;
		for (int j = 0; j < b; j++) {
			if (temp == ch[j]) {
				flag = 1;
			}
		}
		if (!flag) {
			int count = 0;

			if (temp == 'A' || temp == 'E' || temp == 'I' || temp == 'O' || temp == 'U' || temp == 'a' ||
				temp == 'e' || temp == 'i' || temp == 'o' || temp == 'u') {
				for (int i = b; ch[i] != '\0'; i++) {
					if (ch[b] == ch[i])
						count++;
				}
				if (count != 0)
					printf("\n %c occurs %d times", ch[b], count);
			}
		}
	}

}

int main() {
	char str[100];
	input(str);

	countvowel(str);

	return 0;
}