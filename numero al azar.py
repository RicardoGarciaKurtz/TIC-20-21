'''
dime un numero al azar entre el 1 al 10 y lo adivino
'''
def adivino():
    numero=input("dime un numero del 1 al 10: ")
    intento=input("intentalo: ")
    while intento!=numero:
        if intento>numero:
            print "mas bajo"
        if intento<numero:
            print "mas alto"
        intento=input("intentalo")
    print "has acertado"
adivino()

