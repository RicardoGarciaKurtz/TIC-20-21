'''
define una funcion que reciba 2 numeros enteros y una letra que
representa una de las siguientes operaciones, s de suma, r de resta,
m de multiplicacion y d de division
'''
def menu():
    print "introduce dos numeros enteros"
    numero1=input("numero 1= ")
    interruptora=1
    while(interruptora==1):
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
            interruptora=0
        if(opcion==2):
            resultado=numero1-numero2
            interruptora=0
        if(opcion==3):
            resultado=numero1*numero2
            interruptora=0
        if(opcion==4):
            if(numero2!=0):
                interruptora=0
                resultado=numero1/numero2
            else:
                interruptora=1
                print "has intentado dividir entre 0 "
                print "introduce un nuevo numero "
    print "el resultado es", resultado
menu() 
