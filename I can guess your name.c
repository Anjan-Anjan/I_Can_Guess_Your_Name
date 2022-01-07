// Guess your name : made by me: Anjan
#include <stdio.h>
int main()
{
	char a1[]={'A','B','C','D','E','F','G','H','I','\0'},
		b1[]={'J','K','L','M','N','O','P','Q','R','\0'},
		c1[]={'S','T','U','V','W','X','Y','Z',' ','\0'},
		a2[8]={'\0'},b2[8]={'\0'},c2[8]={'\0'},a3[8]={'\0'},another;
	do{	int l=1,x=0,i=0,j=0,n=0;
		printf("How many letter have in your name?");
		scanf("%d",&n);
		char name[n];
		name[n]='\0';							// for set string to empty..
		for(j=0;j<n;j++)
		{
			for(l=1;l<=3;l++)
			{	
				printf("Q%d.In which line #%d letter of your name present?\n1: %s\n2: %s\n3: %s \n\tEnter 1, 2 or 3 : ",l,j+1,a1,b1,c1);
				scanf("%d",&x);
				if(x==1)
				{
					for(i=0;i<=8;i++)
					{
						a2[i]=b1[i],b2[i]=a1[i],c2[i]=c1[i]; 
					}
				}
					
				else if(x==2)
				{
					for(i=0;i<=8;i++)
					{
						a2[i]=a1[i],b2[i]=b1[i],c2[i]=c1[i]; 
					}
				}
				
				else if(x==3)
				{
					for(i=0;i<=8;i++)
					{
						a2[i]=a1[i],b2[i]=c1[i],c2[i]=b1[i]; 
					}
				}
				 //printf("%s",c2);
				 
				a1[0]=a2[0];
				b1[0]=a2[1];
				c1[0]=a2[2];
				a1[1]=a2[3];
				b1[1]=a2[4];
				c1[1]=a2[5];
				a1[2]=a2[6];
				b1[2]=a2[7];
				c1[2]=a2[8];
				
				a1[3]=b2[0];
				b1[3]=b2[1];
				c1[3]=b2[2];
				a1[4]=b2[3];
				b1[4]=b2[4];
				c1[4]=b2[5];
				a1[5]=b2[6];
				b1[5]=b2[7];
				c1[5]=b2[8];
				
				a1[6]=c2[0];
				b1[6]=c2[1];
				c1[6]=c2[2];
				a1[7]=c2[3];
				b1[7]=c2[4];
				c1[7]=c2[5];
				a1[8]=c2[6];
				b1[8]=c2[7];
				c1[8]=c2[8];
			}
			name[j]=b1[4];
		}
		printf("\n\t\tHello %s, Have a Nice Day",name);
	
		printf("\n\nWants to try onec more? (y/n) ");
		fflush(stdin);
		scanf("%c",&another);
  	  }
	  while(another=='y');
	  return 0;
}        
