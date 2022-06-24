def solution(array, commands):
    answer = []
    for command in commands:
        i, j, k = command
        answer.append(list(sorted(array[i-1:j]))[k-1])
    return answer

TEST_ARRAY = [1, 5, 2, 6, 3, 7, 4]
TEST_COMMANDS = [[2, 5, 3], [4, 4, 1], [1, 7, 3]]

ANSWER = solution(TEST_ARRAY, TEST_COMMANDS)

for ans in ANSWER :
    print(ans)