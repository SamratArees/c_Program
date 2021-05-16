//We will write a program that generates a random number and asks
//the player to guess it. If the player's guess is higher than the 
//actual number, then theprogram displays "Lower number please"
//Similarly if the user's guess is to low, the program prints"Higgher number peles
// when the user guess the ecorrect number. the program displas the nnumber of guesses the 
//player use to arrive of the number.


#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main()

{
    int n;
    int guess,nguess=1;
    srand(time(0));
    n=rand()%100 +1;//Generates ramdom number between 1-100
    printf("The number is %d\n", n);

    //keep running the loop until the number ris gueessed

    do 
    {
        printf("Guess a number 1-100\n");
        scanf("%d", &guess);

        if (guess>n)
        {
            printf("Please enter the lower please\n");
        }
        else if(guess<n)
        {
            printf("Please enter the higher number\n");
        }
        else
        {
            printf("you guesses it in %d attempts\n",nguess);
        }
        nguess++;
    } 
    while(guess!=n);
    return(0);
}