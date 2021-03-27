/**
 * @file calc.h
 * @author Roopesh Verma
 * @brief Functions to perform Sum, Difference, Division and Multiplication on complex Varibales of \ref complex_t
 * @version 0.1
 * @date 27-03-2021
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __CALC_H__
#define __CALC_H__
/**
 * @brief Error values for calculator operations
 * 
 */
typedef enum opfn {
    ERROR_DIV_BY_ZERO = -2, /**< Division by 0 error */
    ERROR_NULL_PTR = -1,    /**< Null pointer dereferncing error */
    SUCCESS = 0             /**< Compute operation is successful */
}opfn;

/**
 * @brief Structure for Complex number
 * 
 */
typedef struct complex_t {
    float real;         /**< real part of the complex number */
    float imaginary;    /**< real part of the complex number */
} complex_t;


/**
* @brief Computes sum of the two complex numbers
 * 
 * @param[in] num1 Pointer to complex number1
 * @param[in] num2 Pointer to complex number2 
 * @param[out] sum Pointer to store the computed result
 * @return error_t SUCCESS if operation is completed successfully. Error value otherwise.
 */

opfn csum(complex_t *num1, complex_t *num2, complex_t *sum);

/**
 * @brief Computes the difference of two complex numbers
 * 
 * @param[in] num1 Pointer to complex number1
 * @param[in] num2 Pointer to complex number2 
 * @param[out] diff Pointer to store the computed result
 * @return error_t SUCCESS if operation is completed successfully. Error value otherwise.
 */

opfn cdiff(complex_t *num1, complex_t *num2, complex_t *diff);

/**
 * @brief Computes the difference of two complex numbers
 * 
 * @param[in] num1 Pointer to complex number1
 * @param[in] num2 Pointer to complex number2 
 * @param[out] div Pointer to store the computed result
 * @return error_t SUCCESS if operation is completed successfully. Error value otherwise.
 */

opfn cdiv(complex_t *num1, complex_t *num2, complex_t *div);

/**
 * @brief Computes the difference of two complex numbers
 * 
 * @param[in] num1 Pointer to complex number1
 * @param[in] num2 Pointer to complex number2 
 * @param[out] mult Pointer to store the computed result
 * @return error_t SUCCESS if operation is completed successfully. Error value otherwise.
 */

opfn cmult(complex_t *num1, complex_t *num2, complex_t *mult);

#endif
