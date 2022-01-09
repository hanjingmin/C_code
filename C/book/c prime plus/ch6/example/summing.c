 /* 程序清单 6.1：summing.c  --  根据用户键入的整数求和 */
 #include <stdio.h>
 int main(void)
 {
     long num;
     long sum = 0;     /* 把sum初始化为0  */
     int status;

     printf("Please enter an integer to be summed ");
     printf("(q to quit): ");
     status = scanf("%ld",&num);
     while (status == 1)    /*==的意思为等于    */
     {
         sum = sum + num ;
         printf("Please enter next integer (q to quit): ");
         status = scanf("%ld",&num);
     }
     printf("\nThose integers sum to %ld.\n",sum);

     return 0;
     
 }