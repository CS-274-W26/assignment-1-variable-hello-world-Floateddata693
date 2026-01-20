#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	srand(time(NULL));//seeds the psuedo random number generator
	int myrand = rand() % 11;

	printf("The random number was: %d\n" , myrand); //prints the value of myrand

	if(myrand <= 4){ //0-4
		printf("Eat more beef, kick less cats \n");
	}

	else if(myrand <= 9){//5-9
		printf("FRODO LIVES\n");
	}

	else{ //10 only
		printf("Larn is the best roguelike \n");
	}



}

