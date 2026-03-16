#include "core_mcu.hpp"

Core_MCU::Core_MCU(std::string nama) {
    this->nama = nama;
    std::cout << "[Core MCU] : MCU utama yang bernama " << nama << " telah dibuat" << std::endl;
}

Core_MCU::~Core_MCU() {
    std::cout << "[Core MCU] : MCU utama yang bernama " << nama << " telah dihapus" << std::endl;
}

void Core_MCU::tambahDevice(std::string nama, float cpu_clock, int memory, std::string os) {
    Device d = {nama, cpu_clock, memory, os};
    devices.push_back(d);
    std::cout << "[SPEK DEVICE] : [NAMA_DEVICE]: " << nama 
              << " | [CPU CLOCK] : " << cpu_clock 
              << " | [MEMORY] : " << memory 
              << " | [OS] : " << os << std::endl;
}

std::string Core_MCU::ambilOS(std::string nama_os) {
    for (auto& d : devices) {
        if (d.os == nama_os) return d.os;
    }
    return "";
}

void Core_MCU::ubahVoltase(std::string nama_device, int voltase) {
    std::cout << "[Core MCU] : MCU utama yang bernama " << nama_device 
              << " Telah ditambah voltasenya menjadi = " << voltase << std::endl;
}

void Core_MCU::gantiOS(std::string nama_device, std::string os_baru) {
    for (auto& d : devices) {
        if (d.nama == nama_device) {
            d.os = os_baru;
        }
    }
    std::cout << "[Core MCU] : MCU utama yang bernama " << nama_device 
              << " Telah diganti OS nya menjadi = " << os_baru << std::endl;
}


void Core_MCU::tampilSpek() {
    for (auto& d : devices) {
        std::cout << "[SPEK DEVICE] : [NAMA_DEVICE]: " << d.nama
                  << " | [CPU CLOCK] : " << d.cpu_clock
                  << " | [MEMORY] : " << d.memory
                  << " | [OS] : " << d.os << std::endl;
    }
}
