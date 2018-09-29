/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Art
 *
 * Created on 25 sierpnia 2018, 20:12
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include<stdio.h>
    int x1,x2;
    int y1,y2;
    double r;
    
    double oblicz(int,int,int,int);
    void pokaz(double);
 
    
int main()
{
    printf("podaj wspolrzedne x i y pierwszego punktu");
    scanf("%d%d",&x1,&y1);
    printf("podaj wspolrzedne x i y drugiego punktu");
    scanf("%d%d",&x2,&y2);
    r=oblicz(x1,x2,y1,y2);
    pokaz(r);
    return 0;
}
  double oblicz(int a, int b, int c, int d){
    double odl = sqrt(((b - a)*(b - a))+((d - c)*(d - c)));
    return odl;
};

void pokaz(double r){
    printf("odleglosc miedzy punktami wynosi %f",r);
};
