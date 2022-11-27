/*
    This program is written by Harsh Murjani.
    This is a basic calculator which can be used to calculate basic operations like addition, subtraction, multiplication and division.
    This calculator is made using condition statement (if... else). Also another calculator using conditional statement (switch... case) is uploaded on my GitHub.
    Do check it out https://github.com/hm05 repository link https://github.com/hm05/Calculator
    This program is written on 27 November 2022.
*/
#include<stdio.h>

void main()
{

/*--------Value Allocation--------*/
    float num1, num2, ans;
    char operation;

    printf("Please enter here-->\n");
    scanf("%f %c %f",&num1,&operation,&num2);

/*--------Conditional Statements Starts here------*/
    if(operation == '+')
    {
        ans=num1+num2;
        printf("%.2f",ans);
    }
    else if(operation == '-')
    {
        ans=num1-num2;
        printf("%.2f",ans);
    }
    else if(operation == '*')
    {
        ans=num1*num2;
        printf("%.2f",ans);
    }
    else if(operation == '/')
    {
        ans=num1/num2;
        printf("%.2f",ans);
    }
    else
    {
        printf("Please choose a valid operation");
    }

/*--------Conditional Statements Ends here--------*/

    return 0;
}
