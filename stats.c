/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <sultangazyTask1> 
 * @brief <manipulations with array >
 *
 * <Find min,max,mean and median values of sorted array>
 *
 * @author <Sultangazy Kerimbayev>
 *  <26.04.2021 >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  print_stats(test,SIZE);
}
int find_maximum(unsigned char *ptra,int n){
int maximum = (int)*(ptra);
for(int i=0;i<n;i++){
	if((int)*(ptra+i)>maximum){
		maximum=(int)*(ptra+i);
	}
}
return maximum;
}
int find_minimum(unsigned char*ptra,int n){
int minimum = (int)*(ptra);
for(int i=0;i<n;i++){
if((int)*(ptra+i)<minimum){
minimum = (int)*(ptra+i);
}
}
return minimum;
}
double find_mean(unsigned char*ptra,int n){
double sum=0;
for(int i=0;i<n;i++){
	sum = sum +(double)*(ptra+i);
}
return sum/(double)n;
}
void sorting (unsigned char*ptra,int n){
for(int i=0;i<n;i++){
for(int j=0; j<n-i-1;j++){
if(*(ptra+j),*(ptra+j+1)){
unsigned char temp=*(ptra+j);
*(ptra+j) = *(ptra+j+1);
*(ptra+j+1)=temp;
}
}
}
}
double find_median(unsigned char *ptra,int n){
if(n%2!=0){
return *(ptra+(n/2));
}
return(*(ptra+((n-1)/2))+*(ptra+(n/2)))/2.0;
}
void print_array(unsigned char *ptra,int n){
for(int i=0;i<n;i++){
printf("%d ",*(ptra+i));
}
}
void print_stats(unsigned char *ptra,int n){
double median=find_median(ptra,n);
int max =find_maximum(ptra,n);
int min=find_minimum(ptra,n);
double mean=find_mean(ptra,n);
printf("Array elements before sorting:");
print_array(ptra,n);
printf("\n");
sorting(ptra,n);
printf("Sorted array:");
print_array(ptra,n);
printf("\n");
printf("Maximum: %d\n",max);
printf("Minimum: %d\n",min);
printf("Mean: %f\n",mean);
printf("Median: %f\n",median);
}
/* Add other Implementation File Code Here */
