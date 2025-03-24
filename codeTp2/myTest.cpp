#include "Calculator.h"
#include <gtest/gtest.h>

TEST(CalculatorTest, Add)
{
    Calculator calc;
    ASSERT_EQ(3, calc.add(1, 2));
}

TEST(CalculatorTest, Sub)
{
    Calculator calc;
    ASSERT_EQ(1, calc.sub(2, 1));
}

TEST(CalculatorTest, DISABLED_Factorial)
{
    Calculator calc;
    ASSERT_EQ(1, calc.factorielle(0));
    ASSERT_EQ(1, calc.factorielle(1));
    ASSERT_EQ(120, calc.factorielle(5));
}

TEST(CalculatorTest, Div)
{
    Calculator calc;
    EXPECT_DOUBLE_EQ(0.5, calc.div(1, 2));
    EXPECT_DOUBLE_EQ(2, calc.div(4, 2));
    // EXPECT_ANY_THROW(calc.div(1, 0));
    EXPECT_NEAR(2.333, calc.div(7, 3), 0.001);
    EXPECT_EXIT(calc.div(7, 0), ::testing::ExitedWithCode(255), "Error: Division by 0 not possible");
}

TEST(CalculatorTest, Mult)
{
    Calculator calc;
    ASSERT_EQ(6, calc.mult(2, 3));
}

TEST(CalculatorTest, Pow)
{
    Calculator calc;
    ASSERT_EQ(8, calc.power(2, 3));
}