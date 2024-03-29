#ifndef QUEUE_H

#define QUEUE_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iso646.h>
#include <locale.h>

/**
 *
 */
typedef enum
{
    EXIT,
    CREATE,
    DELETE,
    SHOW
}
Options;

/**
 *
 */
struct element
{
    int value;

    struct element* pointerToNext;
};

/**
 * Definicao do descritor.
 * Ponteiros que armazezam o inicio e o final da fila
 */
typedef struct
{
    struct element* pointerToBeginQueue;

    struct element* pointerToEndQueue;
}
descritor;

/**
 *
 */
struct element* createElement(void);

/**
 *
 */
bool isEmpty(descritor*);

/**
 *
 */
void enQueue(descritor*, struct element*);

/**
 *
 */
void deQueue(descritor*);

/**
 *
 */
void showQueue(descritor*);

/**
 *
 */
unsigned int createMenu(void);

#endif