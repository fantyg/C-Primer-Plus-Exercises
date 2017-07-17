#include <iostream>
#include <cstring>

const int DROSS_SIZE = 20;

struct chaff {
    char dross[DROSS_SIZE];
    int slag;
};

const int NEEDED_MEMORY = sizeof(chaff) * 2;

void showChaff(const chaff &ch);

int main() {
    char buffer[NEEDED_MEMORY];
    chaff *my_arr = new(buffer) chaff[2];
    chaff *arr = new chaff[2];

    my_arr[0].slag = 1;
    my_arr[1].slag = 2;
    arr[0].slag = 3;
    arr[1].slag = 4;
    strcpy(my_arr[0].dross, "A");
    strcpy(my_arr[1].dross, "B");
    strcpy(arr[0].dross, "C");
    strcpy(arr[1].dross, "D");

    std::cout << "Chaff size: " << sizeof(chaff) << ".\n";
    std::cout << "Buffer address: " << (void *) (buffer) << ".\n";
    std::cout << "End of buffer address: " << (void *) (&buffer[NEEDED_MEMORY - 1]) << ".\n";
    showChaff(my_arr[0]);
    showChaff(my_arr[1]);
    showChaff(arr[0]);
    showChaff(arr[1]);

    return 0;
}

void showChaff(const chaff &ch) {
    std::cout << "slag: " << ch.slag
              << ", dross: " << ch.dross
              << ", address: " << &ch << "\n";
}