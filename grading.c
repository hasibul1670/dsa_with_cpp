
#include <stdio.h>

int main()
{
    printf("Enter Your Marks \n");
    int marks;
    scanf("%d", &marks);

if(marks <= 100 && marks >= 0){
   if (marks >= 80)
    {
        printf("Your Grade is A+ \n");
    }
    else if (marks > 80)
    {
        printf("Your Grade is A \n");
    }
    else if (marks > 70)
    {
        printf("Your Grade is A- \n");
    }
    else if (marks >= 70)
    {
        printf("Your Grade is B \n");
    }
    else if (marks >= 50)
    {
        printf("Your Grade is C \n");
    }
    else if (marks >= 40)
    {
        printf("Your Grade is D \n");
    }
    else
    {
        printf("Your Grade is F \n");
    }
}else {
    printf("Enter Valid Marks Within 0 - 100 \n");
}
 
    return 0;
}