#include<stdio.h>
main()
{
	int a,b;
	a=1;
	while(a<=5){
		b=1;
		while(b<=a){
			printf("%d",a);
			b++;
		}
		a++;
		printf("\n\n");
	}
}
