#include "Pracownik.h"

int main()
{
	UmowaDzielo dzielo(1800);
	Umowa *praca = new UmowaPraca(1800);

	Pracownik Konrad("Konrad","Hopek","9590089440",praca);
	cout<<Konrad;

	Pracownik Klaudia("Klaudia","Hopek","443132147",&dzielo);
	cout<<Klaudia;

	system("pause");
}