//C言語の入出力関数(printfなど)を
//使用するのに必要
#include <stdio.h>

//C++の入出力オブジェクトを
//使用するのに必要
#include <iostream>
#include "first_make_file.h"

int main()
{
    printf("printfによる出力\n");

    //C++的な書き方
    std::cout << "coutによる出力\n";

    getchar();
}