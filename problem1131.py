grenais = 0 
vitoriasInter = 0
vitoriasGremio = 0
empates = 0
nGrenal = 1

while nGrenal == 1:
    grenais += 1

    gInter, gGremio = input().split(" ")
    golsInter = int(gInter)
    golsGremio = int(gGremio)

    if golsGremio > golsInter:
        vitoriasGremio += 1
    elif golsInter > golsGremio:
        vitoriasInter += 1
    else:
        empates += 1
        
    nGrenal = int(input("Novo grenal (1-sim 2-nao)\n" ))

    if nGrenal != 1:
        print("%d grenais" %grenais)
        print("Inter:%d" %vitoriasInter)
        print("Gremio:%d" %vitoriasGremio)
        print("Empates:%d" %empates)
        
        if vitoriasGremio > vitoriasInter:
            print("Gremio venceu mais")
        elif vitoriasGremio < vitoriasInter:
            print("Inter venceu mais")
        else:
            print("Nao houve vencedor")
        
        
