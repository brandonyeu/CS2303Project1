#include <stdio.h>
#include <stdlib.h>
#include "animals.h"

int main(void){
    //initialize variables
    int hareCurrPos = 0;
    int tortoiseCurrPos = 0;
    int time = 0;
    int seed;
    int winning = 2;

    //contact user
    printf("Please enter a random number seed.\n");
    scanf("%d", &seed);
    srand(seed);
    
    //run the race
    while (!(hareCurrPos >= 70) && !(tortoiseCurrPos >= 70)){
        //increment time
        time++;

        //update hare first
        hareCurrPos = update_hare(hareCurrPos);
        //check if hare won the race
        if (hareCurrPos >= 70){
            printf("After %d seconds, the hare wins!!\n", time);
            break;
        }

        //update tortoise
        tortoiseCurrPos = update_tortoise(tortoiseCurrPos);
        //check if tortoise won the race
        if (tortoiseCurrPos >= 70){
            printf("After %d seconds, the tortoise wins!!\n", time);
            break;
        }

        if (hareCurrPos < 0){
            hareCurrPos = 0;
        }
        if (tortoiseCurrPos < 0){
            tortoiseCurrPos = 0;
        }

        //set which animal is in the lead
        if(!(winning == 0) && tortoiseCurrPos > hareCurrPos){
            winning = 0;
            printf("At t = %d, the tortoise (square %d) has passed the hare (square %d).\n", time, tortoiseCurrPos, hareCurrPos);
        }

        else if(!(winning == 1) && hareCurrPos > tortoiseCurrPos){
            winning = 1;
            printf("At t = %d, the hare (square %d) has passed the tortoise (square %d).\n", time, hareCurrPos, tortoiseCurrPos);
        }
    }
}