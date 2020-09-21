//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "SP3.h"
#include "redirect_io.h"

#include <string>

using namespace std;

TEST_CASE("Ejercicio #5") {
    redirect_io_t redir;
    ifstream file("test_5.in");
    int n = 0;
    int result = 0;
    while (!file.eof())
    {
        redir.redirect();
        file >> n; redir << n;
        ejercicio_5();
        file >> n; redir >> result;
        redir.reestablish();
        REQUIRE(n == result);
    }
}