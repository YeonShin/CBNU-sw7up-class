## 학생 5명의 시험 점수를 입력받아 합계와 평균을 출력하기 ##
i, total = 0, 0
score = []
print("학생 그룹 점수의 합계와 평균을 구합니다.")

for i in range(1, 6):
    print("%d번 학생의 점수를 입력하세요.: " %i, end = '')
    score.append(int(input()))

total = sum(score)
print(f'합계는 {total}점입니다.')
print(f'평균은 {total / 5}점입니다.')
