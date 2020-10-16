#include <stdio.h>
#include <string.h>
#include <conio.h>
struct drivers  // used sturcture for taking info of driver for travel Agency
{
   char name[60];
   char dlno[70];
   char route[100];
   char location[60];
   int kms;
   
    /* data */
};struct drivers d1,d2,d3;


int main()
{
   
    printf("Enter the details of drivers***\n");
    printf("Enter the details of first driver\n");   //added location info  of driver 
    scanf("%s",&d1.name);
   printf("Enter the location of driver\n");
    scanf("%s",&d1.location);
 
   printf("Enter the first driver Dl_no.***\n");
    scanf("%s",&d1.dlno);
    printf("Enter the route of first driver \n");
    scanf("%s",&d1.route);
    printf("Enter the kms of first driver  \n");
    scanf("%d",&d1.kms);
    
   
    
    printf("Enter the details of name driver\n");
    scanf("%s",&d2.name);
   printf("Enter the location of driver 2\n");
    scanf("%s",&d2.location);

   printf("Enter the second driver Dl_no.***\n");
    scanf("%s",&d2.dlno);
    printf("Enter the route of second driver \n");
    scanf("%s",&d2.route);
    printf("Enter the kms of second driver  \n");
    scanf("%d",&d2.kms);
    
    
    printf("Enter the details of 3rd driver name \n");
    scanf("%s",&d3.name);
   printf("Enter the location of driver 3\n");
    scanf("%s",&d3.location);

    printf("Enter the 3rd driver Dl_no.***\n");
    scanf("%s",&d3.dlno);
    printf("Enter the route of 3rd driver \n");
    scanf("%s",&d3.route);
    printf("Enter the kms of 3rd driver  \n");
    scanf("%d",&d3.kms);

   printf("\ngetting information of driver****************\n");
   
   printf("\nInfo of driver1\n");
   printf("\n Name is %s \n",d1.name);
   printf("\n location  %s \n",d1.location);
   printf("\n DL no.   %s \n",d1.dlno);
   printf("\n Route is %s \n",d1.route);
   printf("\n Distance coverd  %s \n",d1.kms);
  
  printf("\nInfo of driver2\n");

   printf("\n Name is %s \n",d2.name);
   printf("\n location  %s \n",d2.location);
   printf("\n DL no.   %s \n",d2.dlno);
   printf("\n Route is %s \n",d2.route);
   printf("\n Distance coverd  %s \n",d2.kms);

printf("\nInfo of driver3\n");

   printf("\n Name is %s \n",d3.name);
   printf("\n location  %s \n",d3.location);
   printf("\n DL no.   %s \n",d3.dlno);
   printf("\n Route is %s \n",d3.route);
   printf("\n Distance coverd  %s \n",d3.kms);


}
