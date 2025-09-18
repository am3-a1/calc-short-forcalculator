#include <stdio.h>
int power(base, exponent){
    int result;
    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }
    return result;
}

void calculator() {
    char UserInput;
    char Retry;
    do{
    int num1; int num2; int result;
    printf("Input two numbers:");
    scanf("%d %d", &num1, &num2);   
    printf("\nEnter your desired operation:");
    scanf(" %c", &UserInput);
    if (UserInput == '+' ||UserInput == '-' || UserInput == 'x' || UserInput == '/' || UserInput == '%' || UserInput == '^')
    {   
    
        if (UserInput == '+')
        {
            result = num1 + num2;
            printf("%d", result);
        }
        else if (UserInput == '-')
        {
           result = num1 - num2;
           printf("%d", result);
        }
        else if(UserInput == 'x'){
            result = num1 * num2;
            printf("%d", result);
        }
        else if(UserInput == '/'){
            result = num1/num2;
            printf("%d", result);
        }
        else if(UserInput == '%'){
            (int)num1; (int)num2; (int)result;
            result = num1%num2;
            printf("%d", result);
        }
        else if(UserInput == '^'){
            result = power(num1, num2);
            printf("%d", result);
        }
    }
    else{
    printf("Invalid Choice, Try again.");
    Retry = 'Y';
    }
        printf("\n Would you like to try again? Y/N\n");
        scanf(" %c", &Retry);
}

    while (Retry == 'Y' || Retry == 'y');
  
}

int main(){
    calculator() ;
    return 0;
}