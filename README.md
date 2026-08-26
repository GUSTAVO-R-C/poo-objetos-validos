# Estendendo um sensor com estado e operações

Repositório-base do capítulo 04. O starter contém `SensorNivel` com `tag`, `valor`, `unidade` e `resumo()`. A atividade acrescenta estado operacional e registro controlado de leituras.

## Requisitos e baseline

Use `g++` com C++17, Python 3, GNU Make e Git. Depois do fork e clone:

```bash
make build
make run
```

Saída inicial:

```text
LT-101: 42.5 %
TODO: adicionar estado operacional e registro de leituras
LT-101: 42.5 %
TODO: adicionar estado operacional e registro de leituras
```

## Uma branch, dois checkpoints

Use somente `pratica/01-estender-sensor` durante o encontro.

| Checkpoint | Extensão | Validação |
|---|---|---|
| 01 | estado ativo/inativo e operações de ativação | `make test ETAPA=01` |
| 02 | contador e registro controlado de leituras | `make test ETAPA=02` |

O segundo comando repete o primeiro. Os testes compilam clientes da interface pública, verificam transições em C++ e Python e comparam a saída completa dos dois programas. Não altere `tests/`, `.github/` ou `Makefile`.

## Decisão de interface

Antes de implementar, registre no PR quais elementos pertencem à interface pública e quais são detalhes internos. Os testes verificam as assinaturas públicas e o comportamento; a revisão do diff verifica se o estado ficou protegido e se a justificativa corresponde ao código.

## Entrega

Faça commits pequenos, push da branch e confira **Actions > Validação do capítulo 04**. O PR deve conter a saída do programa, resultado de `make test ETAPA=02`, link da CI, justificativa de visibilidade e `AI_LOG.md` quando houver uso de IA.

## Limite da automação

Testes visíveis não comprovam compreensão nem avaliam sozinhos todas as decisões de design. O professor também inspecionará o diff e poderá solicitar uma defesa oral curta.
