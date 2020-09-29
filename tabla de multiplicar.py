def tabla():
    n_tabla_input("dime la tabla: ")
    print "TABLA DEL ", n_tabla
    for cont in range(1,10):
        print n_tabla,"x",cont," = ",n_tabla*cont

tabla()
