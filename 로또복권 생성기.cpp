import random

printf("로또번호 생성기 실습하기")
printf("JH 일뜽각 로또 생성기")
printf("이것이 오늘의 씹 일등 로또번호")
for i in range(5) :
    로또번호= random.sample(range(1, 46),6)
    로또번호.sort()
    print(로또번호)
    
printf("일뜽 당첨 미리 축하")
