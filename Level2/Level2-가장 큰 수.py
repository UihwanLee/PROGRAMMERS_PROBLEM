def condruct(num):
    if num[0] is '0': return 0
    if len(num) < 2:
        num.append(num[0])
        num.append(num[0])
        num.append(num[0])
    if len(num) < 3:
        num.append(num[0])
        num.append(num[1])
    if len(num) < 4:
        num.append(num[0])
    return (int)("".join(num))

def solution(numbers):
    answer = ''
    compare = []
    for num in numbers:
        compare.append((str(num), condruct(list(str(num)))))
    compare = sorted(compare, key= lambda x: x[1], reverse=True)
    for i in compare:
        answer += i[0]
    if(answer.count('0') == len(answer)) : answer = '0'
    return answer

# 기본적으로 앞 단위에 따른 내림차순
# 같은 단위(앞자리 수가 같은 경우)는

TEST_NUMBERS = [34, 344]

ANSWER = solution(TEST_NUMBERS)
print(ANSWER)