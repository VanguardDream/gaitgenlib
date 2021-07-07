#include "gg.h"
gg::gg(/* args */)
{
    // parameter for vertical wave
    float _ver_amp_d = 0.0f;
    float _ver_phase_d = 0.0f;

    // parameter for sinuous wave
    float _sin_amp_d = 0.0f;
    float _sin_amp_l = 0.0f;
    float _sin_phase_d = 0.0f;
    float _sin_phase_l = 0.0f;

    // parameter for sidewind
    float _side_amp_d = 0.0f;
    float _side_amp_l = 0.0f;
    float _side_phase_d = 0.0f;
    float _side_phase_l = 0.0f;
}

gg::~gg()
{

}

int gg::init()
{
    //Initializing Eigen variables.
    ver_M.resize(15,8);
    ver_P.resize(15,1);

    sin_M.resize(15,15);
    sin_P.resize(15,1);

    side_M.resize(15,15);
    side_P.resize(15,1);

    ver_M << \
    1,0,0,0,0,0,0,0,\
    0,0,0,0,0,0,0,0,\
    0,1,0,0,0,0,0,0,\
    0,0,0,0,0,0,0,0,\
    0,0,1,0,0,0,0,0,\
    0,0,0,0,0,0,0,0,\
    0,0,0,1,0,0,0,0,\
    0,0,0,0,0,0,0,0,\
    0,0,0,0,1,0,0,0,\
    0,0,0,0,0,0,0,0,\
    0,0,0,0,0,1,0,0,\
    0,0,0,0,0,0,0,0,\
    0,0,0,0,0,0,1,0,\
    0,0,0,0,0,0,0,0,\
    0,0,0,0,0,0,0,1;

    std::cout << "ver_M rows : " << ver_M.rows() << "ver_M cols : " << ver_M.cols() << std::endl;
    std::cout << ver_M << std::endl;
    return 0;
}

int gg::setparam(int gait, int numparam, float param)
{
    return 0;
}

float *gg::gen(int time)
{
    return 0;
}