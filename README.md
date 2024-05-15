# Conversor de Números Romanos para Arábicos

Este é um programa em C++ para converter números romanos em números arábicos.

## Funcionalidades

validarNumeroRomano(const std::string& numeroRomano): Esta função verifica se um número romano é válido ou não, retornando verdadeiro se for válido e falso caso contrário.


converterRomanoParaArabico(const std::string& numeroRomano): Esta função converte um número romano em seu equivalente arábico. Se o número romano não for válido, o valor retornado será -1.

## Desenvolvimento

Este programa foi desenvolvido utilizando a metodologia de Desenvolvimento Orientado a Testes (TDD). Foram implementados testes automatizados para garantir a corretude das funções em diferentes cenários.

## Execução

Você pode executar o programa utilizando o Makefile fornecido. Abaixo estão algumas regras úteis:

make cpplint: Executa o linter para verificar a conformidade do código com as diretrizes de estilo.

make all: Executa todos os testes para garantir a integridade do código.

make clean: Remove todos os arquivos gerados durante a compilação.
