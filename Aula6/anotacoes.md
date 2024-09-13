# Aula 6
## Data: 13/09/2024

## Segurança em SO

```
Atividades:
  - 
```

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Criptografia = Cifragem: Tipo específico de codificação.

Codificação: Apresentar o conteudo em um formato diferente.

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
### Segurança de Rede

  - Confidencialidade:
      Apenas o remetente e o destinatario devem entender o conteudo da mensagem (remetente criptografa - destinatario descriptografa)
    
  - Autenticação:
      Remetente e destinatario querem "saber quem o outro é"
    
  - Integridade:
      Remetente e destinatario querem garantir que a mensagem não seja alterada
  
  - Acesso e disponibilidade:
      Serviços devem estar disponiveis e acessivei para os usuários.

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
### Principios de Segurança

  - Criptografia
    - C = E(P*Ke):
      - Onde o P é mensagem, Ke é a chave de encriptação, E é o Algorítmo criptografico e C é a mensagem criptografada.
    - P = D(C*Kd):
      - Onde P é mensagem, D é o processo de descriptografia, C é a mensagem criptografada e Kd é a chave de decriptografia.   

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
### MBR - Livro Kurose

  - Amigos Alice e Bob e a intrusa Trudy:
      Podem ser pessoas ou sistemas e servidores.
    
  - O que pode ser feito por um intruso:
    - Eavesdrop: Interceptar mensagens;
    - Inserir:: Ativamente mensagens na conexão
    - Spoof: Falsificar o endereço de origem;
    - Hijack: Assumir uma conexão em andamento, removendo o destino ou remetente e inserindo-se no lugar
    - Denial of Service:  Impedir que o serviço seja usado por outros (por exemplo, sobrecarregando recursos)

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
