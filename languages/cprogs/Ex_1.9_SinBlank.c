/**
 * Exercise 1.9 - Write a Program to copy its input to its output, replacing
 * each string of one or more blanks by a single blank.
 *
 * */
#include<stdio.h>

/* Replcaing blank or more with one */

main() 
{
    int c,lastc;
    lastc = c - 1; /* or lastc = --c */ 
    while((c = getchar()) != EOF){
        if (c != ' ')
            putchar(c);
        if (c == ' ')
            if (lastc != ' ')
                putchar(c);
        lastc = c;
    }
}            
