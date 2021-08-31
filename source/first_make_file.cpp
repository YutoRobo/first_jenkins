//C言語の入出力関数(printfなど)を
//使用するのに必要
#include <stdio.h>

//C++の入出力オブジェクトを
//使用するのに必要
#include <iostream>
#include "hello_world.h"

int main()
{
    HelloWorld helloWorld;
    helloWorld.printScreen();

    //C++的な書き方
    std::cout << "coutによる出力\n";
    int i;
    int j;
    int k;
    getchar();
}