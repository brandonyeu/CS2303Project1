#include <stdio.h>
#include <stdlib.h>
#include "animals.h"

/***************************************************
* int update_hare(int current_position)
* Determines the new position of the hare after 1 second
*
* Parameters:
* current_position: the current location of the hare
* Returns:
* The new position of the hare
************************************************/
int update_hare(int current_position){
    //get random value
    float val = ((float) rand() / (float)(RAND_MAX));

    //check that position is not negative
    if (current_position < 0){
        current_position = 0;
    }

    //check random value for how to move 
    if ((0 <= val) && ( val < .2)){
        return current_position;
    }

    else if ((.2 <= val) && (val < .4)){
        current_position = current_position + 9;
        return current_position;
    }

    else if ((.4 <= val) && (val < .5)){
        current_position = current_position - 12;
        if (current_position < 0){
            current_position = 0;
        }
        return current_position;
    }

    else if ((.5 <= val) && (val < .8)){
        current_position = current_position + 1;
        return current_position;
    }

    else{
        current_position = current_position - 2;
        if (current_position < 0){
            current_position = 0;
        }
        return current_position;
    }
    return current_position;
}

/***************************************************
* int update_tortoise(int current_position)
* Determines the new position of the tortoise after 1 second
*
* Parameters:
* current_position: the current location of the tortoise
* Returns:
* The new position of the tortoise
************************************************/
int update_tortoise(int current_position){
    //get random value
    float val = ((float) rand() / (float)(RAND_MAX));

    //check that position is not negative
    if (current_position < 0){
        current_position = 0;
    }

    //check random value for how to move
    if ((0 <= val) && (val < .5)){
        current_position = current_position + 3;
        return current_position;
    }

    else if ((.5 <= val) && (val < .7)){
        current_position = current_position - 6;
        if (current_position < 0){
            current_position = 0;
        }
        return current_position;
    }

    else{
        current_position = current_position + 1;
        return current_position;
    }

    return current_position;
}