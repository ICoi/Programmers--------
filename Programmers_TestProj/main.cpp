//
//  main.cpp
//  Programmers_TestProj
//
//  Created by 정다운 on 2022/02/02.
//

#include <iostream>
#include "LottoMain.hpp"
#include "ReportMain.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
//    {
//        LottoMain lm = LottoMain();
//        lm.doTest();
//    }
    {
        ReportMain rm = ReportMain();
        rm.doTest();
    }
    return 0;
}
