#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>


// ������ �⺻ ���� 1) 

//int main(){
//	
//	int *p =NULL;
//	int num = 15;
//	
//	p = &num;
//	
//	printf("int ���� num�� �ּ� : %d\n",&num);
//	printf("�������� p�� �� : %d\n",*p);
//	printf("������ p�� ����Ű�� �� : %d\n",*p);
//	
//	return 0;
//}



// ������ �⺻ ���� 2 

//int main()
//{
//	int *p = NULL;
//	int num = 15;
//	
//	p = &num;
//	printf("������ p�� ����Ű�� �� : %d\n ", *p);
//	printf("num�� �� : %d\n\n",num);
//	
//	*p += 5;
//	printf("������ p�� ����Ű�� �� : %d\n", *p);
//	printf("num �� : %d\n\n",num);
//	
//	(*p)++;
//	printf("������ p�� ����Ű�� �� : %d\n", *p);
//	printf("num �� : %d\n\n",num);
//	
//	*p++;
//	printf("������ p�� ����Ű�� �� : %d\n", *p);
//	printf("num �� : %d\n\n",num);
//	
//	return 0;
//	
// } 




void pointerPlus(int *num)
{
	*num += 5;
}

void numPlus(int num)
{
	num += 5;	
}

int main()
{
	int num = 15;
	printf("num �� : %d\n", num);

	numPlus(num);
	printf("numPlus ��� �� : %d\n", num);

	pointerPlus(&num);
	printf("pointerPlus ��� �� : %d\n", num);

	return 0;
}
