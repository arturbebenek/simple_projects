/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Art
 *
 * Created on 28 sierpnia 2018, 18:55
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * program that counts words
 */
int main(int argc, char** argv) {

#define IN 1 /*inside a word */
#define OUT 0 /*outside*/
    
 int c, nl, nw, nc, state;
 
 state = OUT;
 nl = nw = nc = 0;
 while((c = getchar()) != EOF){
     ++nc;
     if (c == '\n'){
         ++nl;}
     if (c == ' ' || c == '\n' || c == '\t'){
         state = OUT;}
     else if (state == OUT){
         state = IN;
         ++nw;
     }
  }
 printf("%d %d %d\n", nl, nw, nc);
   return (EXIT_SUCCESS);
}

