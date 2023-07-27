//��� ȸ��� ��� �����ý����� �ִ�.
//�� ������� �ý����� �����ڿ� ���� ����� �Է¹޾� ����� �� ������
//����� ���� �����ȣ, �̸�, ����, ���� �̶�� �Ӽ��� �����ִ�.
//�����ڴ� ������� �ѹ��� �� �� �ְ�
//�����ڿ� ���� ����� �߰��� �� ������ ����� ���� �����ڿ� ���� �����ɼ� �ִ�
//������ �����ȣ�� �Է¹޾� ���ó���� �� �� �ִ�
//��� ��ȣ�� �ý��ۿ� ���� �ڵ����� �����Ǹ� �����ȣ�� �����Ǵ� ����� �����Ӱ� �����Ҽ��ִ�.(100��)

#include "���.h"

int main() {

	Employee* employee[100]; // ����� ������ ���� 100�� -> ������
	int count = 0; // ������ ��� ���� ����
	
	while (true) {
		printf("��ɾ �Է����ּ���\n");
		printf("1.�������\n");
		printf("2.������\n");
		printf("3.�������\n");
		printf("4.���α׷�����\n");

		fseek(stdin, 0, SEEK_END);
		int input;
		scanf("%d", &input);
		
		if (input == 1) {
			printf("==��ü ��� ����==\n");
			for (int i = 0; i < count; i++) { // ��ü �迭 ��ȸ
				printf("==%d ��° ���==\n", i + 1);
				employee[i]->printInfo(); // ��ȸ �ϸ鼭 �Լ� ����
			}
		}
		else if (input == 2) {
			printf("==��� ���==\n");
			char* name = getString("������� �Է����ּ��� : ");
			int gender = getInt("������ �Է����ּ��� : ");
			char* rank = getString("������ �Է����ּ��� : ");

			Employee* e = new Employee(name, gender, rank); // ������ ���� -> ��üȭ
			delete[] name;
			delete[] rank;

			employee[count] = e; // ��� ��ο� ���
			count++; // ���� �ٿ� ����
		}
		else if (input == 3) {
			printf("==��� ����==\n");
			int number = getInt("��� ��ȣ�� �Է����ּ��� : ");
			int deletedIndex = -1; // ���ٰ� ����

			for (int i = 0; i < count; i++) { // �迭�� ��ȸ�ϴ� �ݺ���
				if (number == employee[i]->no) { // ����ڰ� ��� �Է��� ��� ��ȣ�� �迭 ���� � ��� ��ȣ�� ��ġ�ϸ�
					delete employee[i]; // ��ġ�ϴ� ����� ���� ��Ű�ڴ�
					deletedIndex = i; // ��ġ�ϴ� ����� ���� ��� deletedIndex ���ٰ� �ش� ����� �ε��� �����
					break;
				}
			}
			if (deletedIndex >= 0) { // ������ �Ƴ�?
				for (int i = deletedIndex; i < count; i++) { // ���� ������ �ε������� �迭�� ������
					employee[i] = employee[i + 1]; // 1ĭ�� ��ܿͼ� �����
				}
			}
			count--; // ��� �� ����

			//printf("%d�� ����� �����Ǿ����ϴ�.\n", number);
		}
		else if (input == 4) {
			printf("==���α׷� ����==\n");
			break;
		}
		else {
			printf("�������� �ʴ� ����Դϴ�\n");
		}
	}


	return 0;
}

int getInt(const char* prompt) { // ����ڿ��� ���ڸ� �Է¹޴´�.
	int input;
	printf("%s", prompt);
	fseek(stdin, 0, SEEK_END);
	scanf("%d", &input);
	return input;
} // �Է� ���� �������� ����

char* getString(const char* prompt) {  // ����ڿ��� ���ڿ��� �Է¹޴´�.
	//char input[100]; // �迭�� �ּҸ� �����ϰ� �������� �迭�� ������Ƿ� �����Ҵ��� �ؾ��Ѵ�.
	char* input = new char[100]; // �� ������ ����Ƿ� ���� ���� ������ ������ �ʴ´�.
	printf("%s", prompt);
	fseek(stdin, 0, SEEK_END);
	scanf("%99[^\n]s",input); // 99���� ���ڸ� �޾Ƽ� String ���� input �� ����
	return input;
} // �Է� ���� ������ ����