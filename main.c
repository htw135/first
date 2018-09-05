/*
 * main.c
 *
 *  Created on: Jun 13, 2018
 *      Author: jinsoonchun
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
	int arr[1][1] = {100};

	printf("arr  =%p\n", arr);
	printf("arr[0]  =%p\n", arr[0]);
	printf("&arr[0][0]  =%p\n", &arr[0][0]);
	printf("arr[0][0] =%p\n", arr[0][0]);
	printf("*arr  =%p\n", *arr);
	printf("*(int*)arr  =%p\n", *(int*)arr);
	printf("**arr  =%p\n", **arr);
	return 0;
}
