#include <iostream>
#include <cstring>

const int SLEN = 30;
struct Student {
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

int getinfo(Student *array, int n);

void display1(Student st);

void display2(const Student *st);

void display3(const Student *array, int n);

int main() {
    std::cout << "Input size of class: ";
    int classSize;
    std::cin >> classSize;
    while (std::cin.get() != '\n');
    Student *ptrStu = new Student[classSize];
    int entered = getinfo(ptrStu, classSize);
    for (int i = 0; i < entered; ++i) {
        display1(ptrStu[i]);
        display2(&ptrStu[i]);
    }
    display3(ptrStu, entered);
    delete [] ptrStu;
    std::cout << "Ready\n";
    return 0;
}

int getinfo(Student *array, int n) {
    using std::cout;
    using std::cin;

    int i;

    for (i = 0; i < n; ++i) {
        cout << "Input student " << i + 1 << " information (empty name ends input):\n";
        cout << "\tFull name: ";
        cin.getline(array[i].fullname, SLEN);
        if (strcmp(array[i].fullname, "") == 0) {
            break;
        }

        cout << "\tHobby: ";
        cin.getline(array[i].hobby, SLEN);

        cout << "\tObject oriented programming level: ";
        while (!(cin >> array[i].ooplevel)) {
            cin.clear();
            while (cin.get() != '\n');
            cout << "\tWrong input (not a natural number). Try again: ";
        }
        while (cin.get() != '\n');
    }

    return i;
}

void display1(Student st) {
    using std::cout;
    cout << "Students information:\n"
         << "\tName: " << st.fullname << "\n"
         << "\tHobby: " << st.hobby << "\n"
         << "\tOOP level: " << st.ooplevel << "\n";
}

void display2(const Student *st) {
    display1(*st);
}

void display3(const Student *array, int n) {
    for (int i = 0; i < n; ++i) {
        display1(array[i]);
    }
}