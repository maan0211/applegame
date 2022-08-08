#include <stdio.h>
#include<string.h>
#include<stdlib.h>
void main(){
	printf("********WELCOME TO THE APPLE GAME********\n");
	printf("**************************************************\n");
    printf("**************************************************\n");

	
int a,rest,apple=21,count=0;
char u[10],p[10],user[]="MPEC@1234",pas[]="MPEC@1234",ch;
int n=0,i;
printf("   Eenter Username And Password (Only 3 Attempts)\n");
while(n<=2)
{
printf("   Enter User Name=");
gets(u);
printf("   Enter the Password =");
for(i=0;i<9;i++)
{
ch = getch();
p[i] = ch;
ch = '*' ;
printf("%c",ch);
}
if(strcmp(user,u)==0 && strcmp(pas,p)==0)
{
printf("\n   Congratulations!\n");
printf("**************************************************\n");
printf("**************************************************\n");
	printf("******** | Some Instruction You Read Carefully |*******\n");
	printf("******** | You Choose 0nly Range 1 To 4 |**************\n");
	printf("******** | Total Apple Is 21 |*******************\n");
	printf("******** | You Enter The Three Times Wrong Value |******\n");
	printf("******** | Who Is Enter The Last Apple , Called A Losser   |******\n");

printf("   Enjoy This Game \n");

while(apple!=0){
	printf("   You Can Enter Only Range 1 To 4:\n");
printf("   User Turn>>>>>>\n   User Entered =");
scanf("%d",&a);

if(a>=1 && a<=4){
	
    printf("   Computer Turn>>>>>>\n   Computer Entered =%d\n",5-a);
   apple = apple -5;
   if(apple<5){
    printf("   You Lose This Game But Don't Worry Try Again\n");
    printf("**************************************************\n");
    goto end;
}

printf("   Remaining Apple = %d\n",apple);
    printf("**************************************************\n");
    printf("**************************************************\n");
}
else{
	printf("   Wrong Entry\n");
	printf("   Please Follow The Instruction:\n");
	count++;
	printf("   Your Remaining Chance=");
	printf("   %d\n",3-count);
	printf("***************************************************\n");
	printf("**************************************************\n");
	if(count==3){
		printf("   Sorry I Think You Are Not Aware To The Games Rule \n");
		printf("   Please Read The Instruction Carefully And Try Again: \n");
		break;
	}
}
   
}
break;
}
else
{
n++;
printf("\n   The Username 0r Password Is Incorrect. Only %d Chance Left.\n", 3-n);
printf("**************************************************\n");
}
}
if(n==3)
{
printf("\n   You Have Used Maximum Attempts(3).\n   Please Try Later.\n");
}

end:
 printf("   Thank You For Chossing This Game\n");
getch();
}