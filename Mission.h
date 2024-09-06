#ifndef MISSION_H
#define MISSION_H
#include <string>
#include "entreprise.h"

class Mission {
private:
    int nbPersonne;
    std::string descriptifMission;
    int nbHeure;
    Entreprise entrepriseMission;

public:
    Mission();
    ~Mission();
    Mission(int nbPers, std::string desc, int nbHr, Entreprise entreprise);
    Mission(const Mission& mission);
    Mission& operator = (const Mission& mission);

    int getNbPersonne();
    void setNbPersonne(int nbPers);

    std::string getDescriptifMission();
    void setDescriptifMission(std::string desc);

    int getNbHeure();
    void setNbHeure(int nbHr);

    Entreprise getEntrepriseMission();
    void setEntrepriseMission(Entreprise entreprise);
};

#endif
