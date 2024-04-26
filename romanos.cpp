// Copyright 2024 <Mariana Oliveira>
#include "./romanos.hpp"
#include <unordered_map>
#include <string>

std::string ArabicoParaRomano(int numero) {
    if (numero <= 0 || numero >= 4000) {
        return "Número inválido";
    }
    std::unordered_map<int, std::string> valores = {
        {1, "I"}, {4, "IV"}, {5, "V"}, {9, "IX"},
        {10, "X"}, {40, "XL"}, {50, "L"},
        {90, "XC"}, {100, "C"}, {400, "CD"},
        {500, "D"}, {900, "CM"}, {1000, "M"}
    };
    std::string romano = "";
    int base[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    for (int converter : base) {
        while (numero >= converter) {
            romano += valores[converter];
            numero -= converter;
        }
    }
    return romano;
}
int converterRomanoParaArabico(const std::string& converter) {
    std::unordered_map<char, int> valores = {
        {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
        {'C', 100}, {'D', 500}, {'M', 1000}
    };
    int total = 0;
    int ultimo_valor = 0;
    int repeticao = 0;
    for (int i = converter.size() - 1; i >= 0; i--) {
        int valor = valores[converter[i]];
        if (valor < ultimo_valor) {
            total -= valor;
            repeticao = 0;
        } else {
            if (valor == ultimo_valor) {
                repeticao++;
                if (repeticao > 3) {
                    return -1;
                }
            } else {
                repeticao = 1;
            }
            total += valor;
        }
        ultimo_valor = valor;
    }
    std::string converter_convertido = ArabicoParaRomano(total);
    if (converter == converter_convertido) {
        return total;
    } else {
        return -1;
    }
}