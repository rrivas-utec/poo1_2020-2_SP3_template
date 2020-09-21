//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "SP3.h"
#include "redirect_io.h"

#include <string>

using namespace std;

TEST_CASE("Ejercicio #4") {
    redirect_io_t redir;
    ifstream file("test_4.in");
    string line;
    string result;
    while (!file.eof())
    {
        redir.redirect();
        getline(file, line); redir << line << " ";
        size_t n = stoi(line);
        getline(file, line); redir << line << " ";
        getline(file, line); redir << line;
        ejercicio_4();
        while (n-- > 0) {
            getline(file, line); redir.getline(result);
            REQUIRE(line == result);
        }
        redir.reestablish();
    }
}