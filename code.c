#include<stdio.h>

int main(){

    int no1, no2, no3;

    printf("Enter The Three Number =\n");
    scanf("%d %d %d", &no1, &no2, &no3);

    if (no1>no2 && no1>no3)
    {
        printf("The Largest Number =%d", no1);
    }
    if (no2 > no1 && no2 > no3)
    {
        printf("The Largest Number =%d", no2);
    }
    if (no3 > no1 && no3 > no2)
    {
        printf("The Largest Number =%d", no3);
    }
    if (no1 == no2 && no1 == no3)
    {
        printf("All Value Is Same!");
    }

    return 0;
}