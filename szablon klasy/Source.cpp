#include "klasy.h"

int main()
{
	schowek<int> liczba(5); 
	schowek<char> znakowy('t');
	schowek<int> liczba_2(7);
	cout<<liczba.oddaj()<<"\n"<<znakowy.oddaj()<<"\n"<<liczba_2.oddaj()<<"\n";


/*definicja obiektow klasy szablonowej*/

	pasja<int> muzyk("Mateusz", 37);
	pasja<char> szewc("szewski", 'K');

	muzyk.jaka();
	szewc.jaka();

	//wywolanie funkcji statycznej
	pasja<int>::funstat();

	pasja<int> * wsk; 
	wsk = new pasja<int>("Janek", 38);
	wsk->jaka();

	pasja<int> drygent = pasja<int>("Lukasz", 50); 
	cout<<"\n przeladowanie: "<<drygent;
	delete wsk;

	
/***********************************************************/
//main ze statycznymi odwloaniami: 
/***********************************************************/

/***********************************************************/
	//powtorka ze zwyklych klas:
	zamek niepolomice("Niepolomoice"); 
	zamek wawe("wawel"); 
	
	zamek::wsk_siedziby = & niepolomice; 
	//Tutaj widzimy odwolania sie do wszystkich obiektow, nasz stayczny wskaznik w obu tych obiektach wskazuje na to samo
	//Dlatego widzimy ze obiekty statyczne sa dla kazdych obiektow ogolno dostepne.
	wawe.odpowiedz();
	niepolomice.odpowiedz();
	zamek::gdzie_krol();
	//zmiana statycznego pola:
	zamek::wsk_siedziby = &wawe;
	zamek::gdzie_krol();

/***********************************************************/
//klasy szablonowe a funkcje statyczne
	szato<int> luwr("paryz,(luwr)"); 
	szato<int> blois("blois");

	blois.iii = 1; 
	szato<int>::ttt = 77; 
	szato<int>::wsk_stolicy = &luwr;
	
	luwr.odpowiedz();
	blois.odpowiedz();
	szato<int>::funstat();

	/* oczywiscie mozna tutaj tworzyæ inne klasy i inne obiekty, ale nalezy pamietaæ ze funkcje i zmienne statyczne 
	sa dostêpne dla wszystkich obiektow tych SAMYCH klas, to jak stowrzymy nowy obiekt innej klasy przez sablon funkcji 
	to ten obiekt bedzie miec nowe zmienne i funkcje statyczne */ 


	system("pause");

}
