//어느 회사는 사원 관리시스템이 있다.
//이 사원관리 시스템은 관리자에 의해 사원을 입력받아 등록할 수 있으며
//사원은 각각 사원번호, 이름, 성별, 직급 이라는 속성을 갖고있다.
//관리자는 모든사원을 한번에 볼 수 있고
//관리자에 의해 사원이 추가될 수 있으며 사원이 퇴사시 관리자에 의해 삭제될수 있다
//삭제는 사원번호를 입력받아 퇴사처리를 할 수 있다
//사원 번호는 시스템에 의해 자동으로 관리되며 사원번호가 관리되는 방법은 자유롭게 구현할수있다.(100명)

#include "헤더.h"

int main() {

	Employee* employee[100]; // 사원을 저장할 공간 100개
	int count = 0; // 현재의 사원 숫자 저장
	
	while (true) {
		printf("명령어를 입력해주세요\n");
		printf("1.사원보기\n");
		printf("2.사원등록\n");
		printf("3.사원삭제\n");
		printf("4.프로그램종료\n");

		fseek(stdin, 0, SEEK_END);
		int input;
		scanf("%d", &input);
		
		if (input == 1) {
			printf("==전체 사원 보기==\n");
			for (int i = 0; i < count; i++) {
				employee[i]->printInfo();
			}
		}
		else if (input == 2) {
			printf("==사원 등록==\n");
			char* name = getString("사원명을 입력해주세요 : ");
			int gender = getInt("성별을 입력해주세요 : ");
			char* rank = getString("직급을 입력해주세요 : ");

			Employee* e = new Employee(name, gender, rank);

		}
		else if (input == 3) {
			printf("==사원 삭제==\n");
		}
		else if (input == 4) {
			printf("==프로그램 종료==\n");
			break;
		}
		else {
			printf("존재하지 않는 기능입니다\n");
		}
	}


	return 0;
}

int getInt(const char* prompt) { // 사용자에게 숫자를 입력받는다.
	int input;
	printf("%s", prompt);
	fseek(stdin, 0, SEEK_END);
	scanf("%d", &input);
	return input;
} // 입력 받은 정수값을 리턴

char* getString(const char* prompt) {  // 사용자에게 문자열을 입력받는다.
	//char input[100]; // 배열의 주소만 리턴하고 실질적인 배열은 사라지므로 동적할당을 해야한다.
	char* input = new char[100]; // 힙 영역에 생기므로 위와 같은 문제가 생기지 않는다.
	printf("%s", prompt);
	fseek(stdin, 0, SEEK_END);
	scanf("%99[^\n]s",input); // 99개의 문자를 받아서 String 으로 input 에 저장
	return input;
} // 입력 받은 문장을 리턴