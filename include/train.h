//  Copyright 2021 by Kartseva Masha
#pragma once
#define TRAIN_H
#ifdef TRAIN_H
#include <iostream>
class Cage {
    bool light; // Свет (вкл/выкл)
 public:
    Cage* next; // следующий вагон
    Cage* prev; // предыдущий вагон
    Cage() : light(false), next(nullptr), prev(nullptr) {}
    void on() { light = true; }
    void off() { light = false; }
    bool get() const { return light; }
};
class Train {
    Cage* first; // указатель на первый вагон
    Cage* last;  // указатель на последний вагон
 public:
    Train();
    void addCageInTrain();
    void printTrain();
    unsigned int sumCage();
};
#endif  // TRAIN_H
