#ifndef VIP_H
#define VIP_H

#include "kendaraan.h"

extern Kendaraan vipQueue[MAX];
extern int vipCount;

void insertVIP(Kendaraan data);
void tampilVIP();

#endif