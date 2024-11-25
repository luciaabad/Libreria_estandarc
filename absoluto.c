//
// Created by Lucia Abad on 25/11/24.
//
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "absoluto.h"

void absoluto() {
    // Declarar un número negativo
    int num = -10;
    int num2 = 4;
    int num3 = -35;

    // Obtener el valor absoluto utilizando abs()
    int abs_num = abs(num);
    int abs_num2 = abs(num2);
    int abs_num3 = abs(num3);

    printf("El valor absoluto de %d es %d\n", num, abs_num);
    printf("El valor absoluto de %d es %d\n", num2, abs_num2);
    printf("El valor absoluto de %d es %d\n", num3, abs_num3);

}
