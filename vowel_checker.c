#include <stdio.h>

int main(){

	char car;

	printf("enter a character: ");
	scanf("%c", &car);

	if(car == 'a' || car == 'A' || 
	car == 'e' || car == 'E' ||
	car == 'o' || car == 'O' ||
	car == 'i' || car == 'I' ||
	car == 'u' || car == 'U'
	){
		printf("A vowel");
	}

	else if((car >= 'a' && car <= 'z') ||
	        (car >= 'A' && car <= 'Z')
	){
		printf(" A consonant");
	}

	else{
		printf("Not a letter at all");
	}


	return 0;
}

    
