#include <iostream>
#include "entreprise.h"
#include "mission.h"

using namespace std;

int main() {
    // Cr�ation d'une entreprise
    Entreprise entreprise1("TechCorp", "Paris");
    cout << "Nom de l'entreprise : " << entreprise1.getNomEntreprise() << endl;
    cout << "Ville de l'entreprise : " << entreprise1.getVilleEntreprise() << endl;

    // Cr�ation d'une mission
    Mission mission1(5, "D�veloppement d'une application web", 40, entreprise1);
    cout << "Nombre de personnes impliqu�es : " << mission1.getNbPersonne() << endl;
    cout << "Descriptif de la mission : " << mission1.getDescriptifMission() << endl;
    cout << "Nombre d'heures : " << mission1.getNbHeure() << endl;
    cout << "Entreprise de la mission : " << mission1.getEntrepriseMission().getNomEntreprise() << endl;

    return 0;
}
