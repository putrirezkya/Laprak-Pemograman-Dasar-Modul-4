while True:
    kelipatan = int(input("\nMasukkan bilangan kelipatan (0 untuk selesai): "))

    if kelipatan == 0:
        break

    simbol = input("Masukkan simbol pengganti: ")

    for i in range(1, 51):
        if i % kelipatan == 0:
            print(simbol, end=" ")
        else:
            print(i, end=" ")

    print()