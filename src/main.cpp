#include <iostream>

#include "sensor_nivel.hpp"

int main() {
    const SensorNivel sensor{"LT-101", 42.5, "%"};
    std::cout << sensor.resumo() << '\n';
    std::cout << "TODO: adicionar estado operacional e registro de leituras\n";
    return 0;
}
