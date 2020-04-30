import math
import random


def main():

    context = 'RealVariable x; \n'
    count = 0

    for y in range(60):
        a = random.randint(1,60)
        b = random.randint(1,60)
        c = random.randint(1,60)

        d = b ** 2 - 4 * a * c  # discriminant

        sol = False

        if d < 0:
            sol = False
        else:
            x = (((-b) + math.sqrt(d))/(2*a))
            sol = True
            count+=1

        if sol:
            context += 'CHECK(((solve({}*(x^2) + {}*x + {} == 0) >= {}) && (solve({}*(x^2) + {}*x + {} == 0) <= {})));'.format(a,b,c,round(x-0.0001,4),a,b,c,round(x+0.0001,4))
        else:
            context += 'CHECK_THROWS_AS(solve({}*(x^2) + {}*x + {} == 0), std::exception);'.format(a,b,c)

        context += '\n'


    while count <10:
        d = -1
        x =0
        while d < 0:
            a = random.randint(1, 60)
            b = random.randint(1, 60)
            c = random.randint(1, 60)

            d = b ** 2 - 4 * a * c  # discriminant

            if d >= 0:
                x = (((-b) + math.sqrt(d))/(2*a))

        context += 'CHECK(((solve({}*(x^2) + {}*x + {} == 0) >= {}) && (solve({}*(x^2) + {}*x + {} == 0) <= {})));'.format(a,b,c,round(x-0.0001,4),a,b,c,round(x+0.0001))
        context += '\n'
        count+=1


    with open('OutputCpp.txt', 'w') as f1:
        f1.write(context)

    context = 'ComplexVariable y; \n std::complex<double> mycomplex(0, 0); \n'

    for x in range(40):
        a = random.randint(1,40)
        b = a-1
        c = random.randint(1,40)
        d  =random.randint(1,40)

        leftSizeReal = a
        rightSizeReal = b
        sym = ''
        if d-c <0:
            sym = ''

        equal = 'mycomplex= std::complex<double>(0, {}{}); \n'.format(sym,d-c)
        context += equal
        context += 'CHECK(solve({}*y + {}i == {}*y+{}i) == mycomplex); \n'.format(a,c,b,d)

    with open('OutputCpp2.txt', 'w') as f1:
        f1.write(context)




if __name__ == '__main__':
    main()
