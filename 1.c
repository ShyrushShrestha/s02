/*
Student name : Shyrush Shrestha
Subject:Programming Fundam.
LabNo: 01
Program:Write a program to print either number is positive,negative or zero.
Date : 2016-10-17
*/
#include<stdio.h>
int	main(){
	float n;
	printf ("Enter any number:");
	scanf ("%f",&n);
	printf ("\n%f\n",n);
	
	if(n>0){
		printf("%f is positive no" ,n);
		}
	else if(n<0){
		printf("Negative no us:%f",n);
		}
	else 
	{
		printf("No is zero;%f",n);
		}
	return (0);
	}
