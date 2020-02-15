#include <stdio.h>
int main() 
{
	int a[8],i,maxtillnow=0, maxsofar=0;
	printf("enter value");
	for(i=0;i<8;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<8;i++)
	{
	    maxtillnow+=a[i];
		if(maxtillnow>maxsofar)
	    {
	        maxsofar=maxtillnow;	    
		}
		if(maxtillnow<0)
		maxtillnow=0;
	}
	printf("%d",maxsofar);
}
