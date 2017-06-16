#include <iostream>

int main() {
    const float DAFNE_PERCENT = .1f, CLEO_PERCENT = .05f;
    double dafneMany = 100. + 100. * double(DAFNE_PERCENT);
    double cleoMany = 100. + 100. * double(CLEO_PERCENT);
    int counter = 1;

    while (dafneMany > cleoMany) {
        dafneMany += 100. * double(DAFNE_PERCENT);
        cleoMany += cleoMany * double(CLEO_PERCENT);
        ++counter;
    }

    std::cout << "Cleo will have more many after "
              << counter << " years ." << std::endl;

    dafneMany = 100.;
    cleoMany = 100.;

    for (int i = 0; i <= counter; ++i) {
        std::cout << "Investments after " << i << " year(s):" << std::endl;
        std::cout << "Dafne: " << dafneMany << std::endl;
        std::cout << "Cleo: " << cleoMany << std::endl;

        dafneMany += 100. * double(DAFNE_PERCENT);
        cleoMany += cleoMany * double(CLEO_PERCENT);
    }

    return 0;
}