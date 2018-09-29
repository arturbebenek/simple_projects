/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Art
 *
 * Created on 25 sierpnia 2018, 21:13
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * ex 1.5 
 */

#define LOWER 0
#define UPPER 100
#define STEP 10
int main(int argc, char** argv) {
    float fahr, celsius;
    
    fahr =UPPER;
    while (fahr >= LOWER){
       celsius = (5.0/9.0) * (fahr-32.0); 
       printf("%f celsius is %f fahren\n", celsius, fahr);
       fahr -= STEP;
    }
    return 0;
}

