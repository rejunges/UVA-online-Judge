#include <stdio.h>

long int untilIs1(long int number){
	long int cont = 1;
	
	while(number != 1){
		
		if (number%2 == 0){
			number = number/2;
		}
		else{
			number = number*3 + 1; 
		}
		cont++;
	}
	
	return cont;
}

int main(){
	long int iNumber,jNumber;
	while(scanf("%ld %ld", &iNumber, &jNumber) != EOF){
		long int start, end, max = 1, result = 0, i;
		
		if (iNumber <= jNumber){
			start = iNumber;
			end = jNumber;
		}
		else{
			start = jNumber;
			end = iNumber;
		}

		for (i = start; i <= end; i++){
			result = untilIs1(i);
			if(result > max)
				max = result;
		}
		printf("%ld %ld %ld\n", iNumber, jNumber, max);
	}
	return 0;
}