//
//  LottoMain.hpp
//  Programmers_TestProj
//
//  Created by 정다운 on 2022/02/02.
//

#ifndef LottoMain_hpp
#define LottoMain_hpp

#include <stdio.h>

#include <string>
#include <vector>
#include <iostream>


using namespace std;

class LottoMain {
public:
    void doTest();
    
private:
    vector<int> solution(vector<int> lottos, vector<int> win_nums);
    int getresult(int);
};
#endif /* LottoMain_hpp */
