# Aula 4 
## Data: 30/08/2024

```
Atividades:
  - 
```

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

### Criptografia Simétrica e Assimétrica:

  Técnicas de segurança que permitem transformar dados em códigos indecifráveis para pessoas sem a chave correta.
  Elas mantém a privacidade e a autenticidade.
  A responsabilidade sobre a chave privada é 100% do seu dono e deve ser mantido em segurança total.

#### - Criptografia Simétrica
  Chave publica + chave privada (uma criptografa e uma descriptografa).

#### - Criptografia Assimétrica
  Usa uma única chave para criptografar e descriptografar (chave secreta).

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

### Assinatura digital e assinatura eletrônica:
  
  Assinatura eletrônica e assinatura digital são termos relacionados, mas não são a mesma coisa12345:

#### - Assinatura eletrônica
  É a categoria que engloba todos os tipos de assinatura realizadas eletronicamente. Pode incluir senhas e outros métodos de validação de identidade no meio virtual.

#### - Assinatura digital
  É um tipo específico de assinatura eletrônica que utiliza criptografia para garantir a autenticidade e integridade dos documentos digitais. É chamada de assinatura eletrônica qualificada e utiliza certificado digital ICP-Brasil.

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

### Função Hash criptográfica:
  Função unidirecional que transforma uma entrada de n bits e retorna uma saída com um numero fixo de bits independente da entrada.
  Pode haver colisão e há perda de dados (não é reversível)

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Ao criptografar o hash de um arquivo usando uma chave privada, eu garanto que aquele hash foi gerado por mim, ao calcular o hash de um arquivo e compara-lo com o hash descriptografado pela minha chave publica, eu garanto que aquele hash gerado por mim bate com o gerado do arquivo, logo esta autenticado. Isto é assinatura.

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#### Exemplo

```
- Se eu quero mandar um arquivo para a pessoa A, de modo que apenas A possa ler.
  Criptografa com a chave publica da pessoa A

- Se eu quero mandar um arquivo para um grupo de pssoas.
  Criptografo com a minha chave privada e compartilho minha chave publica para as pessoas de interesse.
```
