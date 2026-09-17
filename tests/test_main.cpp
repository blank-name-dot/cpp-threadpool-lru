#include <gtest/gtest.h>

// 第 1 步占位测试：验证 gtest 能编译链接、CI 能跑 ctest。
// 第 2 步开始替换为 LRU 的真实测试，最终要 >= 8 个。
TEST(Skeleton, BuildsAndLinks) { EXPECT_EQ(1 + 1, 2); }
