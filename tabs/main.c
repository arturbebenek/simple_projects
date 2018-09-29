/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Art
 *
 * Created on 26 sierpnia 2018, 18:23
 */

#include <stdio.h>
#include <stdlib.h>

/*
 \t \b \\
 */
int main(int argc, char** argv) {
    int c;
    
  while ((c=getchar()) != EOF){
if (c == '\t'){
     putchar('\\');
    putchar('t');
}else if (c == '\b'){
     putchar('\\');
    putchar('b');
}else if (c == '\\'){
      putchar('\\');
      putchar('\\');
}else { 
   putchar(c);
  }}  
    return (EXIT_SUCCESS);
}

