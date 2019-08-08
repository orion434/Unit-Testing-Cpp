#define CATCH_CONFIG_MAIN
#include "../src/libs/catch.hpp"
#include "../src/point.hpp"

TEST_CASE("Creating a Point", "[point]") {
    Point p;

    REQUIRE(p.getX() == 0);
    REQUIRE(p.getY() == 0);
}

TEST_CASE("Creating and Setting Values to a Point", "[point]") {
    Point p;
    p.setX(2);
    p.setY(3);

    REQUIRE(p.getX() == 2);
    REQUIRE(p.getY() == 3);
}