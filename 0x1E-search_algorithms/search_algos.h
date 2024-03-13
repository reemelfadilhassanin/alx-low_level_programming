#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stddef.h>
#include <stdio.h>
#include <math.h>

int linear_search(int *array, size_t size, int value);
void print_array(int *array, size_t s, size_t end);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
int adva_search(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);

#endif
