
#include <stdio.h>
#include <stdlib.h>
#include "functions.h"


int p_forward(char k[5], char A[9][9])
{
int flag1;
int t,i,j;


i=55;
for(j=7;j>1; j--)
{

if ((k[0]=='h')&&(k[1]==i)&&(k[2]='-')&&(k[3]=='h')&&(k[4]==i-1)&&(A[j-1][8]==32)&&(A[j][8]=='p')) {t=A[j][8]; A[j][8]=A[j-1][8]; A[j-1][8]=t; system("clear");flag1=1;}
else if ((k[0]=='g')&&(k[1]==i)&&(k[2]='-')&&(k[3]=='g')&&(k[4]==i-1)&&(A[j-1][7]==32)&&(A[j][7]=='p')) {t=A[j][7]; A[j][7]=A[j-1][7]; A[j-1][7]=t; system("clear");flag1=1;}
else if ((k[0]=='f')&&(k[1]==i)&&(k[2]='-')&&(k[3]=='f')&&(k[4]==i-1)&&(A[j-1][6]==32)&&(A[j][6]=='p')) {t=A[j][6]; A[j][6]=A[j-1][6]; A[j-1][6]=t; system("clear");flag1=1;}
else if ((k[0]=='e')&&(k[1]==i)&&(k[2]='-')&&(k[3]=='e')&&(k[4]==i-1)&&(A[j-1][5]==32)&&(A[j][5]=='p')) {t=A[j][5]; A[j][5]=A[j-1][5]; A[j-1][5]=t; system("clear");flag1=1;}
else if ((k[0]=='d')&&(k[1]==i)&&(k[2]='-')&&(k[3]=='d')&&(k[4]==i-1)&&(A[j-1][4]==32)&&(A[j][4]=='p')) {t=A[j][4]; A[j][4]=A[j-1][4]; A[j-1][4]=t; system("clear");flag1=1;}
else if ((k[0]=='c')&&(k[1]==i)&&(k[2]='-')&&(k[3]=='c')&&(k[4]==i-1)&&(A[j-1][3]==32)&&(A[j][3]=='p')) {t=A[j][3]; A[j][3]=A[j-1][3]; A[j-1][3]=t; system("clear");flag1=1;}
else if ((k[0]=='b')&&(k[1]==i)&&(k[2]='-')&&(k[3]=='b')&&(k[4]==i-1)&&(A[j-1][2]==32)&&(A[j][2]=='p')) {t=A[j][2]; A[j][2]=A[j-1][2]; A[j-1][2]=t; system("clear");flag1=1;}
else if ((k[0]=='a')&&(k[1]==i)&&(k[2]='-')&&(k[3]=='a')&&(k[4]==i-1)&&(A[j-1][1]==32)&&(A[j][1]=='p')) {t=A[j][1]; A[j][1]=A[j-1][1]; A[j-1][1]=t; system("clear");flag1=1;}

i--;
}
//8
if ((k[0]=='h')&&(k[1]=='7')&&(k[2]='-')&&(k[3]=='h')&&(k[4]=='5')&&(A[5][8]==32)&&(A[7][8]=='p')) {t=A[7][8]; A[7][8]=A[5][8]; A[5][8]=t; system("clear");flag1=1;}
//7
else if ((k[0]=='g')&&(k[1]=='7')&&(k[2]='-')&&(k[3]=='g')&&(k[4]=='5')&&(A[5][7]==32)&&(A[7][7]=='p')) {t=A[7][7]; A[7][7]=A[5][7]; A[5][7]=t; system("clear");flag1=1;}
//6
else if ((k[0]=='f')&&(k[1]=='7')&&(k[2]='-')&&(k[3]=='f')&&(k[4]=='5')&&(A[5][6]==32)&&(A[7][6]=='p')) {t=A[7][6]; A[7][6]=A[5][6]; A[5][6]=t; system("clear");flag1=1;}
//5
else if ((k[0]=='e')&&(k[1]=='7')&&(k[2]='-')&&(k[3]=='e')&&(k[4]=='5')&&(A[5][5]==32)&&(A[7][5]=='p')) {t=A[7][5]; A[7][5]=A[5][5]; A[5][5]=t; system("clear");flag1=1;}
//4
else if ((k[0]=='d')&&(k[1]=='7')&&(k[2]='-')&&(k[3]=='d')&&(k[4]=='5')&&(A[5][4]==32)&&(A[7][4]=='p')) {t=A[7][4]; A[7][4]=A[5][4]; A[5][4]=t; system("clear");flag1=1;}
//3
else if ((k[0]=='c')&&(k[1]=='7')&&(k[2]='-')&&(k[3]=='c')&&(k[4]=='5')&&(A[5][3]==32)&&(A[7][3]=='p')) {t=A[7][3]; A[7][3]=A[5][3]; A[5][3]=t; system("clear");flag1=1;}
//2
else if ((k[0]=='b')&&(k[1]=='7')&&(k[2]='-')&&(k[3]=='b')&&(k[4]=='5')&&(A[5][2]==32)&&(A[7][2]=='p')) {t=A[7][2]; A[7][2]=A[5][2]; A[5][2]=t; system("clear");flag1=1;}
//1
else if ((k[0]=='a')&&(k[1]=='7')&&(k[2]='-')&&(k[3]=='a')&&(k[4]=='5')&&(A[5][1]==32)&&(A[7][1]=='p')) {t=A[7][1]; A[7][1]=A[5][1]; A[5][1]=t; system("clear");flag1=1;}
if (flag1!=1) { return 1;}
else return 0;

}
