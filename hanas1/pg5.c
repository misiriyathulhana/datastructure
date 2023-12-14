#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define N5
void push();
void pop();
void peek();
void display();
int stack[N];
int top=-1;
void main()
	{
	in ch;
	// clr scr();
	do
	{
	printf("enter choice:");
	printf("\n 1.psh \n 2.pop \n 3.peek \n 4.display \n");
	printf("enter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
	case1:
	push();
	break;
	case2:pop();
	break;
	case3:peek();
	break;
	case4:display();
	break;
	default:printf("enter a valid choice:")
