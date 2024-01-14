#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(static_cast<unsigned int>(time(0)));
    int etsittavaLuku = rand() % 20 + 1;
    int pelaajanArvaus;

    std::cout << " Arvaa luku väliltä 1-20." << std::endl;

        do {
        std::cout << "Syötä arvauksesi: ";
        std::cin >> pelaajanArvaus;


if (pelaajanArvaus < etsittavaLuku) {
std::cout << "Luku on suurempi." << std::endl;
} else if (pelaajanArvaus > etsittavaLuku) {
std::cout << "Luku on pienempi." << std::endl;
} else {
std::cout << "Arvasit oikein" << std::endl;
}
} while (pelaajanArvaus != etsittavaLuku);

    return 0;
}
