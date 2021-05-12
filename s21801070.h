#ifndef __S21801070_H__
#define __S21801070_H__

#include<stdio.h>
#include "s21700794.h"

int menu(); // menu driven
int fileopen(int BOOL);
int fileread(Todolist * list);
void writefile(Todolist * list);
int searchuserid(Todolist * list);
int searchprior(Todolist * list);

#endif
