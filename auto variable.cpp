#include<stdio.h>
main()
{
	auto int i;
	printf("\nDefault value=%d",i);
	i=23;
	printf("\nAddress=%u",&i);
	{
		auto int i=5;
		{
			auto int i=5;
			printf("\nInside 1st scope i=%d",i);
		}
		printf("\nInside 2nd scope i=%d",i);
	}
	printf("\nInside 3rd scop i=%d",i);
}
