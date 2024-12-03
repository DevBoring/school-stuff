class Sequence:
    def __init__(self, initial_sequence):
        self.history = [initial_sequence[:]]  # 保存歷史序列
        self.current_sequence = initial_sequence[:]  # 當前序列
        self.ans = 0  # 最近查詢的答案

    def apply_operation(self, operation):
        op_type = operation[0]
        if op_type == 0:
            k = operation[1]
            self.current_sequence = self.history[k][:]
        elif op_type == 1:
            x = operation[1]
            v = operation[2]
            self.current_sequence.insert(x, v)
        elif op_type == 2:
            x = operation[1]
            if 1 <= x <= len(self.current_sequence):
                self.current_sequence.pop(x - 1)
        elif op_type == 3:
            x = operation[1]
            y = operation[2]
            self.current_sequence[x - 1:y] = reversed(self.current_sequence[x - 1:y])
        elif op_type == 4:
            x = operation[1]
            y = operation[2]
            v = operation[3]
            for i in range(x - 1, y):
                self.current_sequence[i] += v
        elif op_type == 5:
            x = operation[1]
            y = operation[2]
            self.ans = max(self.current_sequence[x - 1:y])
            return self.ans
        elif op_type == 6:
            x = operation[1]
            y = operation[2]
            self.ans = min(self.current_sequence[x - 1:y])
            return self.ans
        elif op_type == 7:
            x = operation[1]
            y = operation[2]
            self.ans = sum(self.current_sequence[x - 1:y])
            return self.ans

        # 保存當前序列的狀態
        self.history.append(self.current_sequence[:])


def main():
    n = int(input())
    initial_sequence = list(map(int, input().split()))
    q = int(input())

    sequence = Sequence(initial_sequence)

    results = []

    for _ in range(q):
        operation = list(map(int, input().split()))
        # 解密操作
        operation = [operation[0]] + [x ^ sequence.ans for x in operation[1:]]
        result = sequence.apply_operation(operation)
        if result is not None:
            results.append(result)

    # 輸出所有查詢的結果
    print("\n".join(map(str, results)))


if __name__ == "__main__":
    main()