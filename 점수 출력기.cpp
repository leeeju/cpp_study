def chk_grade(point):
 if point >= 90:
  return "A"
 elif point >= 80:
  return "B"
 elif point >= 70:
  return "C"
 else:
  return "F"

score = int(input("input score: "))

if score >= 80:
 print("점수:%s, 등급:%s, 합격!!! 축하합니다~" %(score, chk_grade(score)))
else:
 print("불합격")
