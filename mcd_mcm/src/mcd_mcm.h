/*
 * mcd_mcm.h
 *
 *  Created on: 11 set 2017
 *      Author: gabriele
 */

#ifndef MCD_MCM_H_
#define MCD_MCM_H_

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ZERO           0
#define ONE            1
#define MAX_NUMBER     50
#define FILE_NAME      "mcd_mcm.txt"
#define FILE_MODE      "w"
#define PRINT_NUMBERS  "\nPrimo numero: %d\nSecondo numero: %d\n"
#define PRINT_MCD_MCM  "\nMCD = %d\nmcm = %d"

/**
 * Assicura che ad ogni lancio il programma
 * generi in modo casuale numeri sempre diversi
 */
void srand_time();

/**
 * Genera in maniera casuale un numero intero
 * @post il numero generato deve essere un numero intero maggiore di 0
 * @return
 */
int generate_number();

/**
 * Stampa su file i due numeri di cui calcolare MCD e mcm
 * @pre il file deve essere aperto
 * @param file
 * @param a
 * @param b
 */
void print_numbers(FILE* file, int a, int b);

/**
 * Restituisce il MCD dei due parametri
 * @pre i due parametri devono essere due numeri interi maggiori 0
 * @param a
 * @param b
 * @return
 */
int mcd(int a, int b);

/**
 * Restituisce il mcm dei due parametri
 * @pre i due parametri devono essere due numeri interi maggiori 0
 * @param a
 * @param b
 * @return
 */
int mcm(int a, int b);

/**
 * Stampa su file il MCD e il mcm dei due parametri
 * @pre il file deve essere aperto
 * @param file
 * @param a
 * @param b
 */
void print_mcd_mcm(FILE* file, int a, int b);

#endif /* MCD_MCM_H_ */
