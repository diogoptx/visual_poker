#include <iostream>
#include "models/headers/Card.h"

using namespace std;

int main() {
    Card card(1, 3, "Copas");
    Card card1;

    cout << card.getNipe() << endl;
}