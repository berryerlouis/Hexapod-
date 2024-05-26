#pragma once

#include "Constants.h"
#include "Leg.h"
#include "../cmp/Servos.h"

class Legs {
public:
  Legs(Servos &servos);
  ~Legs() = default;

  Leg &GetLeg(const uint8_t legId);

private:
  Leg mLegFL;
  Leg mLegML;
  Leg mLegRL;
  Leg mLegFR;
  Leg mLegMR;
  Leg mLegRR;
  Leg *mLegs[NB_LEGS];
};