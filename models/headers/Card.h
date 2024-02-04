#ifndef VISUAL_POKER_CARD_H
#define VISUAL_POKER_CARD_H

#include <ostream>
#include <string>
#include <utility>

class Card {

private:
    int id;
    int number;
    std::string nipe;

public:

    Card(int id, int number, std::string nipe) {
        Card::id = id;
        Card::number = number;
        Card::nipe = std::move(nipe);
    }

    Card();


    int getId() const {
        return id;
    }

    int getNumber() const {
        return number;
    }

    void setNumber(int n) {
        Card::number = n;
    }

    std::string getNipe() const {
        return nipe;
    }

    void setNipe(const std::string &nipe) {
        Card::nipe = nipe;
    }

    friend std::ostream &operator<<(std::ostream &os, const Card &card) {
        os << "id: " << card.id << "\nnumber: " << card.number << "\nnipe: " << card.nipe;
        return os;
    }
};


#endif //VISUAL_POKER_CARD_H
