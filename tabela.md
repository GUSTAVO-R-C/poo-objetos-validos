| Elemento | Público ou interno? | Justificativa |
|---|---|---|
| estado ativo/inativo | **Interno** | É um atributo que representa a situação atual do sistema e deve ser controlado pela própria classe. |
| contador de leituras | **Interno** | É um dado utilizado para armazenar e controlar a quantidade de leituras realizadas, não sendo necessário acesso direto externo. |
| ativar e desativar | **Público** | São operações que precisam ser solicitadas externamente para alterar o estado do sistema. |
| consulta do estado | **Público** | Permite que o usuário ou outro componente verifique se o sistema está ativo ou inativo. |
| registrarLeitura | **Público** | É uma operação que pode ser chamada externamente para registrar uma nova leitura. |
| verificação da faixa | **Interno** | É uma validação realizada pela própria classe para verificar se a leitura está dentro da faixa permitida. |
