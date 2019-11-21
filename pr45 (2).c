#include "stdio.h"
#include "string.h"
struct sport
{
int c_id,age;
char c_name[30],spc[2],ps[2],sit[2],cs[2];
float cn,sc;
int d,m,y;
}ob;
int main ()
{
float t;
float t1;
float d;
float d1;
printf("\n--------------------------------Enter Details-------------------------------------");
printf("\nEnter Customer ID:");
scanf("%d",&ob.c_id);
printf("\nEnter Customer Name:");
scanf(" %[^\n]%*c",ob.c_name);
printf("\nEnter Pass status(v-valid/i-invalid):");
scanf(" %[^\n]%*c",ob.ps);
printf("\nEnter Service Charge:");
scanf("%f",&ob.sc);
printf("\nEnter Sports Category(b-Badminton/f-Football/t-Table Tennis):");
scanf(" %[^\n]%*c",ob.spc);
printf("\nEnter Pass Expiry date:");
scanf("%d",&ob.d);
printf("\nEnter Pass Expiry month:");
scanf("%d",&ob.m);
printf("\nEnter Pass Expiry year:");
scanf("%d",&ob.y);
printf("\nEnter Sports Item type(s-shuttle cook/r-racket/t-tennis ball):");
scanf(" %[^\n]%*c",&ob.sit);
printf("\nEnter Age:");
scanf("%d",&ob.age);
printf("\nEnter Customer status(n-new/e-existing):");
scanf(" %[^\n]%*c",ob.cs);
printf("\nEnter Total Amount");
scanf("%f",&t);
printf("\n__________________________________________________________________________________");
printf("\n-----------------------------------BILL--------------------------------------------");
printf("\nCustomer ID:%d",ob.c_id);
printf("\nCustomer Name:%s",ob.c_name);
printf("\nPass status:");
if(strcmp(ob.ps,"v")==0)
{
printf("valid.");
}
else if(strcmp(ob.ps,"i")==0)
{
printf("Invalid.");
}
printf("\nService Charge:%f",ob.sc);
printf("\nSports Category:");
if(strcmp(ob.spc,"b")==0)
{
printf("Badminton.");
}
else if(strcmp(ob.spc,"f")==0)
{
printf("Football.");
}
else if(strcmp(ob.spc,"t")==0)
{
printf("Table Tennis.");
}
printf("\nPass Expiry Date:%d/%d/%d",ob.d,ob.m,ob.y);
printf("\nSports Item Type:");
if(strcmp(ob.sit,"s")==0)
{
printf("Shuttle cock.");
}
else if(strcmp(ob.sit,"r")==0)
{
printf("Racket.");
}
else if(strcmp(ob.sit,"t")==0)
{
printf("Tennis ball.");
}
printf("\nAge:%d",ob.age);
printf("\nCustomer Status:");
if(strcmp(ob.cs,"n")==0)
{
printf("New.");
}
else if(strcmp(ob.cs,"e")==0)
{
printf("Existing.");
}
printf("\nTotal without discount and service charge:%f",t);
printf("\n_____________________________________________________________________________________");
if(strcmp(ob.cs,"n")==0)
{
ob.sc=ob.sc+500;
}
if(ob.age<=12)
{
ob.sc=0;
}
if(ob.age<=14 && ob.age>=12)
{
ob.sc=200;
}
if(ob.age<=18 && ob.age>=14)
{
ob.sc=500;
}
if(t>=1500)
{
d=t*0.05;
}
if(strcmp(ob.spc,"b")==0)
{
d1=t*0.05;
}
t1=t+ob.sc-d-d1;
printf("\nTotal:");
printf("%f",t1);
}

