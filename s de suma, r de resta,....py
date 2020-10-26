'''
define una funcion que reciba 2 numeros enteros y una letra que
representa una de las siguientes operaciones, s de suma, r de resta,
m de multiplicacion y d de division
'''
def menu():
    print "introduce dos numeros enteros"
    numero1=input("numero 1= ")
    numero2=input("numero 2= ")
    print "************************"
    print "*               menu                 *"
    print "************************"
    print "1. suma"
    print "2. resta"
    print "3. multiplicacion"
    print "4. division"
    opcion= input("teclee la opcion elegida ")
    if(opcion==1):
        resultado=numero1+numero2
    if(opcion==2):
        resultado=numero1-numero2
    if(opcion==3):
        resultado=numero1*numero2
    if(opcion==4):
        resultado=numero1/numero2
    print "el resultado es", resultado
menu() 
