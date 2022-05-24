#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <ctype.h>
int main(){
char a;
char b[80];
char c;
char d[80];
char e[80];
char f[80];
char g[80];
char h[80];
char i[80];
char j[80];
char k[80];
printf("t=txt h=header\n");
a=getch();
printf("Selected format: %c\n",a);
if(a=='t'){
printf("Do you want to write a file, edit it or remove it?\n");
c=getch();
switch(c){
case('w'):
//functions for texts
while(c){
printf("Enter letters\n");
scanf("%s",&b);
printf("Enter letters\n");
scanf("%s",&d);
printf("Enter letters\n");
scanf("%s",&e);
printf("Enter letters\n");
scanf("%s",&f);
printf("Enter letters\n");
scanf("%s",&g);
printf("Enter letters\n");
scanf("%s",&h);
FILE *pF=fopen("1.txt","w");
fprintf(pF,"%s\t",b);
fprintf(pF,"%s\t",d);
fprintf(pF,"%s\t",e);
fprintf(pF,"%s\t",f);
fprintf(pF,"%s\t",g);
fprintf(pF,"%s\t",h);
fclose(pF);
printf("End the program? Enter c or enter \n");
char p=getch();
if(p=='c'){
break;
}
else if(p=='r'){
continue;
}
}
case('r'):
remove("1.txt");
break;
case('e'):
while(c){
printf("Enter letters\n");
scanf("%s",&i);
printf("Enter letters\n");
scanf("%s",&j);
printf("Enter letters\n");
scanf("%s",&k);
FILE *pR=fopen("5.h","a");
fprintf(pR,"%s\n",i);
fprintf(pR,"%s\n",j);
fprintf(pR,"%s\n",k);
printf("End the program? Enter c or enter r to continue\n");
char p=getch();
if(p=='c'){
break;
}
else if(p=='r'){
continue;
}
}
}
}
//functions for headers
if(a=='h'){
printf("Do you want to write a file, edit it or remove it?\n");
c=getch();
switch(c){
case('w'):
while(c){
printf("Enter letters\n");
scanf("%s",&b);
printf("Enter letters\n");
scanf("%s",&d);
printf("Enter letters\n");
scanf("%s",&e);
printf("Enter letters\n");
scanf("%s",&f);
printf("Enter letters\n");
scanf("%s",&g);
printf("Enter letters\n");
scanf("%s",&h);
FILE *pH=fopen("5.h","w");
fprintf(pH,"%s\t",b);
fprintf(pH,"%s\t",d);
fprintf(pH,"%s\t",e);
fprintf(pH,"%s\t",f);
fprintf(pH,"%s\t",g);
fprintf(pH,"%s\t",h);
fclose(pH);
printf("End the program? Enter c or enter r to continue\n");
char p=getch();
if(p=='c'){
break;
}
else if(p=='r'){
continue;
}
}
case('r'):
remove("5.h");
break;
case('e'):
while(c){
printf("Enter letters\n");
scanf("%s",&i);
printf("Enter letters\n");
scanf("%s",&j);
printf("Enter letters\n");
scanf("%s",&k);
FILE *pR=fopen("5.h","a");
fprintf(pR,"%s\n",i);
fprintf(pR,"%s\n",j);
fprintf(pR,"%s\n",k);
printf("End the program? Enter c or enter r to continue\n");
char p=getch();
if(p=='c'){
break;
}
else if(p=='r'){
continue;
}
}
}
}
return 0;
}
