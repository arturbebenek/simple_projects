/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Art
 line counting
 * Created on 26 sierpnia 2018, 18:14
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
int c;
int nl;
nl = 0;
while ((c = getchar()) != EOF){
if (c == '\n'){
nl++;
printf("%d\n", nl);
}};
    return (EXIT_SUCCESS);
}

