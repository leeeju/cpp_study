import random

printf("복권번호 생성기 실습하기")
printf("JH 일뜽각 연금 생성기")
printf("이것이 오늘의 씹 일등 연금복권 번호")
for i in range(1) :
    lst = [random.randrange(0, 9, 1) for i in range(6)]
    lst.sort()
    printf(lst)
printf("연금 1등 당첨 미리 축하")
