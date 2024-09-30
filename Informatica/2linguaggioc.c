	// Esercizio //
	/*//	Esercizio
/*	Calcola l'area di un triangolo inserendo la base e l'altezza./*
*/
# include <stdio.h>
	
	int main(){
		float altezza, base,risultato; /*Dichiarazione*/
		altezza=0;
		base=0;
	
		printf("Inserisci l'altezza': ");
		scanf("%f", &altezza);
		printf("Inserisci la base': ");
		scanf("%f", &base);
		risultato=(altezza*base)/2;
		printf("Il valore doppio è: %f",risultato);
		
		return 0;
}
