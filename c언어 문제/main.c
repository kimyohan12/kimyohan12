#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>


// 포인터 기본 예제 1) 

//int main(){
//	
//	int *p =NULL;
//	int num = 15;
//	
//	p = &num;
//	
//	printf("int 변수 num의 주소 : %d\n",&num);
//	printf("포인터의 p의 값 : %d\n",*p);
//	printf("포인터 p가 가리키는 값 : %d\n",*p);
//	
//	return 0;
//}



// 포인터 기본 예제 2 

//int main()
//{
//	int *p = NULL;
//	int num = 15;
//	
//	p = &num;
//	printf("포인터 p가 가리키는 값 : %d\n ", *p);
//	printf("num의 값 : %d\n\n",num);
//	
//	*p += 5;
//	printf("포인터 p가 가리키는 값 : %d\n", *p);
//	printf("num 값 : %d\n\n",num);
//	
//	(*p)++;
//	printf("포인터 p가 가리키는 값 : %d\n", *p);
//	printf("num 값 : %d\n\n",num);
//	
//	*p++;
//	printf("포인터 p가 가리키는 값 : %d\n", *p);
//	printf("num 값 : %d\n\n",num);
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
	printf("num 값 : %d\n", num);

	numPlus(num);
	printf("numPlus 사용 후 : %d\n", num);

	pointerPlus(&num);
	printf("pointerPlus 사용 후 : %d\n", num);

	return 0;
}
