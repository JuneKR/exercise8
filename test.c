#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void exer1(){
	int num = 100;
	int i = 50;
	while(num >= i){
		printf(" %d,", num);
		num--;
	}
}

void exer2(){
	int num   = 1,
		count = 1;
	
	for(count;count <= 40 ; count++){
		if((num % 3 ) == 0){
			num++;
		}
		else{
			printf(" %d,", num);
			num++;
		}
	}
}
	void exer3(){
		int a,b, result;
		printf("Enter first number: ");
		scanf("%d", &a);
		printf("Enter second number: ");
		scanf("%d", &b);
		result = a + b;
		printf("The result is : %d", result);
	}
	
	void exer3_2(){
		int a,b, result,sum;
		printf("Enter first number: ");
		scanf("%d", &a);
		printf("Enter second number: ");
		scanf("%d", &b);
		result = a + b;
		while( a < result && b < result){
			printf("Number between a and b is: %d \n", a);
			sum += a;
			a++;
	}
	printf("The result is : %d", sum);
//	printf("The result is : %d", result);
	}
	
	void exer4(){
		int num, 
	result, 
	tableLength, 
	count = 1;
	
	printf("Enter number : ");
	scanf("%d", &num);
	printf("Enter table length : ");
	scanf("%d", &tableLength);
	while(count <= tableLength){
		result = num * count;
		printf(" %d x %d = %d \n", num,count,result);
		count++;
	}
	}
	
	void exer5(){
		int num;
		
		printf("======================================== \n");
		printf("Wait for users input any key to start \n");
		printf("or press 0 to stop :");
		scanf("%d", &num);
		
		while(num != 0){
			
			printf("Enter a number : ");
			scanf("%d", &num);
			if((num % 2) == 0){
				printf(" %d is even number \n", num);
			}
			else if((num % 2) != 0){
				printf(" %d is odd number \n", num);
			}

		}

	}
	exer5_2(){
		int num,
		key;
		
		printf("======================================== \n");
		printf("Wait for users input any key to start \n");
		printf("or press 0 to stop :");
		scanf("%d", &key);
		
		while(key != 0){
			
			printf("Enter a number : ");
			scanf("%d", &num);
			if((num % 2) == 0){
				printf(" %d is even number \n", num);
			}
			else if((num % 2) != 0){
				printf(" %d is odd number \n", num);
			}
			else{
				printf("Zero is ....");
			}
			
			printf("wait for any key \n");
			scanf("%d", &key);
		}
	}
	


int main() {
	exer5();	
}
