#include "core_mcu.hpp"

int main() {
    Core_MCU mcu1("Raspberry Pi");
    mcu1.tambahDevice("Raspberry Pi", 1.4, 512, "ubuntu 22.04");

    Core_MCU mcu2("intel_nuc");
    mcu2.tambahDevice("intel_nuc", 4.6, 16512, "windows_11");

    std::string os = mcu1.ambilOS("ubuntu 22.04");
    std::cout << "Ambil OS [nama OS] : " << os << std::endl;

    mcu1.ubahVoltase("Raspberry Pi", 7);
    mcu2.gantiOS("intel_nuc", "ubuntu 24.04");

    mcu1.tampilSpek();
    mcu2.tampilSpek();

    return 0;
}