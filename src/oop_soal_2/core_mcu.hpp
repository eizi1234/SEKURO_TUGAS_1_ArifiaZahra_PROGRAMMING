#pragma once
#include <iostream>
#include <vector>
#include <string>

struct Device {
    std::string nama;
    float cpu_clock;
    int memory;
    std::string os;
};

class Core_MCU {
private:
    std::string nama;
    std::vector<Device> devices;

public:
    Core_MCU(std::string nama);
    ~Core_MCU();
    void tambahDevice(std::string nama, float cpu_clock, int memory, std::string os);
    void tampilSpek();
    std::string ambilOS(std::string nama_os);
    void ubahVoltase(std::string nama_device, int voltase);
    void gantiOS(std::string nama_device, std::string os_baru);
};
