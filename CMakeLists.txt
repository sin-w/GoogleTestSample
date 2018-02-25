# cmake Document https://cmake.org/cmake/help/v3.5/index.html

# cmakeのバージョンを設定
cmake_minimum_required(VERSION 3.5)

# CTESTを有効にする
enable_testing()

# ビルド対象にtest1ディレクトリを追加
add_subdirectory(test1)

# テストを追加する　テスト名、実行コマンド
add_test(test01 ./test1/test1)

# ビルド対象にtest2ディレクトリを追加
add_subdirectory(test2)

# テストを追加する　テスト名、実行コマンド
add_test(test02 ./test2/test2)
