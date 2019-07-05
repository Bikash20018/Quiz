#include <stdio.h>

void question1();
int main(){
//clrscr();
printf("Welcome To KBC Quiz");
question1();
question2();
return 0;

}
char a,b,c,d,A,B,C,D,ans;
void question2();
void question1(){
//clrscr();
printf("What is your name?");
printf("A.Bikash Chhetri\n");
printf("B.Bikash Chhetri\n");
printf("C.Bikash Chhetri\n");
printf("D.Bikash Chhetri\n");
scanf("%c",&ans);
switch(ans)
{
case 'A':
case 'a':
case 'C':
case 'c':
case 'D':
case 'd':

printf("\n Wrong Answer !!");
break;

case 'B':
case 'b':
printf("\n\n Correct Answer\n\n");
break;
default:
printf("Imporper choise!!\n");
}
if(ans=='B' || ans =='b'){

question2();
//clrscr();

}

}
void question2(){
printf("Your name is Really Correct?\n\n");
printf("A.Yes\n");
printf("B.No\n");
printf("C.Ofcourse\n");
printf("D.Not at All\n");
scanf("%c",&ans);

switch(ans){
case 'a':
case 'A':
case 'b':
case 'B':
case 'c':
case 'C':
printf("Wrong Answer !!");
break;
case 'D':
case 'd':
printf("Correct Answer !!");
break;
defult:
printf("Imporper Answer !!");

}
if(ans=='d' || ans =='D')
{

}

}





