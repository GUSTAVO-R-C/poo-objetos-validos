# Guia docente — capítulo 04

## Preparação

1. Publique este diretório como repositório-base separado.
2. Preserve `main` com o baseline compilável e o defeito observável.
3. Valide em cópia privada uma solução de referência para as duas etapas.
4. Distribua por fork ou GitHub Classroom sem publicar a solução.

## Contrato esperado, sem solução pronta

- Checkpoint 01: estado ativo/inativo, `ativar`, `desativar` e consulta pública sem escrita direta.
- Checkpoint 02: contador somente de leituras aceitas e registro permitido apenas quando o sensor está ativo e o valor pertence a `[0, 100]`.
- O estudante justifica quais atributos, operações e possíveis auxiliares são públicos ou internos.
- Exceções e sobrecarga não pertencem ao objetivo desta aula.

## Condução

Antes da prática, mostre uma comparação manual com `if`. Depois apresente `assert(condição)` como uma forma automática de interromper o teste quando a comparação for falsa. Toda a implementação ocorre em `pratica/01-estender-sensor`; os dois checkpoints não exigem troca de branch.

## Limites do autograding

Os testes são visíveis. Inspecione o diff, peça justificativa da interface pública e use um valor de fronteira adicional na defesa oral.
