#include <iostream>
#include <cstdlib>
#include <ctime>

int game(int maxnum) {
    srand(static_cast<unsigned int>(time(0)));
    int etsittavaLuku = rand() % maxnum + 1;
    int pelaajanArvaus;
    int arvaustenMaara = 0;

    std::cout << "Arvaa luku väliltä 1-" << maxnum << "." << std::endl;

        do {
        std::cout << "Syötä arvauksesi: ";
        std::cin >> pelaajanArvaus;

        arvaustenMaara++;

        if (pelaajanArvaus < etsittavaLuku) {
            std::cout << "Luku on suurempi." << std::endl;
        } else if (pelaajanArvaus > etsittavaLuku) {
            std::cout << "Luku on pienempi." << std::endl;
        } else {
            std::cout << "Arvasit oikein!" << std::endl;
        }
    } while (pelaajanArvaus != etsittavaLuku);

    return arvaustenMaara;
}

int main() {
    int maxnum = 40;
    int arvaustenMaara = game(maxnum);
    std::cout << "Peli päättyi. Arvausten määrä: " << arvaustenMaara << std::endl;

        return 0;
}
