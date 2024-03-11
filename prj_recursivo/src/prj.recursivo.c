/*
 ============================================================================
 Name        : recursivo.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int fatorialRecursivo(int n) {
	if (n == 0 || n == 1) {
		return 1;
	} else {
		return n * fatorialRecursivo(n - 1);
	}
}
int fatorialComLoop(int n) {
	int resultado = 1;
			for (int i = 1; i <= n; i++) {
				resultado *= i;
			}
	return resultado;
}
int main(void) {
	int numero = 5;
	printf("O fatorial de %d é: %d\n", numero, fatorialRecursivo(numero));
	return 0;
}
