#include "stdlib.h"
#include "calc.h"

//Function fo SUM

opfn csum(complex_t *num1, complex_t *num2, complex_t *sum)
{
    if(num1 == NULL|| num2 == NULL)
        return ERROR_NULL_PTR;
    
    
    sum->real = num1->real + num2->real;
    sum->imaginary = num1->imaginary + num2->imaginary;

    return SUCCESS;

}

//Function for DIFFERENCE

opfn cdiff(complex_t *num1, complex_t *num2, complex_t *diff)
{
    if(num1 == NULL || num2 == NULL)
         return ERROR_NULL_PTR;

    diff->real = num1->real - num2->real;
    diff->imaginary = num2->imaginary - num2->imaginary;

    return SUCCESS;
}

//Function for DIVISION

opfn cdiv(complex_t *num1, complex_t *num2, complex_t *div)
{
    if(num1 == NULL || num2 == NULL){
         return ERROR_NULL_PTR}

      if(num2.real == 0 && num2.imaginary == 0){
             return ERROR_DIV_BY_ZERO}
    

    div->real = (num1.real*num2.real + num1.imaginary*num2.imaginary)/(num2.real*num2.real + num2.imaginary*num2.imaginary);
    div->imaginary = (num1.imaginary*num2.real - num1.real*num2.imaginary)/(num2.real*num2.real + num2.imaginary*num2.imaginary);

    return SUCCESS;
}
//Function for MULTIPLICATION

opfn cmult(complex_t *num1,complex_t*num2,complex_t *mult){
    if(num1 == NULL || num2 == NULL){
        return ERROR_NULL_PTR}
    
    
    mult->real = (num1.real*num2.real) - (num1.imaginary*num2.imaginary);
    mult->imaginary = (num1.real*num2.imaginary) + (num1.imaginary*num2.real);
}