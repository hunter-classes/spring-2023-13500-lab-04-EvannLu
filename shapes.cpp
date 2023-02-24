/*
Author: Evan Lu
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab-04: Task A ~ G
*/

#include <iostream>
#include "funcs.h"


std::string box(int width, int height) {
    std::string shape;
    for(int i=0; i<height; i++) {
        for(int j=0; j<width; j++) {
            shape += "*";
        }
        shape += "\n";
    }
    return shape;
}


std::string checkerboard(int width, int height) {
    std::string shape;
    for(int row=0; row<height; row++) {
        for(int col = 0; col < width; col++) {
            if((col + row)%2 == 0) {  //Instead of thinking about the row and col pattern, think square by square from left to right and then next row. 
                shape += "*";
            }
            else {
                shape += " ";
            }    
        }
        shape += "\n";
    }
    return shape;
}


std::string cross(int size) {
    std::string shape; 
    for (int i=1; i<=size; i++) {
        for (int j=1; j<=size; j++) {
            if (i==j || i+j == size+1) { 
                shape += "*";
            }else{
                shape += " ";
            }
        } 
        shape += "\n";
    }
    return shape;
}


std::string lower(int length) {
    std::string shape; 
    for(int i=1; i<=length; i++) {
        for(int j=1; j<=i; j++) {
            shape += "*";
        }
        shape += "\n";
    }
    return shape;
}


std::string upper(int length) {
    std::string shape; 
    for(int i=length; i>=1; i--) {
        for(int j=(length-i); j>0; j--) 
            shape += " "; 
        for(int k=i; k>0; k--) {
            shape += "*";
        }
        shape += "\n";
    }
    return shape; 
}


std::string trapezoid(int width, int height) {
    std::string shape; 
    int h=1;
    int s=0;
    if(width-2 * height<0) {
        return "impossible shape!";
    }
    for(int l=0; l<height; l++) {
        for(int i=0; i<width - s; i++) {
            shape += "*";
        }
        shape += "\n";
        for(int j=0; j<h; j++) {
            shape += " ";
        }
        h++;
        s += 2;
    }
    return shape;
}


std::string checkerboard3x3(int width, int height) {
    std::string shape;
    for(int i=0; i<height; i++){
        for(int j=0; j<width; j++){
            if(i%6 > 2){
                if(j%6 > 2){
                    shape += "*";
                }
                else{
                    shape +=" ";
                }
            }
            else{
                if(j%6 < 3){
                    shape += "*";
                }
                else{
                    shape +=" ";
                }
            }
        }
        shape +="\n";
    }
    return shape;
}

