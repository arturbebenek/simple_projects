/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Art
 *
 * Created on 26 sierpnia 2018, 18:02
 */

#include <stdio.h>
#include <stdlib.h>

/*
 counting chars
 */
int main(int argc, char** argv) {
double nc;

for (nc = 0; getchar()!= EOF; ++nc){
 printf ("to jest %.0f znak \n", nc);
}
    return (EXIT_SUCCESS);
}

