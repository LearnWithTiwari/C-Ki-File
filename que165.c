/*  WAP to follow series..... 
1        1
12      21
123    321
1234  4321
1234554321
*/
#include <stdio.h>
#include <conio.h>

int main()
{
    int i,j,k,l;
    for ( i = 1; i <=5 ; i++)
    {
        for( j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        for( k=1;k<=(10-2*i);k++)
        {
            printf(" ");
        }
        for(l=1;l<=i;l++)
        {
            printf("%d",l);
        }
        printf("\n");
    }   
}