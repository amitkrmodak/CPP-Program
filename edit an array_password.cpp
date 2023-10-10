#include<stdio.h>
#include<stdlib.h>
void getdata(int [],int);
void del(int[],int);
void swape(int[],int);
void add(int[],int);
void intchng(int[],int);
void display(int [],int);
void change(int [],int);
void sorting(int [],int);
void search(int [],int);
int reverse(int);
void prime(int[],int);
void smith(int[],int);
int prime_fact(int,int);
int sum(int,int);
void even (int[],int);
void magic(int[],int);
int sum_digit(int);
void password();
int main()
{
	password();
	int *a,n,m,r,i,c=0;
	printf("Enter the number of elements=");
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int));
	getdata(a,n);
	printf("\nThe elements are-----\n");
	display(a,n);
	while(1)
	{
		printf("\nPress 1 to add number");
		printf("\nPress 2 to swape a number");
		printf("\nPress 3 to change the numbers");
		printf("\nPress 4 to interchange two number");
		printf("\nPress 5 to delete number");
		printf("\nPress 6 to sorting order");
		printf("\nPress 7 to search a number");
		printf("\nPress 8 to print reverse of every number");
		printf("\nPress 9  to print palindrom number");
		printf("\nPress 10 to print even and odd numbers in the array");
		printf("\nPress 11 to print prime numbers in the array");
		printf("\nPress 12 to print smith number in the array");
		printf("\nPress 13 to print magic number in the array");
		printf("\nPress 14 to exit from the whole program");
		
		printf("\nEnter your choice=");
		scanf("%d",&m);
		switch(m)
		{
			case 1:
				add(a,n);
				break;	
			case 2:
				swape(a,n);
				break;
			case 3:
				change(a,n);
			case 4:
				intchng(a,n);
				break;
			case 5:
				del(a,n);
				break;
			case 6:
				sorting(a,n);
				break;
			case 7:
				search(a,n);
				break;
			case 8:
				printf("\n\tThe reverse numbers are-------\n");
				for(i=0;i<n;i++)
				{
					r=reverse(a[i]);
					printf("\t%5d",r);
				}
				break;
			case 9:
				printf("\n\tThe palindrom numbers are-------\n");
				for(i=0;i<n;i++)
				{
					r=reverse(a[i]);
					if(r==a[i])
					{
						c++;
						printf("\t%5d",r);
					}
				}
				printf("\n\tThe number of Palindrom numbers=%d",c);
				break;
			case 11:
				prime(a,n);
				break;
			case 10:
				even (a,n);//474
				break;
			case 12:
				smith(a,n);
				break;
			case 13:
				magic(a,n);
				break;
			case 14:
				exit(1);
				break;
			default:
				printf("You nenter wrong number,try again");
				break;
		}
	}
	return 0;
}
void password()
{
	int a=1234,b;
	printf("Enter the password=");
	scanf("%d",&b);
	if(a!=b)
	{
		printf("You enter wrong password");
		exit(1);
	}
	else
		printf("Password entered successfully\n");
}
void getdata(int a[],int n)
{
	int i;
	printf("\nEnter the number of the array---\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
}
void display(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%5d",a[i]);
}
void del(int a[],int n)
{
	int i,k,m,j,f=0;
	printf("\n\tWhat do you want to enter to delete-the number or the position of the number??\n");
	printf("\n\tPress 1 for the number");
	printf("\n\tPress 2 for the position");
	printf("\n\tEnter your choice=");
	scanf("%d",&m);
	switch(m)
	{
		case 1:
			printf("\nEnter the number you want to delete=");
			scanf("%d",&k);
			for(i=0;i<n;i++)
			{
				if(a[i]==k)
				{
					for(j=i;j<n-1;j++)
						a[j]=a[j+1];
					printf("\n\tAfter delete the number the array is----\n");
					f=1;
					display(a,n-1);
					break;
				}
			}
			if(f==0)
				printf("\tThe number is not in the list");
			break;
		case 2:
			printf("\n\tEnter the position of the number you want to delete=");
			scanf("%d",&k);
			k=k-1,f=0;
			for(i=0;i<n;i++)
			{
				if(i==k)
				{
					for(j=i;j<n-1;j++)
						a[j]=a[j+1];
					printf("\n\tAfter delete the number the array is----\n");
					f=1;
					display(a,n-1);
					break;
				}
			}
			if(f==0)
				printf("\n\tThe position is out of the list");
			break;
		default:
			printf("\n\tYou enter wrong number");
			break;
	}
}
void swape(int a[],int n) 
{
	int i,j=n-1,t;
	for(i=0;i<n;i++)
	{
		if(i<j)
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
			j--;
		}	
	}
	printf("\nAfter swap the array is--\n");
	display(a,n);
}
void intchng(int a[],int n)
{
	int i,m,x,y,f1=0,f2=0,t,p1,p2;
	printf("\n\tEnter 2 numbers or position to interchange");
	printf("\n\tPress 1 for number");
	printf("\n\tPress 2 for position");
	printf("\n\tEnter your choice=");
	scanf("%d",&m);
	switch(m)
	{
		case 1:
			printf("\n\tEnter two numbers=");
			scanf("%d%d",&x,&y);
			for(i=0;i<n;i++)
			{
				if(a[i]==x)
				{
					f1=1;
					p1=i;
				}
				else if(a[i]==y)
				{
					f2=1;
					p2=i;
				}	
			}
			if(f1==1&&f2==1)
			{
				t=a[p1];
				a[p1]=a[p2];
				a[p2]=t;
				printf("\n\tAfter interchange two numbers the array is--\n");
				display(a,n);
			}
			else if(f1==1&&f2!=1)
				printf("\n\t%d is not in the list",y);
			else if(f1==1&&f2==1)
				printf("\n\t%d is not in the list",x);
			else
				printf("\n\tThe two numbers are not in the list");
			break;
		case 2:
			printf("\n\tEnter two position of the numbers=");
			scanf("%d%d",&x,&y);
			x=x-1,y=y-1;
			for(i=0;i<n;i++)
			{
				if(i==x)
					f1=1;
				else if(i==y)
					f2=1;	
			}
			if(f1==1&&f2==1)
			{
				t=a[x];
				a[x]=a[y];
				a[y]=t;
				printf("\n\tAfter interchange the position the array is--\n");
				display(a,n);
			}
			else if(f1==1&&f2!=1)
				printf("\n\t%d position is out of the list",y);
			else if(f1!=1&&f2==1)
				printf("\n\t%d position is not out of the list",x);
			else
				printf("\n\tThe two positions are out of the list");
			break;
		default:
			printf("\tYou enter wrong number");
			break;
	
	}
}
void add(int a[],int n)
{
	int i,k,l,*b;
	printf("\n\tEnter the number & the position you want to add");
	printf("\n\tEnter number=");
	scanf("%d",&k);
	printf("\n\tEnter position=");
	scanf("%d",&l);
	l=l-1;
	if(l>=0)
	{
	//a=(int *)malloc((n+1)*sizeof(int));
	a=malloc(n+1);
	for(i=0;i<n+1;i++)
	{
		if(i==l)
			a[i]=k;
		else if(i>l)
			a[i]=a[i-1];
	}
	printf("\n\tAfter add the number the array is------\n");
	}
	else
		printf("\n\tYou enter wrong position");
	display(a,(n+1));
}
void change(int a[],int n)
{
	int i,j,x,y,p1=-1,p2=-2,t;
	printf("\n\tPress 1 to change by number");
	printf("\n\tPress 2 to change by position of the numbers");
	printf("\n\tEnter your choice=");
	scanf("%d",&j);
	switch(j)
	{
		case 1:
			printf("\n\tEnter two numbers to change");
			printf("\n\tFrom ");
			scanf("%d",&x);
			printf("\n\tTo");
			scanf("%d",&y);
			for(i=0;i<n;i++)
			{
				if(a[i]==x)
					p1=i;
				else if(a[i]==y)
					p2=i;	
			}
			if(p1!=-1&&p2!=-2)
			{
				if(p1>p2)
				{
					t=a[p2];
					a[p2]=a[p1];
					for(i=p2+1;i<=p1;i++)
					{
						a[i]=t;
						t=a[i+1];
					}
					printf("\n\tAfter change the numbers the array is-----\n");
				}
				else if(p1<p2)
				{
					t=a[p2];
					a[p2]=a[p1];
					for(i=p2-1;i>=p1;i--)
					{
						a[i]=t;
						t=a[i-1];
					}
					printf("\n\tAfter change the numbers the array is-----\n");
				}
				else
				{
					printf("\n\tThe two numbers are same so no need to chnge it");
				}
				display(a,n);
			}
			else
			{
				printf("\n\tThe two numbers are not in the list");
			}
			break;
		case 2:
			printf("\n\tEnter position of the two numbers to change");
			printf("\n\tFrom ");
			scanf("%d",&x);
			printf("\n\tTo");
			scanf("%d",&y);
			x=x-1,y=y-1;
			for(i=0;i<n;i++)
			{
				if(i==x)
					p1=1;
				else if(i==y)
					p2=1;	
			}
			if(p1==1&&p2==1)
			{
				if(x>y)
				{
					t=a[y];
					a[y]=a[x];
					for(i=y+1;i<=x;i++)
					{
						a[i]=t;
						t=a[i+1];
					}
					printf("\n\tAfter change the numbers the array is-----\n");
				}
				else if(x<y)
				{
					t=a[y];
					a[y]=a[x];
					for(i=y-1;i>=x;i--)
					{
						a[i]=t;
						t=a[i-1];
					}
					printf("\n\tAfter change the numbers the array is-----\n");
				}
			}
			else
			{
				printf("\n\tThe two positions are out of the list");
			}
			break;
		default:
			printf("\n\tYou enter wrong number");
	}
}
int reverse(int a)
{
	int r=0;		
	while(a!=0)
	{
		r=r*10+a%10;
		a=a/10;
	}
	return (r);
}
void prime(int a[],int n)
{
	int i,j=2,c=0,f;
	printf("\n\tThe prime numbers are-----\n");
	for(i=0;i<n;i++)
	{
		f=0;
		while(j<=a[i]/2)
		{
			if(a[i]%j==0)
			{
				f=1;
				break;
			}
			j++;
		}
		if(f==0)
		{
			c++;
			printf("%d ",a[i]);
		}
	}
	if(c==0)
		printf("\n\tThere is no prime number in the arrey");
	else
		printf("\n\tThe number of prime numbers in the array is=%d",c);
}
void smith(int a[],int n)
{
	int i,r1,r2,c=0;
	for(i=0;i<n;i++)
	{
		r1=prime_fact(a[i],0);
		r2=sum(a[i],0);
		if(r1==r2)
			printf("\n\t%d is a smith number",a[i]);
		else
			c++;
	}
	if(c==n)
		printf("\n\tThere is no smith number");
}
int prime_fact(int a,int r)
{
	int i=2;
	if(a==1)
	{
		return r;
	}
	else
	{
		if(a%i==0)
		{
			printf("%5d",i);
			return prime_fact(a/i,r+i);
		}
		else
			i++;
	}
}
int sum(int a,int r)
{
	if(a%10==0)
		return (r);
	else
		return sum(a/10,r+a%10);
}
void even (int a[],int n)//case 10
{
	int i,c,j,*temp,m;
	m=n;
	temp=(int *)malloc(m*sizeof(int));
	printf("\n\tPress 1 to print even numbers");
	printf("\n\tPress 2 to print odd numbers");
	printf("\n\tEnter your choice=");
	scanf("%d",&j);
	switch(j)
	{
		case 1:
			c=0;
			for(i=0;i<n;i++)
			{
				if(a[i]%2==0)
				{
					temp[c]=a[i];
					c++;
					//temp[c-1]=a[i];
				}
			}
			if(c==0)
				printf("\n\tYhere is no even numbers in the list");
			else
			{
				printf("\n\tThe even numbers in the array are-----\n");
				display(temp,c);
				printf("\n\tThe number of even numbers=%d",c);
			}
			break;
		case 2:
			c=0;
			for(i=0;i<n;i++)
			{
				if(a[i]%2!=0)
				{
					c++;
					temp[c-1]=a[i];
				}
			}
			if(c==0)
				printf("\n\tYhere is no odd numbers in the list");
			else
			{
				printf("\n\tThe odd numbers in the array are-----\n");
				display(temp,c);
				printf("\n\tThe number of odd numbers=%d",c);
			}
			break;
		default :
			printf(" \n\t You enter wrong number");
	}
}
void sorting(int a[],int n)
{
	int i,k,j,t;
	printf("\n\tPress 1 to asending sorting numbers");
	printf("\n\tPress 2 to desending sorting numbers");
	printf("\n\tEnter your choice=");
	scanf("%d",&k);
	switch(k)
	{
		case 1:
			for(i=0;i<n;i++)
			{
				for(j=i+1;j<n;j++)
				{
					if(a[i]>a[j])
					{
						t=a[i];
						a[i]=a[j];
						a[j]=t;
					}
				}
			}
			printf("\n\tYhe asending sorting is-\n");
			display(a,n);
			break;
		case 2:
			for(i=0;i<n;i++)
			{
				for(j=i+1;j<n;j++)
				{
					if(a[i]<a[j])
					{
						t=a[i];
						a[i]=a[j];
						a[j]=t;
					}
				}
			}
			printf("\n\tYhe asending sorting is-\n");
			display(a,n);
			break;
		default:
			printf("\n\tYou enter wrong number");
			break;
	}
}
void search(int a[], int n)
{
	int i,s,f=0,c=0;;
	printf("\n\tEnter the number you want to scarch=");
	scanf("%d",&s);
	for(i=0;i<n;i++)
	{
		c++;
		if(a[i]==s)
		{
			f=1;
			break;	
		}
	}
	if(f==1)
	{
		printf("\n\t%d is in the list",s);
		printf("\n\\tThe position of the numberis=%d",c);
	}
	else
		printf("\n\tThe number is not in the list");
}
void magic(int a[],int n)
{
	int i,s,*b,f=0;
	b=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		s=a[i];
		while(s>9)
		
			s=sum_digit(a[i]);
		if(s==1)
		{
			f++;
			b[i]=a[i];
		}		
	}
	if(f)
	{
		printf("\n\tThe magic numbers in the list are---");
		for(i=0;i<n;i++)
			printf("%5d",b[i]);
	}
	else
		printf("\n\tThere is no magic numbers");
}
int sum_digit(int n)
{
	int r=0;
	while(n!=0)
	{
		r=r*10+n%10;
		n=n/10;
	}
	return (r);
}
