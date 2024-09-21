# Aula 7
## Data: 20/09/2024

## Sistema Computacional

```
Atividades:
  - 
```

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
### O que é um sistema operacional?
  - "É uma grande api e um gerenciador de tarefas"
  -  Camada de software que realiza a conexão entre o hardware e os programas aplicativos

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
### Historia dos SOs

  - Primeira geração (1945 - 1955)
  - Segunda geração (1955 - 1965)
  - Terceira geração (1965 - 1980)
  - Quarta geração (1980 - atual)
  - Se debate sobre uma quinta com o cloud computing

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
### System Call
  - "Chamadas na API" do sistema operacional
  - Rotinas construidas no sistema operacional para poder usar o hardware

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
### Abstração de recursos

  - O sistema operacional atua como uma abstração de alto nível para prover uma interface simples e homogênea para os recursos que gerencia:
    - Simplifica o uso das interface de baixo nível
    - Torna os aplicativos independentes do hardware 
    - Interface homogênea a dispositivos com tecnologias diferentes

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
### Abstração de Recursos

  - O sistema operacional atua como uma abstração de alto nível para prover uma interface simples e homogênea para os recursos que gerencia:
    - Simplifica o uso das interface de baixo nível
    - Torna os aplicativos independentes do hardware 
    - Interface homogênea a dispositivos com tecnologias diferentes

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
### Gerencia de Recursos

O sistema operacional gerencia o uso dos recursos de hardware utilizados pelos programas:
  - Compartilhamento de recursos de processamento: processador
  - Compartilhamento de recursos de armazenamento: memória
  - Compartilhamento de recursos de e/s: uso de impressora

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
### Tipos de SOs

  - BATCH 
    - Executa tarefas sequenciais
  - REDE
    - Permite o acesso a recursos em rede
  - DISTRIBUÍDO
    - Acessa recursos distribuídos em rede de forma transparente
  - MULTIUSUÁRIO
    - Gerencia compartilhamento de recursos entre usuários
  - SERVIDOR
    - Gestão eficiente de volume grande de recursos
  - DESKTOP
    - Sistema com suporte à Interface Gráfica e interatividade
  - MÓVEL
    - Sistema adequado à dispositivos móveis (energia, sensores, conectividade)
  - EMBARCADO
    - Hardware com poucos recursos e energia
  - TEMPO REAL
    - Comportamento temporal previsível (sistema que opera em um deltaT conhecido, exemplo freio de F1)
      - Soft real-time (em torno de X segundos)
      - Hard real-time (precisa ser em X segundos)

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
### Componentes de um SO

  - Nucelo ou Kernel
    - Gerencia os recursos do hardware e implementa as principais abstrações utilizadas pelos aplicativos

  - Inicialização
    - Reconhece os dispositivos de hardware e carrega o núcleo do sistema na memória.

  - Drivers
    - Correspondem ao código para acessar os dispositivos físicos. 

  - Utilitários
    - Software que implementa funcionalidades complementares tais como: formatação de discos, interfaces textuais (shell de comandos), interface gráfica, etc.

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
### Interrupções, Exceções e Traps


----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
