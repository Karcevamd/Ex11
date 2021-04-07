//  Copyright 2021 by Kartseva Masha
#pragma once
#define TRAIN_H
#ifdef TRAIN_H
#include <iostream>
class Cage {
    bool light;  // Svet(vkl/vk)
 public:
    Cage* next;  // sleduyshiy vagon
    Cage* prev;  // predidushiy vagon
    Cage() : light(false), next(nullptr), prev(nullptr) {}
    void on() { light = true; }
    void off() { light = false; }
    bool get() const { return light; }
};
class Train {
    Cage* first;  // ukazatel' na perviy vagon
    Cage* last;   // ukazatel' na posledniy vagon
 public:
    Train();
    void addCageInTrain();
    void printTrain();
    unsigned int sumCage();
};
#endif  // TRAIN_H
