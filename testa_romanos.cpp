#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "romanos.hpp"


TEST_CASE( "Conversão de números romanos para arábicos") {
    SECTION("Teste com algarismos simples") {
        REQUIRE(converterRomanoParaArabico("I") == 1 );
        REQUIRE(converterRomanoParaArabico("V") == 5 );
    }

    SECTION("Teste com algarismos compostos") {
        REQUIRE(converterRomanoParaArabico("IV") == 4);
        REQUIRE(converterRomanoParaArabico("IX") == 9);

    }
     
}



