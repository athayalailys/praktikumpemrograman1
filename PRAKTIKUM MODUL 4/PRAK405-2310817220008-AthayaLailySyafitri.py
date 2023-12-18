def main():
    n, kelipatan = map(int, input().split())

    total = 0
    for i in range(1, n + 1):
        sum_result = 0
        for j in range(i, 0, -1):
            print(f"({j} * {kelipatan})", end = "")
            sum_result += j * kelipatan
            if j > i:
                print(" + ", end ="")
        total += sum_result
        print(f" = {sum_result}")

    print(total)

if __name__ == "__main__":
    main()