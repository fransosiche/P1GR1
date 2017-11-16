#include <stdio.h>
#ifndef __LIST__H__
#define __LIST__H__
#endif

typedef struct variable
{
    int pouls;
    int time;
}var;


typedef struct file
{
    struct var *etatsuivant;
    struct file *suivant;
} File;

void file_enqueue(File **p_file, struct variable var);

void file_dequeue(File **p_file);

