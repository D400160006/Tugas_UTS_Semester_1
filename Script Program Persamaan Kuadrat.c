#include<stdio.h>
main()
{
    int a,b,c,D;
    int  x1,x2;
    printf ("\t\t\t\t\tProgram Persamaan Kuadrat\n\n\n ");
    printf("\n Masukkan nilai A=  ");
    scanf("%f",&a);
    printf("\n Masukkan nilai B=  ");
    scanf("%f",&b);
    printf("\n Masukkan nilai C=  ");
    scanf("%f",&c);
 D =pow(b,2)-(4*a*c);
     if  ( a==0 )
   {
        printf( " X1 dan X2 Bukan persamaan Kuadrad \n ");
   }
    else if(D<0)
    {
        printf("\n X1 dan X2 Bilangan imajiner\n");
    }

    else if (D==0)
    {
        x1=(-b)/(2*a);
        x2=(-b)/(2*a);

        printf("\n Akar-akar persamaan kuadrat kembar ");
        printf("\nNilai x1=%d\n", x1);
        printf("Nilai x2=%d\n", x2);

    }

    else if (D>0)
    {
        x1=(-b+(sqrt(D))/(2*a));
        x2=(-b-(sqrt(D))/(2*a));

        printf("\n Mempunyai dua akar yang bernilai  yaitu X1 dan X2 \n");
        printf("\n Nilai x1=%d \n",x1);
        printf("\n Nilai x2=%d\n",x2);    }
return 0;
}
