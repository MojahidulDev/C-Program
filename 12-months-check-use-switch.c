#include<stdio.h>

int main()
{
    int n;
    printf("Enter a Month number: ");
    scanf("%d",&n);
    
    switch(n){
        case 1:
        printf("January - 2025\n");
        break;
        case 2:
        printf("February - 2025\n");
        break;
        case 3:
        printf("Merch - 2025\n");
        break;
        case 4:
        printf("April - 2025\n");
        break;
        case 5:
        printf("May - 2025\n");
        break;
        case 6:
        printf("June - 2025\n");
        break;
        case 7:
        printf("July - 2025\n");
        break;
        case 8:
        printf("August - 2025\n");
        break;
        case 9:
        printf("September - 2025\n");
        break;
        case 10:
        printf("October - 2025\n");
        break;
        case 11:
        printf("November - 2025\n");
        break;
        case 12:
        printf("December - 2025\n");
        break;
        default:
        printf("Invalid Enter");
    }
    
    return 0;
}