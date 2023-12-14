// Reversing of stack

// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
 char stack[20];
 int top=-1;
 
 void push(char);
 char pop();
 
 void main()
 {
     char str[20],ch;
     int l,i;
     printf("Enter the string:\n");
     gets(str);
     l=strlen(str);
     for(i=0;i<l;i++)
     
         push(str[i]);
     
     printf("Reversed string is:\n");
     for(i=0;i<l;i++)
     {
         ch = pop();
         printf("%c",ch);
     }
 }
 void push(char c)
 {
     top++;
     stack[top]=c;
     
 }
 char pop()
 {
     char c;
     c=stack[top];
     top--;
     return c;
 }
