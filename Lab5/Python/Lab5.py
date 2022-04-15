# -----------------------------------------------------------------------------------
# 29. Натуральное число называется палиндромом,
#     если его запись читается одинаково с начала и з конца (например, 4884, 575, 9).
#     Найти все чотырехзначные палиндромы.
# -----------------------------------------------------------------------------------

n = 0     # число порядка

print('Все полиндромные числа с 999 до 100000: ')

for i in range(1, 10):

    for x in range(10):
        n = n+1
        num = i * pow(10, 3) + x * pow(10, 2) + x * 10 + i
        
        if n<=9:
            print(n, '%-3s' % ')', num, sep='')
        else:
            print(n, '%-2s' % ')', num, sep='')