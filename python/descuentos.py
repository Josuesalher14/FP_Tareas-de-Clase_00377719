isss=0.03
afp=0.0725
salario=float(input("ingrese salario $"))

print("ISSS: $" + str(round(salario*isss,2)))

print("AFP: $" + str(round(salario*afp,2)))

if salario<=472.00:
    print("ISR: $0.00")
    
elif salario>=472.00 and salario<895.24:
    print("ISR: $" + str(round(salario*afp + salario*isss - ((salario-472)*0.1)+17.67,2)))
    
else:
    print("ISR: $" + str(round(salario*afp + salario*isss - ((salario-895.24)*0.2)+60.00,2)))
    
print("HORAS EXTRAS: $" + str(round(((salario/30)/8)*2 *10,2)))
