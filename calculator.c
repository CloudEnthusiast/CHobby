#include <stdio.h>
#include <stdlib.h>

int main()
{
    int option,count=0,i;
    float result=0, operand;
    printf("***Basic Calculator***\n");
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit\n");
    printf("Enter your option between 1 to 5:");
    scanf("%d",&option);

    if ( option == 1)
    {
        printf("How many operands to add?");
        scanf("%d",&count);
        for(i=0;i<count;i++)
        {
            printf("Enter operand %d:\n",i+1);
            scanf("%f",&operand);
            result+=operand;
        }
        printf("Sum is %f\n",result);
    }

    else if( option == 2)
    {
        float tmp1, tmp2;
        printf("How many operands for subtraction?");
        scanf("%d",&count);
        printf("Enter operand %d:\n",1);
        scanf("%f",&tmp1);
        for(i=1;i<count;i++)
        {
            float tmp = 0;
            printf("Enter operand %d:\n",i+1);
            scanf("%f",&tmp);
            tmp2 = tmp;
            result = tmp1-tmp2;
            tmp1 = result;
        }
        printf("Difference is %f\n",result);
    }
    
    else if( option == 3)
    {
        printf("How many operands to multiply?");
        scanf("%d",&count);
        result = 1;
        for(i=0;i<count;i++)
        {
            printf("Enter operand %d:\n",i+1);
            scanf("%f",&operand);
            result*=operand;
        }
        printf("Product is %f\n",result);
    }

    else if( option == 4)
    {
        float tmp1, tmp2;
        printf("How many operands for division?");
        scanf("%d",&count);
        printf("Enter operand %d:\n",1);
        scanf("%f",&tmp1);
        for(i=1;i<count;i++)
        {
            float tmp = 0;
            printf("Enter operand %d:\n",i+1);
            scanf("%f",&tmp);
            tmp2 = tmp;
            result = tmp1/tmp2;
            tmp1 = result;
        }
        printf("Quotient is %f\n",result);
    }

    else if (option == 5)
    {
     exit(0);
    }

    else
    {
        printf("You selected Invalid Choice.\n");
    }
    return 0;
}
