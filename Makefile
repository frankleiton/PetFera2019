cc = g++
.DEFALT_GOAL = petshop

Anfibio.o:	classes/Anfibio.cpp	classes/Anfibio.h
	$(cc) classes/Anfibio.cpp -c
AnfibioExotico.o:	classes/AnfibioExotico.cpp	classes/AnfibioExotico.h
	$(cc) classes/AnfibioExotico.cpp -c
AnfibioNativo.o:	classes/AnfibioNativo.cpp	classes/AnfibioNativo.h
	$(cc) classes/AnfibioNativo.cpp -c
Animal.o:	classes/Animal.cpp	classes/Animal.h
	$(cc) classes/Animal.cpp -c
AnimalExotico.o:	classes/AnimalExotico.cpp	classes/AnimalExotico.h
	$(cc) classes/AnimalExotico.cpp -c
AnimalNativo.o:	classes/AnimalNativo.cpp	classes/AnimalNativo.h
	$(cc) classes/AnimalNativo.cpp -c
AnimalSilvestre.o:	classes/AnimalSilvestre.cpp	classes/AnimalSilvestre.h
	$(cc) classes/AnimalSilvestre.cpp -c
Ave.o:	classes/Ave.cpp	classes/Ave.h
	$(cc) classes/Ave.cpp -c
AveExotico.o:	classes/AveExotico.cpp	classes/AveExotico.h
	$(cc) classes/AveExotico.cpp -c
AveNativo.o:	classes/AveNativo.cpp	classes/AveNativo.h
	$(cc) classes/AveNativo.cpp -c
Funcionario.o:	classes/Funcionario.cpp	classes/Funcionario.h
	$(cc) classes/Funcionario.cpp -c
Mamifero.o:	classes/Mamifero.cpp	classes/Mamifero.h
	$(cc) classes/Mamifero.cpp -c
MamiferoExotico.o:	classes/MamiferoExotico.cpp	classes/MamiferoExotico.h
	$(cc) classes/MamiferoExotico.cpp -c
MamiferoNativo.o:	classes/MamiferoNativo.cpp	classes/MamiferoNativo.h
	$(cc) classes/MamiferoNativo.cpp -c
Reptil.o:	classes/Reptil.cpp	classes/Reptil.h
	$(cc) classes/Reptil.cpp -c
ReptilExotico.o:	classes/ReptilExotico.cpp	classes/ReptilExotico.h
	$(cc) classes/ReptilExotico.cpp -c
ReptilNativo.o:	classes/ReptilNativo.cpp	classes/ReptilNativo.h
	$(cc) classes/ReptilNativo.cpp -c
Tratador.o:	classes/Tratador.cpp	classes/Tratador.h
	$(cc) classes/Tratador.cpp	-c
Veterinario.o:	classes/Veterinario.cpp	classes/Veterinario.h
	$(cc) classes/Veterinario.cpp -c
pet:	main.cpp Anfibio.o AnfibioExotico.o AnfibioNativo.o Animal.o AnimalExotico.o AnimalNativo.o AnimalSilvestre.o Ave.o AveExotico.o AveNativo.o Funcionario.o Mamifero.o MamiferoExotico.o MamiferoNativo.o Reptil.o ReptilExotico.o ReptilNativo.o Tratador.o Veterinario.o
	$(cc) main.cpp Anfibio.o AnfibioExotico.o AnfibioNativo.o Animal.o AnimalExotico.o AnimalNativo.o AnimalSilvestre.o Ave.o AveExotico.o AveNativo.o Funcionario.o Mamifero.o MamiferoExotico.o MamiferoNativo.o Reptil.o ReptilExotico.o ReptilNativo.o Tratador.o Veterinario.o -o petshop
clear:
	rm *.o
	rm petshop