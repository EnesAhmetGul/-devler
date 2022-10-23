import math


def f(x):
    return 4 * math.pow(math.e, -0.5 * x) -x

def g(x):
    return 2 * x * math.pow(math.e, -0.5 * x - 1) - 11




def newtonRaphson(x0, e, N):
    print('\n\n*** NEWTON RAPHSON METODU ***')
    step = 1
    flag = 1
    condition = True
    while condition:
        if g(x0) == 0.0:
            print('Sıfıra Bölünemez!')
            break

        x1 = x0 - f(x0) / g(x0)
        print('Iterasyon-%d, x1 = %0.6f, f(x1) = %0.6f and g(x1) = %0.6f' % (step, x1, f(x1), g(x1)))
        x0 = x1
        step = step + 1

        if step > N:
            flag = 0
            break

        condition = abs(f(x1)) > e

    if flag == 1:
        print('\nDenklemin kökü: %0.8f' % x1)
    else:
        print('\nBulunamadı.')


x0 = float(input('Başlangıç Değeri: '))
e = float(input('Mutlak Hata: '))
N = int(input('Maximum Adım: '))

newtonRaphson(x0, e, N)