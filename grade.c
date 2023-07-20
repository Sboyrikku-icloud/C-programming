#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
float marks;

//Taking marks as input from user
printf("\nEnter Student Marks:");
scanf("%f",&marks);

//Marks between 80 and 100 is graded as distinction
if(marks>=80 && marks<=100)
printf("\nGrade : a");


//Marks between 80 and 60 are graded as first class
else if(marks<80 && marks>=60)
printf("\nGrade : b");


//Marks between 60 and 40 are graded as second class
else if(marks<60 && marks>=40)
printf("\nGrade : c");

//Marks between 40 and 0 as=re graded as fail
else if(marks <40 && marks >=0)
printf("\nGrade : Fail");


//Otherwise
else
printf("\nEnter valid marks");
getch();
}
