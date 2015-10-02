#include "mescola.h"

void mescola(std::vector <Carta> &mazzo_da_mescolare) {
    std::random_shuffle(mazzo_da_mescolare.begin(),mazzo_da_mescolare.end());
}