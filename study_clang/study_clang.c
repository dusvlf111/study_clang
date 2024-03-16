#include <stdio.h>
int main(void) 
{
	// 정수형 변수 
	
	//int age = 12;
	//printf("%d\n", age);
	//----------------------------------------------------

	//주석연습
	
	//printf("1\n");
		//printf("2\n");
	//printf("3\n");
	// 
	//----------------------------------------------------

	// 실수형 변수
	
	//float f = 46.5f;
	//printf("%.2f\n", f);
	//float d = 4.428;
	//printf("%.2f\n", d);
	// 
	//----------------------------------------------------

	//연산
	
	//int add = 3 + 7; //10
	//printf("3 + 7 = %d\n", add);
	//printf("%d + %d = %d\n", 30, 79, 30 * 79);
		// 변수사용하지 않고 프린트
		
	//----------------------------------------------------
	
	// scanf
	
	// 키보드 입력을 받아서 저장
	//int input;
	//printf("값을 입력하세요 : ");
	//scanf_s("%d", &input);
	//printf("입력값 : %d \n", input);

	//int one, two, three;
	//printf("3개의 정수를 입력하세요 : ");
	//scanf_s("%d %d %d", &one, &two, &three);
	//printf("첫번째 값 %d\n", one);
	//printf("두번째 값 %d\n", two);
	//printf("세번째 값 %d\n", three);
	
	//----------------------------------------------------
	
	// 문자(한 글자), 문자열(한글자 이상의 여러글자)

	//char str[256];
	//scanf_s("%s", str,sizeof(str));
	//printf("%s\n", str);
	
	//----------------------------------------------------

	//프로젝트
	//경찰관이 범죄자의 정보를입수
	// 이름? 나이? 몸무게? 범죄명?

	char name[256];
	int age;
	float weight;
	char crime[256];

	printf("이름이 뭔가요 : \n");
	scanf_s("%s", name, sizeof(name));
	printf("나이 : \n");
	scanf_s("%d", &age);
	printf("몸무게는 : \n");
	scanf_s("%f", &weight);
	printf("무슨 죄를 지었지?: \n");
	scanf_s("%s", crime, sizeof(crime));

	printf("이름은 %s 나이 %d 몸무게는 %.2f 범죄명은 %s",name, age, weight, crime);

	return 0;


}