#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
srand(time(NULL));
int myrand = rand() % 11;

printf("The random number was: %d\n" , myrand);

if(myrand <= 4){
printf("Eat more beef, kick less cats \n");
}

else if(myrand <= 9){
printf("FRODO LIVES\n");
}

else{
printf("Larn is the best roguelike \n");
}



}

