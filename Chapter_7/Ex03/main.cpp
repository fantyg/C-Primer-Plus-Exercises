#include <iostream>

const int PRODUCER_LIMIT = 40;
struct Box {
    char producer[PRODUCER_LIMIT];
    float height;
    float width;
    float length;
    float volume;
};

void showBox(Box box);

Box * setVolume(Box *box);

int main() {
    Box box = {"Don't know", 10.0f, 5.2f, 1.1f, 1.2f};
    std::cout << "Wrong volume:\n";
    showBox(box);
    std::cout << "Good volume:\n";
    showBox(*setVolume(&box));
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

void showBox(Box box) {
    std::cout << "Box:\n"
              << "\tProducer: " << box.producer << "\n"
              << "\tHeight: " << box.height << "\n"
              << "\tWidth: " << box.width << "\n"
              << "\tLength: " << box.length << "\n"
              << "\tVolume: " << box.volume << "\n";
}

Box * setVolume(Box *box) {
    box->volume = box->length * box->width * box->height;
    return box;
}