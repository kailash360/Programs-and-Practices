#include <stdio.h>
int main()
{
    int sum,r2000,r500,r200,r100,r50,r20,r10,r5,r2,r1,total_notes=0;
    printf("Give the total amount:");
    scanf("%d",&sum);
    r2000=sum/2000;         //Calculating no. of notes of 2000
    total_notes+=r2000;
    sum%=2000;

    r500=sum/500;           //Calculating no. of notes of 500
    total_notes+=r500;
    sum%=500;

    r200=sum/200;           //Calculating no. of notes of 200
    total_notes+=r200;
    sum%=200;

    r100=sum/100;           //Calculating no. of notes of 100
    total_notes+=r100;
    sum%=100;

    r50=sum/50;             //Calculating no. of notes of 50
    total_notes+=r50;
    sum%=50;

    r20=sum/20;             //Calculating no. of notes of 20
    total_notes+=r20;
    sum%=20;

    r10=sum/10;             //Calculating no. of notes of 10
    total_notes+=r100;
    sum%=10;

    r5=sum/5;               //Calculating no. of notes of 5
    total_notes+=r5;
    sum%=5;

    r2=sum/2;               //Calculating no. of notes of 2
    total_notes+=r2;
    sum%=2;

    r1=sum;                 //Remaining gives no. of notes of 1
    total_notes+=r1;
    
    printf("\nNo. of notes of 2000 rupees: %d,  Amount of 2000 rupees notes: %d",r2000,r2000*2000);
    printf("\nNo. of notes of 500 rupees : %d,  Amount of 500 rupees notes : %d",r500,r500*500);
    printf("\nNo. of notes of 200 rupees : %d,  Amount of 200 rupees notes : %d",r200,r200*200);
    printf("\nNo. of notes of 100 rupees : %d,  Amount of 100 rupees notes : %d",r100,r100*100);
    printf("\nNo. of notes of 50 rupees  : %d,  Amount of 50 rupees notes  : %d",r50,r50*50);
    printf("\nNo. of notes of 20 rupees  : %d,  Amount of 20 rupees notes  : %d",r20,r20*20);
    printf("\nNo. of notes of 10 rupees  : %d,  Amount of 10 rupees notes  : %d",r10,r10*10);
    printf("\nNo. of notes of 5 rupees   : %d,  Amount of 5 rupees notes   : %d",r5,r5*5);
    printf("\nNo. of notes of 2 rupees   : %d,  Amount of 2 rupees notes   : %d",r2,r2*2);
    printf("\nNo. of notes of 1 rupee    : %d,  Amount of 1 rupee notes    : %d",r1,r1);
    printf("\nTotal number of notes      : %d,  Total amount               : %d",total_notes,sum);

    return 0;
}