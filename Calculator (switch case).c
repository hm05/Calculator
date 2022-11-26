/*
   This program is written by Harsh Murjani.
   This is a basic calculator using switch case conditional statement.
   This program was written on date 2 November 2022.
*/
#include<stdio.h>

void main()
{

/*--------Value Allocation--------*/
    float num1, num2, ans;
    char operation;

    printf("Please enter here-->\n");
    scanf("%f %c %f",&num1,&operation,&num2);

/*--------Switch Starts here------*/
    switch (operation)
    {
    case '+':
        ans=num1+num2;
        printf("%.2f",ans);
        break;
    case '-':
        ans=num1-num2;
        printf("%.2f",ans);
        break;
    case '*':
        ans=num1*num2;
        printf("%.2f",ans);
        break;
    case '/':
        ans=num1/num2;
        printf("%.2f",ans);
        break;
    default:
        printf("Please choose a valid operation");
        break;
    }

/*--------Switch Ends here--------*/

    return 0;
}
