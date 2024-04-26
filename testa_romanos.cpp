// Copyright 2024 <Mariana Oliveira>

#define CATCH_CONFIG_MAIN
#include "./catch.hpp"
#include "./romanos.hpp"


TEST_CASE("Conversão de números romanos para arábicos") {
    SECTION("Teste com algarismos simples") {
        REQUIRE(converterRomanoParaArabico("I") == 1);
        REQUIRE(converterRomanoParaArabico("V") == 5);
        REQUIRE(converterRomanoParaArabico("X") == 10);
        REQUIRE(converterRomanoParaArabico("X") == 10);
        REQUIRE(converterRomanoParaArabico("L") == 50);
        REQUIRE(converterRomanoParaArabico("C") == 100);
        REQUIRE(converterRomanoParaArabico("D") == 500);
        REQUIRE(converterRomanoParaArabico("M") == 1000);
    }
    SECTION("Teste com algarismos compostos") {
        REQUIRE(converterRomanoParaArabico("IV") == 4);
        REQUIRE(converterRomanoParaArabico("IX") == 9);
        REQUIRE(converterRomanoParaArabico("XL") == 40);
        REQUIRE(converterRomanoParaArabico("XC") == 90);
        REQUIRE(converterRomanoParaArabico("CD") == 400);
        REQUIRE(converterRomanoParaArabico("CM") == 900);
    }
    SECTION("Teste com números maiores") {
        REQUIRE(converterRomanoParaArabico("MMXIX") == 2019);
        REQUIRE(converterRomanoParaArabico("MMMCMXCIX") == 3999);
    }
    SECTION("Teste com números inválidos") {
        REQUIRE(converterRomanoParaArabico("IC") == -1);
        REQUIRE(converterRomanoParaArabico("XD") == -1);
        REQUIRE(converterRomanoParaArabico("IM") == -1);
        REQUIRE(converterRomanoParaArabico("IIII") == -1);
    }
}



