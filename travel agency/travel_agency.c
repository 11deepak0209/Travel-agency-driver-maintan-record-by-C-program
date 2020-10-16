#include <stdio.h>
#include <string.h>
#include <conio.h>
struct drivers
{
   char name[60];
   char dlno[70];
   char route[100];
   int kms;
   
    /* data */
};struct drivers d1,d2,d3;


int main()
{
   
    printf("Enter the details of drivers***\n");
    printf("Enter the details of first driver\n");
    scanf("%s",&d1.name);
    printf("Enter the first driver Dl_no.***\n");
    scanf("%s",&d1.dlno);
    printf("Enter the route of first driver \n");
    scanf("%s",&d1.route);
    printf("Enter the kms of first driver  \n");
    scanf("%d",&d1.kms);
    
   
    
    printf("Enter the details of name driver\n");
    scanf("%s",&d2.name);
    printf("Enter the second driver Dl_no.***\n");
    scanf("%s",&d2.dlno);
    printf("Enter the route of second driver \n");
    scanf("%s",&d2.route);
    printf("Enter the kms of second driver  \n");
    scanf("%d",&d2.kms);
    
    
    printf("Enter the details of 3rd driver name \n");
    scanf("%s",&d3.name);
    printf("Enter the 3rd driver Dl_no.***\n");
    scanf("%s",&d3.dlno);
    printf("Enter the route of 3rd driver \n");
    scanf("%s",&d3.route);
    printf("Enter the kms of 3rd driver  \n");
    scanf("%d",&d3.kms);

   printf("\ngetting information of driver****************\n");
   
   printf("\nInfo of driver1\n");
   printf("\n %s \n",d1.name);
   printf("\n %s \n",d1.dlno);
   printf("\n %s \n",d1.route);
   printf("\n %s \n",d1.kms);
  
  printf("\nInfo of driver2\n");

   printf("\n %s \n",d2.name);
   printf("\n %s \n",d2.dlno);
   printf("\n %s \n",d2.route);
   printf("\n %s \n",d2.kms);

printf("\nInfo of driver3\n");

   printf("\n %s \n",d3.name);
   printf("\n %s \n",d3.dlno);
   printf("\n %s \n",d3.route);
   printf("\n %s \n",d3.kms);


}