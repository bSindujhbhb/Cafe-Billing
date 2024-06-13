#include<stdio.h>
#include<conio.h>
int tbill(int);
void arad(int,int);
void wel(void);
struct cus{
    char name[20];
    int ap,tb;
    char mbo[20];
}c[100];

int main()
{
    int n,i,k=0;
    char mbo1[20];
  while(1>0){
       printf("________________________________________\n                                        |\nEnter 1 for customer order,billing:     |\n                                        |\nEnter 2 for record of billing system:   |\n                                        |\nEnter 3 to search any customers details:|\n                                        |\n________________________________________|\n");
        printf("Enter your choice:\n");
        scanf("%d",&n);
        system("cls");
      if(n==1){
          char cha='a';
            int noo1;
             wel();
          printf("How many orders you wanna make:\n");
              scanf("%d",&noo1);
          for(i=k ; cha!='e' ; i=i+0){
              printf("Enter your name:\n");
              scanf("%s",c[i].name);
              printf("Enter your mobile number:\n");
              scanf("%s",mbo1);
                 int x;
           x=strlen(mbo1);
           for(;x!=10;){
            printf("Enter again:");
           scanf("%s",mbo1);
           x=strlen(mbo1);
    }
              strcpy(c[i].mbo,mbo1);
          c[i].tb=tbill(noo1);
          printf("Your bill is %d\n",c[i].tb);
              printf("Enter the amount:\n");
              scanf("%d",&c[i].ap);
              arad(c[i].ap,c[i].tb);
             printf("Thankyou for visiting us!! See you again\n");
              k=i+1;
              cha='e';
  system("cls");
          }
      }
      else if(n==2){
          for(i=0;i<k;i++){
               if(c[i].ap>c[i].tb){
              printf("Name:%s\nMobile Number:%s\nTotal Bill:%d\nAmount Paid:%d\nAmount Returned:%d\n\n",c[i].name,c[i].mbo,c[i].tb,c[i].ap,c[i].ap-c[i].tb);
               }
               else if(c[i].ap<c[i].tb){
              printf("Name:%s\nMobile Number:%s\nTotal Bill:%d\nAmount Paid:%d\nAmount Due:%d\n\n",c[i].name,c[i].mbo,c[i].tb,c[i].ap,c[i].tb-c[i].ap);
               }
              else if(c[i].ap==c[i].tb){
                  printf("Name:%s\nMobile Number:%s\nTotal Bill:%d\nAmount Paid:%d\n\n",c[i].name,c[i].mbo,c[i].tb,c[i].ap);
              }
          }
      }
      else if(n==3){
           int i;
     char search[20];
     char s;
     printf("You want to search details with name(n) or mobile no(m):");
     scanf(" %c",&s);
     if(s=='n'){
            printf("Enter name:");
         scanf("%s",search);
     for(i=0;i<k;i++){
         if(strcmpi(c[i].name,search)==0){
             if(c[i].ap>c[i].tb)
              printf("Name:%s\nMobile Number:%s\nTotal Bill:%d\nAmount Paid:%d\nAmount Returned:%d\n\n",c[i].name,c[i].mbo,c[i].tb,c[i].ap,c[i].ap-c[i].tb);
               else if(c[i].ap<c[i].tb)
              printf("Name:%s\nMobile Number:%s\nTotal Bill:%d\nAmount Paid:%d\nAmount Due:%d\n\n",c[i].name,c[i].mbo,c[i].tb,c[i].ap,c[i].tb-c[i].ap);
                else if(c[i].ap==c[i].tb)
                  printf("Name:%s\nMobile Number:%s\nTotal Bill:%d\nAmount Paid:%d\n\n",c[i].name,c[i].mbo,c[i].tb,c[i].ap);
                else
                  printf("There is no customer with such details");
         }
 }
     }else if(s=='m'){
         printf("Enter mobile no to search his/her details:");
         scanf("%s",search);
         for(i=0;i<k;i++){
         if(strcmp(c[i].mbo,search)==0){
             if(c[i].ap>c[i].tb)
            printf("Name:%s\nMobile Number:%s\nTotal Bill:%d\nAmount Paid:%d\nAmount Returned:%d\n\n",c[i].name,c[i].mbo,c[i].tb,c[i].ap,c[i].ap-c[i].tb);
               else if(c[i].ap<c[i].tb)
              printf("Name:%s\nMobile Number:%s\nTotal Bill:%d\nAmount Paid:%d\nAmount Due:%d\n\n",c[i].name,c[i].mbo,c[i].tb,c[i].ap,c[i].tb-c[i].ap);
               else if(c[i].ap==c[i].tb)
                  printf("Name:%s\nMobile Number:%s\nTotal Bill:%d\nAmount Paid:%d\n\n",c[i].name,c[i].mbo,c[i].tb,c[i].ap);
               else
                  printf("There is no customer with such details");
         }
     }
 }
      }else{
          printf("You have entered wrong option. Please choose again\n");
      }
  }
  return 0;
}
int tbill(int noo)
{
    int t=0;
    int j;
    char ch;
     for(j=0;j<noo;j++){
                printf("Enter your order %d:",j+1);
                scanf(" %c",&ch);
                if(ch=='E')
                    t=t+80;
                else if(ch=='C')
                    t=t+91;
                else if(ch=='H')
                    t=t+110;
                else if(ch=='I')
                    t=t+110;
                else if(ch=='L')
                    t=t+95;
                else if(ch=='A')
                    t=t+120;
                else if(ch=='V')
                    t=t+120;
            }
    return(t);
}
void arad(int amp,int tob){
    int ar,ad;
    if(amp>tob){
                  ar=amp-tob;
                  printf("Here is your change:%d\n",ar);
              }
              else if(amp<tob){
                  ad=tob-amp;
                  printf("Amount due:%d\n",ad);
              }
}
void wel(void){
     printf("Hi customer,this is the menu of the cafe\n");
    printf("____________________________________________________\n|        ITEM         |         PRICE      | SYMBOL |\n");
    printf("|---------------------|--------------------|--------|\n|      ESPRESSO       |        Rs.80       |   E    |\n");
    printf("|---------------------|--------------------|--------|\n|      CAPPUCINO      |        Rs.91       |   C    |\n");
    printf("|---------------------|--------------------|--------|\n| HAZELNUT CAPPUCINO  |        Rs.110      |   H    |\n");
    printf("|---------------------|--------------------|--------|\n|   IRISH CAPPUCINO   |        Rs.110      |   I    |\n");
    printf("|---------------------|--------------------|--------|\n|     CAFE LATTE      |        Rs.95       |   L    |\n");
    printf("|---------------------|--------------------|--------|\n|     AMERICANO       |        Rs.120      |   A    |\n");
    printf("|---------------------|--------------------|--------|\n|    VANILLA LATTE    |        Rs.120      |   V    |\n");
    printf("|_____________________|____________________|________|\n");
}
