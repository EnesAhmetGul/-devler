import math


def f(x):
    return (math.pow(x, 1/3))


def g(x):
    return 1/3 * (math.pow(x, -2/3))


def newtonRaphson(x0, e, N):
    print('\n\n*** NEWTON RAPHSON METODU ***')
    step = 1
    flag = 1
    condition = True
    while condition:
        if g(x0) == 0.0:
            print('Sifirla Bolunemez!')
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
        print('\nKök: %0.8f' % x1)
    else:
        print('\nKök bulunamadı.')

def main():
     x0 = float(input('Başlangic Degeri: '))
     e = float(input('Mutlak Hata: '))
     N = int(input('Maximum Adim: '))


     newtonRaphson(x0, e, N)

main()