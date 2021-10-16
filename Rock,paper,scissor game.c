#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    char name[32];
    int c,comp=0,user=0,i;
    srand(time(NULL));
    printf("This is a rock,paper,scissor game and You have only 3 attempts.\n");
    scanf("%s\n",&name);
    printf("Enter ur name : %s\n",name);
    for(int j=0;j<3;j++){
    i=rand()%3;
    scanf("%d\n",&c);
    printf("Enter 0 for rock , 1 for paper and 2 for scissor : %d\n",c);
    switch(c){
      case 0 : //scanf("%d\n",&i);
               printf("This is computer's choice : %d\n",i);
               if(i==0){
                 printf("It's a tie.\n\n");
                 comp++;
                 user++;
               }
               else if(i==1){
                 printf("Computer gets a point\n\n");
                 comp++;
               }
               else if(i==2){
                 printf("%s gets a point\n\n",name);
                 user++;
               }
               else{
                 printf("invalid choice\n\n");
               }
               break;
      case 1 : //scanf("%d\n",&i);
               printf("This is computer's choice : %d\n",i);
               if(i==1){
                 printf("It's a tie.\n\n");
                 comp++;
                 user++;
               }
               else if(i==2){
                 printf("Computer gets a point\n\n");
                 comp++;
               }
               else if(i==0){
                 printf("%s gets a point\n\n",name);
                 user++;
               }
               else{
                 printf("invalid choice");
               }
               break;
      case 2 : //scanf("%d\n",&i);
               printf("This is computer's choice : %d\n",i);
               if(i==2){
                 printf("It's a tie.\n\n");
                 comp++;
                 user++;
               }
               else if(i==0){
                 printf("Computer gets a point\n\n");
                 comp++;
               }
               else if(i==1){
                 printf("%s gets a point\n\n",name);
                 user++;
               }
               else{
                 printf("invalid choice\n\n");
               }
               break;
    }
      
    }
    if(comp>user){
      printf("computer wins with %d points \n and %s loses with %d points",comp,name,user);
      
    }
    else if(comp<user){
      printf("computer loses with %d points \n and %s wins with %d points",comp,name,user);
      
    }
    else{
      printf("computer has %d points \n and %s has %d points.So it's a tie",comp,name,user);
      
    }
}