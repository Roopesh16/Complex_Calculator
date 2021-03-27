/**
 * @file main.c
 * @author Roopesh Verma
 * @brief main function for calculator program
 * @version 0.1
 * @date 2021-03-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include "calc.h"
int main()
{
    complex_t a = {10,10};
    complex_t b = {20,20};
    complex_t c = {0,0};

    int n;

    printf("\t\t COMPLEX CALCULATOR\n");
    printf("\t\t ENTER \n"); 
    printf("\t\t 1.SUM \n");
    printf("\t\t 2.DIFFERENCE\n");
    printf("\t\t 3.DIVISION\n");
    printf("\t\t 4.MULTIPLICATION\n");

    scanf("%d",&n);

    switch (n){
        case 1: csum(&a,&b,&c);
                break;
        case 2: cdiff(&a,&b,&c);
                break;
        case 3: cdiv(&a,&b,&c);
                break;
        case 4: cmult(&a,&b,&c);
                break; 
          }

    return 0;
}