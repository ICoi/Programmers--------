//
//  ReportMain.hpp
//  Programmers_TestProj
//
//  Created by 정다운 on 2022/02/02.
//

#ifndef ReportMain_hpp
#define ReportMain_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;



class ReportMain {
public:
    void doTest();
private:
    vector<int> solution(vector<string> id_list, vector<string> report, int k);
};

#endif /* ReportMain_hpp */
