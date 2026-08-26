#!/usr/bin/env bash
set -euo pipefail

esperado_cpp=$'LT-101: 42.5 % | inativo | leituras: 0\nLeitura aceita: true\nLT-101: 55 % | ativo | leituras: 1'
esperado_python=$'LT-101: 42.5 % | inativo | leituras: 0\nLeitura aceita: True\nLT-101: 55 % | ativo | leituras: 1'

obtido_cpp=$(./build/sensor)
obtido_python=$(PYTHONPATH=src python3 src/main.py)

if [[ "${obtido_cpp}" != "${esperado_cpp}" ]]; then
    echo "FALHA saida C++: execute ./build/sensor e compare com o contrato do README."
    diff -u <(printf '%s\n' "${esperado_cpp}") <(printf '%s\n' "${obtido_cpp}") || true
    exit 1
fi

if [[ "${obtido_python}" != "${esperado_python}" ]]; then
    echo "FALHA saida Python: execute PYTHONPATH=src python3 src/main.py e compare com o contrato do README."
    diff -u <(printf '%s\n' "${esperado_python}") <(printf '%s\n' "${obtido_python}") || true
    exit 1
fi

echo "OK saida: programas C++ e Python produziram o contrato esperado"
