#include "gtest/gtest.h"

/*
main関数あり
*/
// テストケース名(グループ名)　テスト名　両方共アンダースコア(_)を含んではダメ
TEST(Test2, test22)
{
    ASSERT_EQ(1, 1);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();

}