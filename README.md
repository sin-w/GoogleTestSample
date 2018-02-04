# GoogleTestSample

## 概要
このプロジェクトはUbuntu16でcmakeとGoogleTestを使ってテストを走らせるための
簡単なサンプルです。


## 環境
Ubuntu16.04 64bit

## GoogleTestのインストール
/usr/local/src/gtestに展開した場合の作業  
サンプルは/usr/local/src/gtestにGoogleTestがインストールされている前提で設定してあります。
sudo git clone https://github.com/google/googletest.git /usr/local/src/gtest  
cd /usr/local/src/gtest  
sudo mkdir build  
cd build  
sudo cmake  
sudo make  
makeが成功すれば完了です。  

## GoogleTestのサンプルアプリの実行
ユーザホームディレクトリ直下で作業する場合。
cd ~  
git clone https://github.com/sin-w/GoogleTestSample.git  
cd GoogleTestSample  
cmake CMakeLists.txt  
make  
make test  

Running tests...  
Test project /home/user/work/github/GoogleTestSample  
    Start 1: test01  
1/2 Test #1: test01 ...........................   Passed    0.01 sec  
    Start 2: test02  
2/2 Test #2: test02 ...........................   Passed    0.00 sec  

100% tests passed, 0 tests failed out of 2  

Total Test time (real) =   0.01 sec  
こんな感じで出れば成功です。


