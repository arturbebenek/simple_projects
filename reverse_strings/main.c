/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Art
 *
 * Created on 3 września 2018, 22:30
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * program made to reverse strings and all lines of input
 */

char* input;
char *output_word;
void reverse(void){
 int j=0;
 output_word = malloc(50 * sizeof(char));    
input = malloc(50 * sizeof(char));
scanf("%s",input);
output_word = input;
printf("org %s",input);
int i=strlen(input);
    for (i-1;i>0;i--){
       // strchr(s1, ch);
     //    = input[i];       kupiuje adres zamiast wartosci
  //  output_word[j]= 
    j++;
}
printf(" rev %s",output_word);    
    
    
}





int main(int argc, char** argv) {
    printf("podaj wyraz do odwrocenia: \n");
    reverse();  
    
    
    return (EXIT_SUCCESS);
}

