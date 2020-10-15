'''
dime un numero al azar entre el 1 al 10 y lo adivino
'''
import random
def adivino():
    maxn=1000000
    numero=random.randint(1,maxn)
    intento=input("intentalo: ")
    while intento!=numero:
        if intento>numero:
            print "mas bajo"
        if intento<numero:
            print "mas alto"
        intento=input("intentalo")
    print "has acertado"
adivino()

