def print_cross(start, end):
    for i in range(start, end + 1):
        print(f"{i} {end - i + start}", end="")

        if i < end:
            print(" - ", end="")

def main():
    angka1, angka2 = map(int, input().split())

    if angka1 > angka2:
        print_cross(angka2, angka1)
    elif angka2 > angka1:
        print_cross(angka1, angka2)
    else:
        print(f"{angka1} {angka2}")

if __name__ == "__main__":
    main()