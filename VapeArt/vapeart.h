#ifndef VAPEART_H
#define VAPEART_H

#include <iostream>
#include <vector>
#include <string>

#include "box_mod.h"
#include "dripka.h"
#include "mechanical_mod.h"
#include "tank.h"


struct Device {

    void catalogBoxMods(int valueBoxMod)
        {
            Box_mod drag{"Drag", 2, 157, 0.05, 300, 1, 110};
            Box_mod drag2{"Drag", 2, 200, 0.05, 300, 0, 140};
            if(valueBoxMod == 1)
            {
               drag.showInfoBoxMod();
            }

            if(valueBoxMod == 2)
            {
                drag2.showInfoBoxMod();
            }
        }

        void catalogDripkas(int valueDripka)
        {
            Dripka dripkaKen{"Kennedy Trickster", 24, 2, 0, "Steel", 35};
            if(valueDripka == 1)
            {
                dripkaKen.showInfoDripka();
            }
        }

        void catalogMechanicalMods(int valueMechanicalMod)
        {
            Mechanical_mod modSubziro("Subziro", 1, 150, 0.08, 100, 1, 80, "Сopper");
                    if(valueMechanicalMod == 1)
            {
                modSubziro.showInfoMechanicalMod();
            }
        }

        void catalogTanks(int valueTank)
        {
            Tank Ammit(24, 2, 35, 0);
            if(valueTank == 1)
            {
                Ammit.showInfoTank();
            }
        }

        Device(int valueBoxMod, int valueDripka, int MechanicalMod, int valueTank)
        {
            catalogBoxMods(valueBoxMod);
            catalogDripkas(valueDripka);
            catalogMechanicalMods(MechanicalMod);
            catalogTanks(valueTank);
        }
};

#endif // VAPEART_H
