#include <cassert>
#include <iostream>
#include <string>

#include "sensor_nivel.hpp"

int main() {
    SensorNivel sensor{"LT-101", 42.5, "%"};

    assert(sensor.tag() == "LT-101");
    assert(sensor.valor() == 42.5);
    assert(sensor.unidade() == "%");
    assert(!sensor.estaAtivo());

    sensor.ativar();
    assert(sensor.estaAtivo());

    sensor.desativar();
    assert(!sensor.estaAtivo());

    std::cout << "OK checkpoint 01 C++: interface e estado operacional confirmados\n";
    return 0;
}
