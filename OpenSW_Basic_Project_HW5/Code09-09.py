## 함수 선언 부분 ##
def multi(v1, v2):
    retlist = []
    res1 = v1 + v2
    res2 = v1 - v2
    retlist.append(res1)
    retlist.append(res2)
    return retlist

## 전역 변수 선언 부분 ##
myList = []
hap, sub = 0, 0

## 메인 코드 부분 ##
myList = multi(100, 200)
hap = myList[0]
sub = myList[1]
print("multi()에서 돌려준 값 ==> %d, %d" % (hap, sub))
