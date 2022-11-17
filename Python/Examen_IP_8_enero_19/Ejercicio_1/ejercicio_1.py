

def main():

    entrada = input("Inserta una lista de numeros separada por espacios: ")
    numeros = entrada.split(" ")
    numeros = list(map(int, numeros))
    print("Has introducido la lista {}".format(numeros))
    meseta = 0
    cociente = 1
    longitud_mesetas =[]
    for numero in range(len(numeros)):

        if numero == 0:
            temp = numeros[numero]
            meseta += 1

        elif temp == numeros[numero]:

            meseta +=1
        else:
            cociente +=1
            longitud_mesetas.append(meseta)
            meseta = 1
            temp = numeros[numero]
    longitud_mesetas.append(meseta)


    media = sum(longitud_mesetas)/cociente
    print("La longitud media de las mesetas es:{}".format(media))





if __name__ == '__main__':
    main()

