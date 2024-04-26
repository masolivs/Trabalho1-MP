// Copyright 2024 <Mariana Oliveira>
#include "./romanos.hpp"
#include <unordered_map>
#include <string>

bool validarNumeroRomano(const std::string& numeroRomano) {
    std::unordered_map<char, int> valores = {
        {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
        {'C', 100}, {'D', 500}, {'M', 1000}
    };
    int repeticao = 0;
    char ultimoCaractere = '\0';
    for (char c : numeroRomano) {
        if (valores.find(c) == valores.end()) {
            return false;
        }
        if (c == ultimoCaractere) {
            repeticao++;
            if ((c == 'V' || c == 'L' || c == 'D') && repeticao > 1) {
                return false;
            }
            if (repeticao > 3) {
                return false;
            }
        } else {
            repeticao = 1;
        }
        if (ultimoCaractere != '\0' && valores[c] > valores[ultimoCaractere]) {
            if (!((ultimoCaractere == 'I' && (c == 'V' || c == 'X')) ||
                  (ultimoCaractere == 'X' && (c == 'L' || c == 'C')) ||
                  (ultimoCaractere == 'C' && (c == 'D' || c == 'M')))) {
                return false;
            }
        }
        ultimoCaractere = c;
    }
    return true;
}
int converterRomanoParaArabico(const std::string& numeroRomano) {
    if (!validarNumeroRomano(numeroRomano)) {
        return -1;
    }
    std::unordered_map<char, int> valores = {
        {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
        {'C', 100}, {'D', 500}, {'M', 1000}
    };
    int total = 0;
    int ultimoValor = 0;
    for (char c : numeroRomano) {
        int valor = valores[c];
        total += valor;
        if (valor > ultimoValor) {
            total -= 2 * ultimoValor;
        }
        ultimoValor = valor;
    }
    return total;
}
