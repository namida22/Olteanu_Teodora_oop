//
// Created by Teo on 13.03.2020.
//
#include "gtest/gtest.h"
#include <cmath>
#include "complex.h"

complex create_rational_number(){
    return complex(1,2);
}

TEST(NumarComplexTestSuite, ABSTest){
    complex complex = create_rational_number();
    ASSERT_EQ(sqrt(5),complex.abs());
}
TEST(NumarComplexTestSuite, PolarTest){
    complex complex = create_rational_number();
    ASSERT_EQ(2*sqrt(5),complex.compute_polar());
}
TEST(NumarComplexTestSuite, AddTest){
    complex complex = create_rational_number();
    ASSERT_EQ(sqrt(3)+1,complex.add(sqrt(3),4));
}
TEST(NumarComplexTestSuite, MultTest){
    complex complex = create_rational_number();
    ASSERT_EQ(8,complex.mult(sqrt(3),4));
}
TEST(NumarComplexTestSuite, QuotTest){
    complex complex = create_rational_number();
    ASSERT_EQ(1.0/5,complex.quot(5,7));
}