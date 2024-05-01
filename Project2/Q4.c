#include<stdio.h>
int main() {
	/*
	//Q4 Accept character value from user
	printf("\n enter the char value \n");
	
	char ch;
	scanf_s("%c",&ch);
	printf("\n enterd char value is : %c \n", ch);

	printf("\n ASIIC value of enterd char : %d \n", ch);

	//for alphacharacter 
	if (ch >= 65 && ch <= 90 || ch >= 97 && ch <= 123) {
		printf("\n %c is alphacharacter",ch);

		//for vowel and consonant
		if (ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'I' || ch == 'i'
			|| ch == 'O' || ch == 'o' || ch == 'U' || ch == 'u') {
			printf("\n %c is vowel",ch);
		}
		else {
			printf("\n %c is consonant",ch);
		}

		//for convert it into opposite case
		if (isupper(ch)) {
			ch = tolower(ch);
		}else if(islower(ch)){
			ch = toupper(ch);
		}
		printf("\n The opposite case of char is %c \n", ch);
	}

	else {
		printf("\n %c is numeric or symbol",ch);
	}
	*/

	// Q5 Accept Integer value form User
   /*
	int num;
	printf("\n enter the int value \n");
	scanf_s("%d", &num);
	printf("enterd int value is : %d", num);
	
	//for odd and even
	if (num % 2) {
		printf("\n %d is odd \n", num);
	}
	else {
		printf("\n %d is even \n", num);
	}

	// for positive negative, zero
	if (num >= 0) {
		printf(" \n %d is positive \n", num);
	}
	else if (num <= 0 || num == 0) {
		printf("\n number is negative or zero");
	}

	// for absolute value
	int absolute_value = abs(num);
	printf("The absolute value %d is %d\n", num, absolute_value);
	*/

	//Q6 Accept 3 digit integer value from user
/*
	int num;
	printf("\n enter any 3 digit int value");
	scanf_s("%d", &num);
	printf("\n your enterd 3 digit value is : %d ", num);
	
	// 1 seperating the digits
	int digit1 = num / 100;
	int digit2 = (num % 100)/10;
	int digit3 = num % 10;

	printf("\n seperated digits of int value is : %d %d %d", 
		digit1, digit2, digit3);

	// 2 print square of every digits
	printf("\n square of every digit is : %d %d %d\n", digit1 * digit1,
		digit2 * digit2, digit3 * digit3);
	
	// 3 print cubes of every digits
	printf("\n cubes of every digit is : %d %d %d \n", digit1 * digit1 * digit1,
		digit2 * digit2 * digit2, digit3 * digit3 * digit3);

	// 4 print sum of digits
	int sum = digit1 + digit2 + digit3;
	printf("\n sum of digits  %d + %d + %d = %d ", digit1, digit2, digit3,sum);

	// 5 print sum of squares of digits
	printf("\n sum of square of every digit is : %d \n", digit1 * digit1 +
		digit2 * digit2 + digit3 * digit3);

	// 6 print sum of cubes of digits
	int SumofCube = digit1 * digit1 * digit1 +
		digit2 * digit2 * digit2 + digit3 * digit3 * digit3;
	printf("\n sum of cubes of every digit is : %d \n", SumofCube);

	// 7 reverse number (store reverse number in another int variable) and print it
	
	int n = num, reverse = 0, remainder;
	while (n != 0) {
		remainder = n % 10;
		reverse = reverse * 10 + remainder;
		n /= 10;
	}
	printf("\n reversed number : %d", reverse);


	// 8 print 3rd power of reverse number
	int reversedNumCube;
	reversedNumCube = reverse * reverse * reverse;
	printf("\n 3rd power of reverse number is : %d", reversedNumCube);


	// 9 check palindrome
	printf("\n Checking int value is palindrome\n");
	if (num == reverse) {
		printf("\n orignal num = reverse of it : %d = %d ", num,reverse);
		printf("\n the int value is palindrome\n");
	}
	else {
		printf("\n The int value is not palindrome %d != %d",num,reverse );
	}

	// 10 check Armstrong
	printf("\n Checking int value is Armstrong\n");
	if (SumofCube == num) {
		printf("\n The int value is Armstrong : %d = %d ", SumofCube,num);
	}
	else {
		printf("\n the int value is not Armstrong : %d != %d ", SumofCube, num);
	}
*/

    // Q7 Accept age from user check that person is eligible for driving licence or not . 
	
	/*
	printf("\n enter the age\n");

    int age;
	scanf_s("%d", &age);
	
	if (age >= 18) {
		printf("\n is eligible for driving license ");
	}
	else {
		printf("\n not eligible for driving license");
	}
	*/
	
	// Q8 Accept rainfall for a week and calculate average rainfall for a week (Use explicit Typecasting if required)
	/*
	int sun, mon, tue, wen, thr, fri, sat;
	float res;
	printf("\n enter the rainwall of days");
	
	printf("\n enter the rainwall on sunday : \n");
	scanf_s("%d", &sun);
	printf("\n enter the rainwall on monday : \n");
	scanf_s("%d", &mon);
	printf("\n enter the rainwall on tuesday : \n");
	scanf_s("%d", &tue);
	printf("\n enter the rainwall on wensday: \n");
	scanf_s("%d", &wen);
	printf("\n enter the rainwall on thrusday : \n");
	scanf_s("%d", &thr);
	printf("\n enter the rainwall on friday : \n");
	scanf_s("%d", &fri);
	printf("\n enter the rainwall on saturday : \n");
	scanf_s("%d", &sat);

	res = (float)( sun + mon + tue + thr + wen + fri + sat ) / 7;

	printf("\n avrage rainfall of week is : %.2f\n", res);
	
	*/
	
	// Q9  Accept weight of 7 persons calculate average weight of that group
	/*
	int p1, p2, p3, p4, p5, p6, p7;
	printf("enter the weight of persons");
	printf("\n enter the weigh of person 1 \n ");
	scanf_s("%d", &p1);
	printf("\n enter the weigh of person 2 \n ");
	scanf_s("%d", &p2);
	printf("\n enter the weigh of person 3 \n ");
	scanf_s("%d", &p3);
	printf("\n enter the weigh of person 4 \n ");
	scanf_s("%d", &p4);
	printf("\n enter the weigh of person 5 \n ");
	scanf_s("%d", &p5);
	printf("\n enter the weigh of person 6 \n ");
	scanf_s("%d", &p6);
	printf("\n enter the weigh of person 7 \n ");
	scanf_s("%d", &p7);

	float res = (float)(p1 + p2 + p3 + p4 + p5 + p6 + p7) / 7;

	printf("\n avrage of weight of seven person : %.2f ", res);
	*/
	
	// Q10 Accept Two values from User Swap values print before and after swapping
	/*
	int a, b, c;
	printf("\n enter the value a and b");
	scanf_s("%d %d", &a, &b);
	printf("\n values of a and b is : %d & %d", a, b);
	c = a;
	a = b;
	b = c;
	printf("\n value of a after swap : a = %d", a);
	printf("\n value of b after swap : b = %d", b);
    */
	
	// Q11 . Accept integer value from user and print multiplication table
	/*
	int a;
	printf("\n enter the num for multiplication table \n");
	scanf_s("\d", &a);
	
	int i= 1 , sum;
	if (i<=10){
	
		sum = a * i;
	}
	printf("\n %d * %d = %d", a, i, sum);
	i++;
	*/
	
	// Q12 . Accept integer value from User 1) check number is positive, negative or zero
	//2) print absolute value
	/*
	int num;
	printf("\n enter the value");
	scanf_s("%d", &num);
	if (num >= 0) {
		printf("\n number is positive");
	}
	else {
		printf("\n number is negative or zero");
	}
	
	if (num < 0) {
		
		printf("\n absolute value of %d is : %d\t", num, -(num));
	}
	else {
		printf("\n absolute value of number %d is : %d\t", num, num);
	}
	*/
	
	// Q13 Accept Two integer values from user print smallest value
	/*
	int a, b;
	printf("\n enter the value of a and b");
	scanf_s("%d %d", &a, &b);
	if (a < b) {
		printf("\n %d is smallest", a);
	}
	else {
		printf("\n %d is smallest", b);
	}
	*/
	
	// Q14 Accept Ages of three person's , print the age of that Youngest person .
	/*
	int p1, p3, p2;
	printf("\n enter the ages of 3 persons");
	scanf_s("%d %d %d", &p1, &p2, &p3);

	int young = p1;
	if (p2 < young) {
		young = p2;
	}
	if (p3 < young) {
		young = p3;
	}
	printf("\n age of youngest person is : %d", young);
	*/
	
	// Q15  Accept Integer value from user --check it is completely divisible by 3, 7, 11
	/*
	int num;
	printf("\n enter the value");
	scanf_s("%d", &num);

	if (num % 7 == 0 && num % 11 == 0) {
		printf("\n enterd number %d is completely divisible by 7,11", num);
	}
		
	if (num % 3 == 0 && num % 11 == 0) {
		printf("\n enterd number %d is completely divisible by 3,11", num);
	}
		
	if (num % 3 == 0) {
		printf("\n enterd number %d is completely divisible by 3", num);
	}
				
	if (num % 7 == 0) {
		printf("\n enterd number %d is completely divisible by 7", num);
	}

	if (num % 11 == 0) {
		printf("\n enterd number %d is completely divisible by 11", num);
	}
	*/					
	
    // Q16 Accept Integer value from user print next 5 even numbers
	/*
	int num;
	printf("\n enter the value");
	scanf_s("%d", &num);
	if (num % 2 == 0) {
		printf("\n number is even");

	}
	else {
		printf("\n number is not even");
	}
	*/
	
	// Q17 Accept Temperature from user in fahrenheit convert it into celcius and print
	/*
	int temp;
	printf("\n enter the tempraature in feranite");
	scanf_s("%d", &temp);
	float c = (temp - 32) / 1.8;
	printf("\n temprature in celcius : %.2f", c);
	*/

	// Q18 Accept Principle Amount from user , Calculate Simple Interest, number of year is 2
	/*
	int pa, t=2;
	printf("\n enter the principle amount");
	scanf_s("%d", &pa);
	float r = 6.2;

	if (pa >= 50000 || pa <= 300000) {
		float si = (pa * r * t) / 100;

		if (pa >= 300001 || pa <= 800000) {
			r = 7.4;
			 si = (pa * r * t) / 100;

			if (pa > 800001) {
				r = 7.9;
				 si = (pa * r * t) / 100;
			}
		}
		printf("\n simple intrest for principle %d with rate %.2f ", pa, r);
		printf("\n simple intrest is : %.2f", si);
	}
	*/	
	
	// Q 19  Print Question as below  Q1 ) Who developed C programming language
	/*
	printf("\n 1  Who developed C programming language ");
	printf("\n\t Option 1: James Gosling");
	printf("\n\t Option 2 : Dennis Ritche");
	printf("\n\t Option 3 : Charles Babbage");
	printf("\n\t Option 4 : None of the Above");

	int option;
	printf("\n enter the option number");
	scanf_s("%d", &option);
	if (option == 2) {
		printf("\n your answer is correct");
	}
	else {
		printf("\n your answer is incorrect");
	}
	*/

	// Q20 . Interviewer take an interview for a candidate on the following parameters

	int know, logic, conf, comm;
	printf("\n enter the marks of knowledge");
	scanf_s("%d", &know);
	printf("\n enter the marks of logic building");
	scanf_s("%d", &logic);
	printf("\n enter the marks of confidence");
	scanf_s("%d", &conf);
	printf("\n enter the marks of communication");
	scanf_s("%d", &comm);

	
	int avg = (know + logic + conf + comm) / 4;

	if (know, logic, conf, comm >= 1 && know, logic, conf, comm <= 10)
	{
		if (avg >= 0 && avg < 7) {
			printf("\n not selected");
		}
		else if ( avg >= 7 && avg == 10) {
			printf("\n selected");
		}
	}
	else {
		printf("\n wrong parameter");
	}

	return 0;

}