int main(void) {     // 경찰서 조서 출력하기

	char name[256];
	printf("이름이 뭔가요?");
	scanf_s("%s", name, sizeof(name)); // 이름을 출력하기 위해서 sizeof 지료형의 크기를 구한다 (name)

	int age;
	printf("나이는 얼마 인가요?");
	scanf_s("%d", &age);            // 입력값은 age에 저장 한다.

	float weight;
	printf("몸무게는 몇이냐?");
	scanf_s("%f", &weight);

	double height;
	printf("키는 몇이냐?");
	scanf_s("%lf", &height);

	char what[256];
	printf("죄가 뭐냐");
	scanf_s("%s", what, sizeof(what));

	// 출력내용
	printf("\n\n --- 정보 --- \n\n");
	printf("이름   : %s\n", name);
	printf("나이   : %d\n", age);
	printf("몸무게 : %.2f\n", weight);
	printf("키     : $.2lf\n", height);
	printf("범죄   : %s\n", what);

	return 0;
}

2021.04.29
