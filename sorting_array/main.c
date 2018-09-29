/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Art
 *
 * Created on 2 września 2018, 19:15
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
long min;

void Switch(int *a, int *b){
int temp;
temp=*a;
*a=*b;
*b=temp;
}

int minSum(int passed[], int passed_size)
{
//sorting up
  for (int k=0; k<passed_size;k++){
    for (int i=0; i<passed_size - k; i++){
      if(i!=passed_size - 1){
        if(passed[i]>passed[i+1]){
        Switch(&passed[i],&passed[i+1]);
        }
      }
    }
  }
  
  for(int j=0;j<passed_size;j++){ 
printf("%d element to %d \n ",j, passed[j]);
}

//suming
int sum_count = passed_size / 2;
for (int i=0;i<sum_count; i++){
  min += passed[i] * passed[(passed_size - 1 - i)];
}
  return min; 
}
}

