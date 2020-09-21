//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "SP3.h"
#include "redirect_io.h"

#include <fstream>
#include <string>

using namespace std;

TEST_CASE("Ejercicio #2") {
    redirect_io_t redir;
    ifstream file("test_2.in");
    string line;
    string result;
    while (!file.eof())
    {
        redir.redirect();
        getline(file, line); redir << line << " ";
        size_t n = stoi(line);
        while(n-- >0) {
           getline(file, line); redir << line <<" ";
        }
        ejercicio_2();
        getline(file, line); redir >> result;
        redir.reestablish();
        REQUIRE(line == result);
    }
}