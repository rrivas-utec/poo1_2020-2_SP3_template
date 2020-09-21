//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "SP3.h"
#include "redirect_io.h"

#include <fstream>
#include <string>

using namespace std;

TEST_CASE("Ejercicio #3") {
    redirect_io_t redir;
    ifstream file("test_3.in");
    string line;
    string result;
    while (!file.eof())
    {
        redir.redirect();
        int n;
        file >> n; redir << n;
        ejercicio_3();
        file >> line; redir >> result;
        redir.reestablish();
        REQUIRE(line == result);
    }
}