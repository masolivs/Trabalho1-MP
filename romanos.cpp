// Copyright 2024 <Mariana Oliveira>
#include "./romanos.hpp"

int converterRomanoParaArabico(const std::string& numeroRomano) {
  int arabico = 0;
  int valorAnterior = 0;

  for (int i = numeroRomano.size() - 1; i >= 0; --i) {
    char algarismo = numeroRomano[i];
        int valor = 0;
        switch (algarismo) {
            case 'I': valor = 1; break;
            case 'V': valor = 5; break;
            case 'X': valor = 10; break;
            case 'L': valor = 50; break;
            case 'C': valor = 100; break;
            case 'D': valor = 500; break;
            case 'M': valor = 1000; break;
            default: return -1;
  }
  if (valor < valorAnterior) {
    arabico -= valor;
  } else {
    arabico += valor;
  }
  valorAnterior = valor;
    }
  return arabico;
}