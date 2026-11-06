while True:
    batas = int(input("\nMasukkan batas maksimal (0 untuk selesai): "))

    if batas == 0:
        break

    for i in range(1, batas + 1, 2):
        print(i, end=" ")

    print()

    for i in range(batas - (batas % 2), 1, -2):
        print(i, end=" ")

    print()