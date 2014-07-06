#include "config.h"

Config conf;

void config(int* argc, char** argv)
{
   conf.maxPlayers = 6;
   conf.numPlanets = 32;
   conf.maxSegments = 2000;
   conf.segmentSteps = 50;
   conf.numShots = 16;
   conf.fastmode = 0;
   conf.fullscreen = 0;
   conf.oneline = 0;
   /*
   conf.battlefieldW = 1660.0;
   conf.battlefieldH = 1245.0;
   */
   conf.battlefieldW = 1920.0;
   conf.battlefieldH = 1080.0;
}
