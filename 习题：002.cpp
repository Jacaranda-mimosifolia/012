//����Բ���ܳ������
#include<stdio.h>
int main()
{
	int i=0;
	float r,c,s;
	while (i<3)
	{
		i++;
		printf("������Բ���ܳ���\nr=");
		scanf("%f",&r);
		getchar(); 
		printf("r=%.2fʱ,\nc=%.2f,s=%.2f\n\n",r,c=r*2*3.14,s=r*r*3.14);
	}
	return 0;
}

