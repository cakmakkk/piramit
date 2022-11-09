#include <stdio.h>  
#include <conio.h>  
void main()  
{    
  int a,b,satir,bosluk=0;  
  printf("Satır:\n");  
  scanf("%d",&satir);   
  for(a =1;a<=satir;a++)  
  {  
for(bosluk=1;bosluk<=satir-a;bosluk++)  
{   
   printf("  ");   
}   
for(b=1;b<=(2*a-1);b++)  
{   
   printf("* ");  
}   
   printf("\n");  
}  
 getch();  
} 