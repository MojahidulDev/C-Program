#include<stdio.h>
#include<math.h>

int main()
{
    int num, rem, temp, count=0, result=0;
    printf("Enter Number: ");
    scanf("%d", &num);

    temp = num;
    while(temp !=0){
        temp = temp / 10;
        count++;
    }

    temp = num;
    while(temp !=0){
        rem = temp % 10;
        result = result + pow(rem, count);
        temp = temp / 10;
    }
    if(result == num)
        printf("%d is an Armstrong Number\n", num);
    else
        printf("%d is not an Armstrong Number\n", num);
    return 0;
}
