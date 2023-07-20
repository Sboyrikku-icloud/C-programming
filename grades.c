#include <stdio.h>
voidmain()
{
    int marks ;
    printf("Enter your marks");
    scanf("%d" ,& marks);
    if (marks<0 || marks>100)
    {
        printf("Wrong entry");
    }
    else if(marks<50)
    {
        printf("f");
    }
    else if(marks>=50 && marks<60)
    {
        printf("grade e");
    }
    else if(marks>=60 && marks<70)
    {
        printf("print d");
    }
    else if(marks>70 && marks<80)
    {
        printf("grade c");
    }
    else if(marks>=80 && marks<90)
    {
        printf("grade b");
    }
    else if(marks>=90 && marks<100)
    {
        printf("Grade a");
    }
}
