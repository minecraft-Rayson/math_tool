#include "score.h"
using namespace about_score;

int* score::addition(int one_up, int two_up, int one_down, int two_down){
    int denominator=one_down * two_down, numerator_1=two_down * one_up, numerator_2=one_down * two_up;
    int numerator=numerator_1 + numerator_2;
    static int back[2]={denominator, numerator};
    return back;
}