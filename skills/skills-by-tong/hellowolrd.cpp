#include <stdio.h>
using namespace std;

int main()
{
	int Num,Num2,Num3,Num4,Num5;
	scanf("%u" ,&Num );
	if(Num != 0)
	{
			if(Num < 100000 or Num == 100000  )
			{
				int Num1 = 0;
				printf("0\n");
			}
			if(Num > 100000 or Num < 1000001)
			{
				Num2 = (Num-100000)*0.06;
				printf("%d\n",Num2);
			}
			if(Num > 1000000 or Num < 5000001)
			{
				Num3 = (Num-1000000)*0.12;
				printf("%d\n",Num3);
			}
			if(Num > 5000000 or Num < 10000001)
			{
				Num4 = (Num-5000000)*0.20;
				printf("%d\n",Num4);
			}
			if(Num > 10000000 )
			{
				Num5 = (Num-10000000)*0.32;
				printf("%d\n",Num5);
			}
		printf("%d",(Num2+Num3+Num4+Num5));
	}
	//printf("Hello World !! \n");
	else if(Num == 0)
	{
		return 0 ;
	}
}
