/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Art
 *
 * Created on 26 sierpnia 2018, 17:06
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, 
char** argv) {
    while(1){
        int c = getchar();
        printf("\n");
        if(c != EOF){
            if ((c != EOF)== 0){
                printf("(c != EOF) = 0");
            }
                else if ((c != EOF)==1){
                 printf("(c != EOF) = 1");   
                }else{
                     printf("unknown value");
                 }
                    
            }else{
            printf("value of EOF is: %d",c);
            }
            
        }
        
                    
                    
             
    
    
    return (EXIT_SUCCESS);
}

