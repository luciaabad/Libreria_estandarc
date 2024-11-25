//
// Created by Lucia Abad on 25/11/24.
//
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void aleatorio() {
    srand(time(0));

    int random_number = rand();
    printf("Número aleatorio: %d\n", random_number);

}