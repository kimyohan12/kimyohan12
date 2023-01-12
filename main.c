#include <stdio.h>

///* run this program using the console pauser or add your own getch, system("pause") or input loop */
//
//int main(int argc, char *argv[]) {
//	return 0;
//}

//main()
//{
//	printf("안녕하세요");
//	printf("김요한입니다.");
//}

//int  main(){ 
//	int a;
//	int b;
//	a=15;
//	b=16;
//	printf("a의 숫자는 %d입니다/n  b의 숫자는 %d입니다 이 두숫자의 곱셉값은 a*b=%d",a,b,a*b);
//}

//int main(){
//	char v;
//	v='c';
//	printf("입력된 문자는 %c입니다.",v);
//}

// 포인터 기본 문제  

//int main(){
//	int a = 2;
//	int *ptr;
//	
//	ptr = &a;
//	
//	*ptr = 3 ;
//	
//	printf("%d\n",a);
//	
//	return 0;
//}
 

// 포인터 문제 1
 
 
//int main() {
//    
//	int arr[3][4] = {
//        {1,2,3,4},
//        {5,6,7,8},
//        {9,10,11,12}
//    };
//    int(*ptr)[4] = arr;
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < 4; j++) {
//            printf("%d ", *ptr[i]+j);
//        }
//        printf("\n");
//    }
// 
//}


// 직삼각형 * 찍기 

//int main(){
//	
//	int i, j;
//	
//	for(i=0;i<5;i++)
//	{
//		for(j=0; j<i;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
// 	return 0;
//}


// 역직삼각형 * 찍기 
 
//int main(){
//
//int i , j , k;
//
//  for(i = 0; i< 5; i++){
//     for(k = 0; k< i; k++){
//	 	printf(" ");
//	 }
//     for(j =5; j> i; j--){
//       printf("*");
//     }   
//    
//    printf("\n");
//  } 
//	return 0;
//}

// 2차원 배열 기본 1


//int main()
//{
//	int yohan[3][4] =
//	{
//		{1, 2, 3, 4},
//		{5, 6, 7, 8},
//		{9, 10, 11, 12}
//	};
//	
//	for(int i=0; i<3; i++)
//	{
//		for(int j=0; j<4;j++)
//		{
//			printf("%d ", yohan[i][j]);
//		}
//		printf("\n");
//	}
//	
//	return 0;
//} 



// 2차원 배열을 이용한 구구단 예제1) 

int main()
{
	int i, j;
	int gugudan[2][5]  =
		{
		{1, 2, 3, 4},
		{5, 6, 7, 8, 9}
	};
	    for (int i = 2; i < 9; i++)
          for (int j = 1; j < 9; j++)
           gugudan[i][j] = (i + 2)*(j + 1);
  

	for (i = 2; i <= 9; i++)
	{
		printf("\n[ %d단 ]\n\n", i);

		for (j = 1; j <= 9; j++)
		{
			printf("%d ", gugudan[i][j]);
		}
	}

	return 0;
}
