#include <stdio.h>

///* run this program using the console pauser or add your own getch, system("pause") or input loop */
//
//int main(int argc, char *argv[]) {
//	return 0;
//}

//main()
//{
//	printf("�ȳ��ϼ���");
//	printf("������Դϴ�.");
//}

//int  main(){ 
//	int a;
//	int b;
//	a=15;
//	b=16;
//	printf("a�� ���ڴ� %d�Դϴ�/n  b�� ���ڴ� %d�Դϴ� �� �μ����� �������� a*b=%d",a,b,a*b);
//}

//int main(){
//	char v;
//	v='c';
//	printf("�Էµ� ���ڴ� %c�Դϴ�.",v);
//}

// ������ �⺻ ����  

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
 

// ������ ���� 1
 
 
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


// ���ﰢ�� * ��� 

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


// �����ﰢ�� * ��� 
 
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

// 2���� �迭 �⺻ 1


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



// 2���� �迭�� �̿��� ������ ����1) 

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
		printf("\n[ %d�� ]\n\n", i);

		for (j = 1; j <= 9; j++)
		{
			printf("%d ", gugudan[i][j]);
		}
	}

	return 0;
}
