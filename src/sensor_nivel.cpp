#include "sensor_nivel.hpp"

#include <iomanip>
#include <sstream>
#include <utility>

namespace {
std::string formatarValor(double valor) {
    std::ostringstream saida;
    saida << std::setprecision(12) << valor;
    return saida.str();
}
}

SensorNivel::SensorNivel(std::string tagInicial, double valorInicial, std::string unidadeInicial)
    : tag(std::move(tagInicial)), valor(valorInicial), unidade(std::move(unidadeInicial)) {
}

std::string SensorNivel::resumo() const {
    const std::string sufixo = unidade.empty() ? "" : " " + unidade;
    return tag + ": " + formatarValor(valor) + sufixo;
}
