# cmake Document https://cmake.org/cmake/help/v3.5/index.html

# google testのパスを環境変数GTEST_ROOTに設定
set(GTEST_ROOT /usr/local/src/gtest)

# インクルードディレクトリを指定
include_directories(
    ${GTEST_ROOT}/googletest/include
    ${GTEST_ROOT}/googlemock/include
    )

# ポリシーを設定、今回はCMP0003のワーニングが出てたのでとりあえず対処
cmake_policy(SET CMP0003 OLD)

# 実行ファイル名と対象ソースを指定、複数ファイルの場合は後ろに追加 source1 source2 ...
add_executable(test1 test1.cpp)

# リンク設定　ターゲット名(基本的には実行ファイル名) ライブラリ1 ライブラリ2 ...
target_link_libraries(test1 
    ${GTEST_ROOT}/build/googlemock/gtest/libgtest.a
    ${GTEST_ROOT}/build/googlemock/gtest/libgtest_main.a
    pthread
    )
