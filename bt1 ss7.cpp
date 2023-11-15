#include<stdio.h>
int main(){
	int number;
	printf("Nhap so nguyen tu 1-100\n");
	for(number=1;number<=100;number++){
		if ((number%3 == 0)&&(number%5==0)){
			printf("%d FizzBuzz\n",number);
		}else if (number % 5 == 0){
	     printf("%d Buzz\n",number);
		}else if (number % 3 == 0){
		printf("%d Fizz\n",number);
		}
	}
}
