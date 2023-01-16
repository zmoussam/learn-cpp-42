#include"english.hpp"
#include"indonesian.hpp"
#include"someone.hpp"
#include<iostream>

int main()
{
    /*
        Declarer une liste, un tableau, ... de "Someone", initialise avec
        plusieurs objets derives (Indonesian, English, etc.)

        Pour chaque "Someone" de la liste/ du tableau,
        faire appel a sayGoodNight()

         si c'dest un Anglais, alors appeler sa methode
          sinon si c'est un Indonesien, alors appeler sa methode
          etc.  
    */
   
    English en{"Jack"};
    en.sayGoodNight();

    Indonesian id{"Bunda"};
    id.sayGoodNight();

    return 0;
}