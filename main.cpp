#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "functions.h"
using namespace std;





int main()
{
char A[9][9],k[5];
int i,j,z1=0,z2=0, z3=0,z4=0, flag1=0;
A[1][1]='R';
A[1][2]='H';
A[1][3]='E';
A[1][4]='Q';
A[1][5]='K';
A[1][6]='E';
A[1][7]='H';
A[1][8]='R';

A[2][1]='P';
A[2][2]='P';
A[2][3]='P';
A[2][4]='P';
A[2][5]='P';
A[2][6]='P';
A[2][7]='P';
A[2][8]='P';

for (i=3;i<=6;i++)
{
	for(j=0;j<=9;j++)
	{
		A[i][j]=32; 
	}
}


A[8][1]='r';
A[8][2]='h';
A[8][3]='e';
A[8][4]='q';
A[8][5]='k';
A[8][6]='e';
A[8][7]='h';
A[8][8]='r';

A[7][1]='p';
A[7][2]='p';
A[7][3]='p';
A[7][4]='p';
A[7][5]='p';
A[7][6]='p';
A[7][7]='p';
A[7][8]='p';


cout<<"1 | "<<A[1][1]<<" | "<<A[1][2]<<" | "<<A[1][3]<<" | "<<A[1][4]<<" | "<<A[1][5]<<" | "<<A[1][6]<<" | "<<A[1][7]<<" | "<<A[1][8]<<" |"<<endl;
cout<<"  |-------------------------------|"<<endl;
cout<<"2 | "<<A[2][1]<<" | "<<A[2][2]<<" | "<<A[2][3]<<" | "<<A[2][4]<<" | "<<A[2][5]<<" | "<<A[2][6]<<" | "<<A[2][7]<<" | "<<A[2][8]<<" |"<<endl;
cout<<"  |-------------------------------|"<<endl;
cout<<"3 | "<<A[3][1]<<" | "<<A[3][2]<<" | "<<A[3][3]<<" | "<<A[3][4]<<" | "<<A[3][5]<<" | "<<A[3][6]<<" | "<<A[3][7]<<" | "<<A[3][8]<<" |"<<endl;
cout<<"  |-------------------------------|"<<endl;
cout<<"4 | "<<A[4][1]<<" | "<<A[4][2]<<" | "<<A[4][3]<<" | "<<A[4][4]<<" | "<<A[4][5]<<" | "<<A[4][6]<<" | "<<A[4][7]<<" | "<<A[4][8]<<" |"<<endl;
cout<<"  |-------------------------------|"<<endl;
cout<<"5 | "<<A[5][1]<<" | "<<A[5][2]<<" | "<<A[5][3]<<" | "<<A[5][4]<<" | "<<A[5][5]<<" | "<<A[5][6]<<" | "<<A[5][7]<<" | "<<A[5][8]<<" |"<<endl;
cout<<"  |-------------------------------|"<<endl;
cout<<"6 | "<<A[6][1]<<" | "<<A[6][2]<<" | "<<A[6][3]<<" | "<<A[6][4]<<" | "<<A[6][5]<<" | "<<A[6][6]<<" | "<<A[6][7]<<" | "<<A[6][8]<<" |"<<endl;
cout<<"  |-------------------------------|"<<endl;
cout<<"7 | "<<A[7][1]<<" | "<<A[7][2]<<" | "<<A[7][3]<<" | "<<A[7][4]<<" | "<<A[7][5]<<" | "<<A[7][6]<<" | "<<A[7][7]<<" | "<<A[7][8]<<" |"<<endl;
cout<<"  |-------------------------------|"<<endl;
cout<<"8 | "<<A[8][1]<<" | "<<A[8][2]<<" | "<<A[8][3]<<" | "<<A[8][4]<<" | "<<A[8][5]<<" | "<<A[8][6]<<" | "<<A[8][7]<<" | "<<A[8][8]<<" |"<<endl;
cout<<"  |-------------------------------|"<<endl;
cout<<"    a | b | c | d | e | f | g | h  "<<endl;

while (1)
{

if (flag1==0) cout<<"Ход маленьких букв"<<endl;
else if (flag1==1) cout<<"Ход больших букв"<<endl;
for(i=0;i<=5;i++) 
{
k[i]=getchar();

}
if (flag1==0)
{
p_forward(k,A,z1,flag1);
p_hack(k,A,z2,flag1);
if ((z1==1)&&(z2==1)) {system("clear");cout<<"ХОД НЕ ВОЗМОЖЕН ИЛИ НЕ ВЕРЕНЮ ПОПРОБУЙТЕ ЕЩЕ РАЗ"<<endl; puts("\n");z1=0; z2=0;}
else {z1=0; z2=0;}
}

else if (flag1==1)
{
P_forward(k,A,z3,flag1);
P_hack(k,A,z4,flag1);
if ((z3==1)&&(z4==1)) { system("clear");cout<<"ХОД НЕ ВОЗМОЖЕН ИЛИ НЕ ВЕРЕНЮ ПОПРОБУЙТЕ ЕЩЕ РАЗ"<<endl; puts("\n");z3=0; z4=0;}
else {z3=0; z4=0;}
}


cout<<"1 | "<<A[1][1]<<" | "<<A[1][2]<<" | "<<A[1][3]<<" | "<<A[1][4]<<" | "<<A[1][5]<<" | "<<A[1][6]<<" | "<<A[1][7]<<" | "<<A[1][8]<<" |"<<endl;
cout<<"  |-------------------------------|"<<endl;
cout<<"2 | "<<A[2][1]<<" | "<<A[2][2]<<" | "<<A[2][3]<<" | "<<A[2][4]<<" | "<<A[2][5]<<" | "<<A[2][6]<<" | "<<A[2][7]<<" | "<<A[2][8]<<" |"<<endl;
cout<<"  |-------------------------------|"<<endl;
cout<<"3 | "<<A[3][1]<<" | "<<A[3][2]<<" | "<<A[3][3]<<" | "<<A[3][4]<<" | "<<A[3][5]<<" | "<<A[3][6]<<" | "<<A[3][7]<<" | "<<A[3][8]<<" |"<<endl;
cout<<"  |-------------------------------|"<<endl;
cout<<"4 | "<<A[4][1]<<" | "<<A[4][2]<<" | "<<A[4][3]<<" | "<<A[4][4]<<" | "<<A[4][5]<<" | "<<A[4][6]<<" | "<<A[4][7]<<" | "<<A[4][8]<<" |"<<endl;
cout<<"  |-------------------------------|"<<endl;
cout<<"5 | "<<A[5][1]<<" | "<<A[5][2]<<" | "<<A[5][3]<<" | "<<A[5][4]<<" | "<<A[5][5]<<" | "<<A[5][6]<<" | "<<A[5][7]<<" | "<<A[5][8]<<" |"<<endl;
cout<<"  |-------------------------------|"<<endl;
cout<<"6 | "<<A[6][1]<<" | "<<A[6][2]<<" | "<<A[6][3]<<" | "<<A[6][4]<<" | "<<A[6][5]<<" | "<<A[6][6]<<" | "<<A[6][7]<<" | "<<A[6][8]<<" |"<<endl;
cout<<"  |-------------------------------|"<<endl;
cout<<"7 | "<<A[7][1]<<" | "<<A[7][2]<<" | "<<A[7][3]<<" | "<<A[7][4]<<" | "<<A[7][5]<<" | "<<A[7][6]<<" | "<<A[7][7]<<" | "<<A[7][8]<<" |"<<endl;
cout<<"  |-------------------------------|"<<endl;
cout<<"8 | "<<A[8][1]<<" | "<<A[8][2]<<" | "<<A[8][3]<<" | "<<A[8][4]<<" | "<<A[8][5]<<" | "<<A[8][6]<<" | "<<A[8][7]<<" | "<<A[8][8]<<" |"<<endl;
cout<<"  |-------------------------------|"<<endl;
cout<<"    a | b | c | d | e | f | g | h  "<<endl;



}

return 0;
}
