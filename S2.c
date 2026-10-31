#include<stdio.h>
int main(){
    float M1 , M2 , M3 , M4 ;
    float Total ,Average ;
    printf("Enter marks of 1st subject :");
    scanf("%f" , &M1);
    printf("Enter marks of 2nd subject :");
    scanf("%f" , &M2)
    ;printf("Enter marks of 3rd subject :");
    scanf("%f" , &M3);
    printf("Enter marks of 4th subject :");
    scanf("%f" , &M4);
    Total = M1 + M2 + M3 + M4 ;
    Average = Total / 4.0;
    printf("Total Marks = %.2f\n " , Total);
    printf("Average Marks = %.2f\n" , Average);
    return 0;
}