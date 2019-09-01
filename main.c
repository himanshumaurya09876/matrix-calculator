#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void add(void);
void sub(void);
void multiplier(void);

void main()
{
   int n;
   system("cls");
   system("color f0");
   printf("\nWelcome to matrix type calculator\n");
   printf("MENU\n1.ADD\n2.SUB\n3.MULTIPLY\n4.EXIT\n");
   scanf("%d",&n);
   switch(n)
   {
       case 1:add();
              break;
       case 2:sub();
              break;
       case 3:multiplier();
              break;
       case 4:exit(1);
              break;
       default:printf("\nInvalid input\n");
               getch();
               main();
   }
}

void add()
{
    unsigned int r1,c1,r2,c2;
    int i,j,k;
    system("cls");
    system("color f0");
    printf("Welcome to matrix multiplier\n");
    printf("Note- Number of rows and columns in matrix A should be equal to B for add\n");
    printf("Enter the size of matrix A\n");
    scanf("%d %d",&r1,&c1);
    printf("Enter the size of matrix B\n");
    scanf("%d %d",&r2,&c2);
    int A [r1] [c1], B [r2] [c2], C [r1] [c2];
    if(r1==r2 && c1==c2)
    {
       printf("Enter the elements of matrix A\n");
       for(i=0;i<r1;i++)
       {
           for(j=0;j<c1;j++)
           {
               scanf("%d",&A[i][j]);
           }
           printf("\n");
       }
       printf("Enter the elements of matrix B\n");
       for(i=0;i<r2;i++)
       {
           for(j=0;j<c2;j++)
           {

               scanf("%d",&B[i][j]);
           }
           printf("\n");
       }
       printf("\nMatrix C =A+B is\n");
       for(k=0;k<r1;k++)
       {
           for(j=0;j<c2;j++)
           {
               C[k][j]=A[k][j]+B[j][k];
               printf("%d",C[k][j]);
               printf(" ");
           }
           printf("\n");
       }
       printf("\nIf you want to continue press-y ");
       if(getche()=='y')
          main();
       else
          exit(1);
    }
    else
    {
        printf("\nNumber of rows and columns in matrix A are not equal to B\n");
        getch();
        main();
    }
}

void sub()
{
    unsigned int r1,c1,r2,c2;
    int i,j,k;
    system("cls");
    system("color f0");
    printf("Welcome to matrix multiplier\n");
    printf("Note- Number of rows and columns in matrix A should be equal to B for sub\n");
    printf("Enter the size of matrix A\n");
    scanf("%d %d",&r1,&c1);
    printf("Enter the size of matrix B\n");
    scanf("%d %d",&r2,&c2);
    int A [r1] [c1], B [r2] [c2], C [r1] [c2];
    if(r1==r2 && c1==c2)
    {
       printf("Enter the elements of matrix A\n");
       for(i=0;i<r1;i++)
       {
           for(j=0;j<c1;j++)
           {
               scanf("%d",&A[i][j]);
           }
           printf("\n");
       }
       printf("Enter the elements of matrix B\n");
       for(i=0;i<r2;i++)
       {
           for(j=0;j<c2;j++)
           {

               scanf("%d",&B[i][j]);
           }
           printf("\n");
       }
       printf("\nMatrix C =A-B is\n");
       for(k=0;k<r1;k++)
       {
           for(j=0;j<c2;j++)
           {
               C[k][j]=A[k][j]-B[j][k];
               printf("%d",C[k][j]);
               printf(" ");
           }
           printf("\n");
       }
       printf("\nIf you want to continue press-y ");
       if(getche()=='y')
          main();
       else
          exit(1);
    }
    else
    {
        printf("\nNumber of rows and columns in matrix A are not equal to B\n");
        getch();
        main();
    }
}

void multiplier()
{
    unsigned int r1,c1,r2,c2;
    int i,j,k;
    system("cls");
    system("color f0");
    printf("Welcome to matrix multiplier\n");
    printf("Note- Number of columns in matrix A should be equal to number of rows in matrix B\n");
    printf("Enter the size of matrix A\n");
    scanf("%d %d",&r1,&c1);
    printf("Enter the size of matrix B\n");
    scanf("%d %d",&r2,&c2);
    int A [r1] [c1], B [r2] [c2], C [r1] [c2];
    if(c1==r2)
    {
       printf("Enter the elements of matrix A\n");
       for(i=0;i<r1;i++)
       {
           for(j=0;j<c1;j++)
           {
               scanf("%d",&A[i][j]);
           }
           printf("\n");
       }
       printf("Enter the elements of matrix B\n");
       for(i=0;i<r2;i++)
       {
           for(j=0;j<c2;j++)
           {

               scanf("%d",&B[i][j]);
           }
           printf("\n");
       }
       printf("\nMatrix C =AXB is\n");
       for(k=0;k<r1;k++)
       {
           for(j=0;j<c2;j++)
           {
               C[k][j]=0;
               for(i=0;i<c1;i++)
                   C[k][j]=C[k][j]+A[k][i]*B[i][j];
               printf("%d",C[k][j]);
               printf(" ");
           }
           printf("\n");
       }
       printf("\nIf you want to continue press-y ");
       if(getche()=='y')
          main();
       else
          exit(1);
    }
    else
    {
        printf("\nNumber of columns in matrix A are not equal to number of rows in matrix B\n");
        getch();
        main();
    }
}
