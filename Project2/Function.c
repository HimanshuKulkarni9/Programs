#include<stdio.h>
// avrage function from class
/*
void avrage();
int add(int,int,int,int,int);
void display(float);

void avrage() {
	int n1, n2, n3, n4, n5;
	printf("\n enter value");
	scanf_s("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
	
	int sum = add(n1, n2, n3, n4, n5);
	float avg = (float)(sum / 5);
	display(avg);
}

int add(int n1, int n2, int n3, int n4, int n5) {

	int res = n1 + n2 + n3 + n4 + n5;
	return res;

}

void display(float avg) {
	printf("\n %f", avg);
}

int main() {

	avrage();

	return 0;
}
*/
// home work lab 
/*
int main() {

	int num;
	printf("\n enter the number");
	scanf_s("%d", &num);

	divisible(num);


	return 0;
}

int divisible(int);

	int divisible(int num) {

		if (num % 5 == 0) {
			printf("\n %d number is divisible by 5", num);
		}
		else {
			printf("\n %d num is not divisible by 5", num);
		}
	
	}
	*/

// check alphabet or not

int main() {

	char ch;
	printf("\n enter the character");
	scanf_s("%c", &ch);

	
	char res = check(ch);

	display(res);

	return 0;
}

char check(char);
char display(char);

char display(int) {
	if (res == 1) {
		printf("\n the character is alpha bet");
	}
	else {
		printf("\n not alpha");
	}


	}


char check(char ch) {

	if ((ch == 'A' || ch == 'Z') && (ch=='a'|| ch=='z')){
		return 1;
	}
	else {
		return 0;
	}

}