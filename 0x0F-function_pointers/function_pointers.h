#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
#include <stddef.h>

/**Author: Aaron0Chillz
 * task: pointers to fiunctions and vice versa
 */

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
int (*get_op_func(char *s))(int, int);
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);



/**
 * enum bool - typedef function for bool
 * @TRUE: 1
 * @FALSE: 0
*/
typedef enum bool
{
	TRUE = 1,
	FALSE = 0
} bool;

#endif /** FUNCTION POINTERS.H */
