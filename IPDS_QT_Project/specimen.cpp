#include "specimen.h"

#include <cmath>

Specimen::Specimen(QColor color, std::string imgPath)
    : specimenID(ID), color(color), imgPath(imgPath)
{
    ID++;
}

unsigned Specimen::ID = 0;

Specimen::Specimen(Specimen& s) : specimenID(s.ID) {}

Specimen& Specimen::operator=(Specimen& s){
    this->ID = s.ID;
    return *this;
}
