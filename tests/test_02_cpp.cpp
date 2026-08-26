#include <cassert>
#include <iostream>

#include "sensor_nivel.hpp"

int main() {
    SensorNivel sensor{"LT-101", 42.5, "%"};

    assert(sensor.totalLeituras() == 0);
    assert(!sensor.registrarLeitura(50.0));
    assert(sensor.valor() == 42.5);
    assert(sensor.totalLeituras() == 0);

    sensor.ativar();
    assert(sensor.registrarLeitura(55.0));
    assert(sensor.valor() == 55.0);
    assert(sensor.totalLeituras() == 1);

    assert(!sensor.registrarLeitura(-0.1));
    assert(sensor.valor() == 55.0);
    assert(sensor.totalLeituras() == 1);

    assert(!sensor.registrarLeitura(100.1));
    assert(sensor.valor() == 55.0);
    assert(sensor.totalLeituras() == 1);

    sensor.desativar();
    assert(!sensor.registrarLeitura(60.0));
    assert(sensor.valor() == 55.0);
    assert(sensor.totalLeituras() == 1);

    assert(sensor.resumo() == "LT-101: 55 % | inativo | leituras: 1");

    std::cout << "OK checkpoint 02 C++: registro e preservacao confirmados\n";
    return 0;
}
