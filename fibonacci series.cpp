/*fibonacci series
	term=0,1,2,3,4,5,6,7
  series=0,1,1,2,3,5,8,13
*/
#include<stdio.h>
int main()
{
	int i=2,pre=0,s,j,next=1,n;
	printf("Enter the number=");
	scanf("%d",&n);
	printf("\nThe terms are--\n");
	for(j=0;j<=n;j++)
	{
		printf("%5d",j);
	}
	printf("\nThe series is--\n");
	printf("%5d%5d",pre,next);
	while(i<=n)
	{
		s=pre+next;
		pre=next;
		next=s;
		printf("%5d",s);
		i++;
	}
	return 0;
}
