#include <stdio.h>
int main(void) 
{
	// ������ ���� 
	
	//int age = 12;
	//printf("%d\n", age);
	//----------------------------------------------------

	//�ּ�����
	
	//printf("1\n");
		//printf("2\n");
	//printf("3\n");
	// 
	//----------------------------------------------------

	// �Ǽ��� ����
	
	//float f = 46.5f;
	//printf("%.2f\n", f);
	//float d = 4.428;
	//printf("%.2f\n", d);
	// 
	//----------------------------------------------------

	//����
	
	//int add = 3 + 7; //10
	//printf("3 + 7 = %d\n", add);
	//printf("%d + %d = %d\n", 30, 79, 30 * 79);
		// ����������� �ʰ� ����Ʈ
		
	//----------------------------------------------------
	
	// scanf
	
	// Ű���� �Է��� �޾Ƽ� ����
	//int input;
	//printf("���� �Է��ϼ��� : ");
	//scanf_s("%d", &input);
	//printf("�Է°� : %d \n", input);

	//int one, two, three;
	//printf("3���� ������ �Է��ϼ��� : ");
	//scanf_s("%d %d %d", &one, &two, &three);
	//printf("ù��° �� %d\n", one);
	//printf("�ι�° �� %d\n", two);
	//printf("����° �� %d\n", three);
	
	//----------------------------------------------------
	
	// ����(�� ����), ���ڿ�(�ѱ��� �̻��� ��������)

	//char str[256];
	//scanf_s("%s", str,sizeof(str));
	//printf("%s\n", str);
	
	//----------------------------------------------------

	//������Ʈ
	//�������� �������� �������Լ�
	// �̸�? ����? ������? ���˸�?

	char name[256];
	int age;
	float weight;
	char crime[256];

	printf("�̸��� ������ : \n");
	scanf_s("%s", name, sizeof(name));
	printf("���� : \n");
	scanf_s("%d", &age);
	printf("�����Դ� : \n");
	scanf_s("%f", &weight);
	printf("���� �˸� ������?: \n");
	scanf_s("%s", crime, sizeof(crime));

	printf("�̸��� %s ���� %d �����Դ� %.2f ���˸��� %s",name, age, weight, crime);

	return 0;


}