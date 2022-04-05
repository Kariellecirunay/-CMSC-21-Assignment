#include <stdio.h>
int main()
{
   int i,monthnum;
   int firstday;
   printf("Enter number of days in a month:\n");
   scanf("%d",&monthnum);
   printf("Enter the starting day of the week (1=Sun, 7=Sat):\n");
   scanf("%d",&firstday);

   if (monthnum == 32 || monthnum == -1 || monthnum == 27 || monthnum == 0) {
      printf ("Invalid"); }

   else {
    for(i=1;i<firstday;i++)
      printf("   ");
    for(i=1;i<=monthnum;i++){
      printf("%3d",i);
      if((firstday+i-1)%7==0)
         printf("\n");}
   }

   return 0;
}
