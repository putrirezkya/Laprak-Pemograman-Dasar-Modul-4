while True:
    a = int(input("\nMasukkan angka pertama (0 0 untuk selesai): "))
    b = int(input("Masukkan angka kedua: "))

    if a == 0 and b == 0:
        break

    x = a
    y = b

    if a < b:
        while x <= b:
            print(x, y, end="")
            if x != b:
                print(" - ", end="")
            x += 1
            y -= 1
    else:
        while x >= b:
            print(x, y, end="")
            if x != b:
                print(" - ", end="")
            x -= 1
            y += 1

    print()