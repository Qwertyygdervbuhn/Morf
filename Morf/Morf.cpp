#include <iostream>
using namespace std;

class PC {
protected:
    string name, cpu, gpu, ssd, ram;
    double price;

public:
    PC(string name, string cpu, string gpu, string ssd, string ram, double price)
        : name(name), cpu(cpu), gpu(gpu), ssd(ssd), ram(ram), price(price) {}

    void Output() {
        cout << "Name: " << name << endl;
        cout << "CPU: " << cpu << endl;
        cout << "GPU: " << gpu << endl;
        cout << "SSD: " << ssd << endl;
        cout << "RAM: " << ram << endl;
        cout << "Price: $" << price << endl;
    }
};

class OfficePC : public PC {
    string microphone;

public:
    OfficePC(string name, string cpu, string gpu, string ssd, string ram, double price, string microphone)
        : PC(name, cpu, gpu, ssd, ram, price), microphone(microphone) {}

    void Output() {
        PC::Output();
        cout << "Microphone: " << microphone << endl;
    }
};

class GamePC : public PC {
    string keyboard, headphones;

public:
    GamePC(string name, string cpu, string gpu, string ssd, string ram, double price, string keyboard, string headphones)
        : PC(name, cpu, gpu, ssd, ram, price), keyboard(keyboard), headphones(headphones) {}

    void Output() {
        PC::Output();
        cout << "Keyboard: " << keyboard << endl;
        cout << "Headphones: " << headphones << endl;
    }
};

class HomePC : public PC {
    string webcam;

public:
    HomePC(string name, string cpu, string gpu, string ssd, string ram, double price, string webcam)
        : PC(name, cpu, gpu, ssd, ram, price), webcam(webcam) {}

    void Output() {
        PC::Output();
        cout << "Webcam: " << webcam << endl;
    }
};

int main() {
    cout << "Menu:" << endl;
    cout << "1. Office PC" << endl;
    cout << "2. Game PC" << endl;
    cout << "3. Home PC" << endl;

    int choice;
    cout << "Choose an option (1, 2, 3): ";
    cin >> choice;

    if (choice == 1) {
        OfficePC pc("OfficePC", "Intel i5", "Integrated", "256GB", "8GB", 500, "Yes");
        pc.Output();
    }
    else if (choice == 2) {
        GamePC pc("GamePC", "AMD Ryzen 7", "NVIDIA RTX 3060", "1TB", "16GB", 1200, "Mechanical", "Gaming");
        pc.Output();
    }
    else if (choice == 3) {
        HomePC pc("HomePC", "Intel i3", "Integrated", "512GB", "8GB", 700, "Built-in");
        pc.Output();
    }
    else {
        cout << "Invalid choice!" << endl;
    }
}
