//  Copyright 2021 by Kartseva Masha
#include "train.h"
int main() {
    Train train;
    for (int i = 0; i < 100; ++i) {
        train.addCageInTrain();
    }
    std::cout << train.sumCage() << std::endl;
    if (100 == train.sumCage()) std::cout << "true" << std::endl;
    return 0;
}
