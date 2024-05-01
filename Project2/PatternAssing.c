#include<stdio.h>
int main() {
	// 1
	/*
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 5; j++) {
			printf(" * ");
		}
		printf("\n");
	}
	*/

	//4
	/*
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j < i; j++) {
			printf(" ");
		}
		for (int j = 5; j >= i; j--) {
			printf("*");
		}
		printf("\n");
	}
	*/
	//2
	/*
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= i; j++) {
			printf(" * ");
		}
		for (int j = 5; j > i; j--) {
			printf("  ");
		}
		printf("\n");
	}
	*/
	//3
	/*
	for (int i = 5; i >= 1; i--) {
		for (int j = 1; j <= i; j++) {
			printf(" * ");
		}
		for (int j = 1; j < i; j++) {
			printf("  ");
		}
		printf("\n");
	}
	*/
	//5
	/*
	for (int i = 1; i <= 5; i++) {
		for (int j = 5; j >= i; j--) {
			printf("  ");
		}
		for (int j = 1; j <= i; j++) {
			printf("* ");
		}
		printf("\n");
	}
	*/
	//6
	/*
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 5; j++) {
			if(i=1||)printf(" * ");
		}
		for (int j = 1; j <= i; j++) {
			printf(" ");
		}
		printf("\n");
	}
	*/
	/*
	int n = 1;
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= i; j++) {
			printf(" ");
		}
		for (int j = 5; j > i; j--) {
			printf(" %d ", n++);
		}
		printf("\n");
	}
	*/
	//6
	/*
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 5; j++) {
			if (i == 5 || j == 1 || i==j) {
				printf(" *");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	*/
	//7
	/*
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 5; j++) {
			if (i == 1 || i == 5 || j == 1 || j == 5) {
				printf(" * ");
			}
			else {
				printf("   ");
			}
		}
		printf("\n");
	}
	*/
	//8
	/*
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 5; j++) {
			if (i == 1 || j == 5 || i == j) {
			printf(" *");
			}
			else
			{
			printf("  ");
			}
	}
			printf("\n");
	}
	 */
	 // 9
	 /*
	 for (int i = 1; i <= 5; i++) {
		 for (int j = 1; j <= 5; j++) {
			 if (i == 5 || j == 5 || (i ==3 && j == 3)||(i==2&&j==4) || (i == 4 && j == 2)) {
			 printf(" *");
		 }
			 else
		 {
			 printf("  ");
		 }
	 }
		 printf("\n");
	 }
	 */
	 //10
	 /*
	 for (int i = 1; i <= 5; i++) {
		 for (int j = 1; j <= 5; j++) {
			 if (i == 1 || j == 1 || (i == 3 && j == 3) || (i == 2 && j == 4) || (i == 4 && j == 2)) {
				 printf(" *");
			 }
			 else
			 {
				 printf("  ");
			 }
		 }
		 printf("\n");
	 }
	 */
	 //
	 /*
	 for (int i = 1; i <= 4; i++) {
		 for (int j = 1; j <= 4 - i; j++) {
			 printf(" ");
		 }
		 for (int j = 1; j <= 2 * i - 1; j++) {
			 printf("*");
		 }
		 printf("\n");
	 }
	 */

	 //
	 /*
	 for (int i = 4; i >= 1; i--) {
		 for (int j = 1; j <= 4 - i; j++) {
			 printf(" ");
		 }
		 for (int j = 1; j <= 2 * i - 1; j++) {
			 printf("*");
		 }
		 printf("\n");
	 }
	 //
	 */
	/*
	for (int i = 1; i <= 4; i++) {
		for (int j = 1; j <= i; j++) {
			printf(" * ");
		}

		printf("\n");
   }
	for (int i = 3; i >= 1; i--) {
		for (int j = 1; j <= i; j++) {
			printf(" * ");
		}

		printf("\n");
	}
	*/
	//
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			if ((i==1)||(j==9)||(i==j)) {
			printf(" *");
			}
			
		}
		
		printf("\n");
	}



	return 0;
}