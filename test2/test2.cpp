#include "gtest/gtest.h"

/*
main関数あり
*/

TEST(Test2, test22)
{
    ASSERT_EQ(1, 1);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();

}