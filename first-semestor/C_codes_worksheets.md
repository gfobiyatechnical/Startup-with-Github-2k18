******    WORKSHEET_6 *****

Que.2:     Write a program in C (using a function) to accept a number and print its cube.

Solution:
   
   
    #include <stdio.h>
   
    int fun(int x);
   
    int main()
        {   
              int x ,n ;
             printf("Enter a Number: \n");
             fun(x);
        return 0;
        }
    int fun(int x)
       {
            int n;
             scanf("%d", &n);
             x = n*n*n;
             printf("cube = %d",x);
       }







Que_3:  Write a program in C to convert a given number of days into years, weeks and days.

Solution:

        
        #include <stdio.h>
         int main()
         {
             int days,months = 0,years=0;
             printf("Enter no. of Days: \n");
             scanf("%d", &days);

             int x = days%365;
             months = x/30;
             days = x%30;
             years = days/365;

             printf(" YEARS = %d\n MONTHS = %d\n DAYS = %d\n", years,months,days);

            return 0;
         }
