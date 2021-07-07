#include <stdio.h>
#include <iostream>
#include <math.h>
#include <eigen3/Eigen/Core>

class gg
{
private:
    // parameter for vertical wave
    float _ver_amp_d;
    float _ver_phase_d;

    // parameter for sinuous wave
    float _sin_amp_d;
    float _sin_amp_l;
    float _sin_phase_d;
    float _sin_phase_l;

    // parameter for sidewind
    float _side_amp_d;
    float _side_amp_l;
    float _side_phase_d;
    float _side_phase_l;
    
    Eigen::MatrixXf ver_M;
    Eigen::MatrixXf sin_M;
    Eigen::MatrixXf side_M;

    Eigen::VectorXf ver_P;
    Eigen::VectorXf sin_P;
    Eigen::VectorXf side_P;

public:
    gg(/* args */);
    ~gg();

    int init();
    int setparam(int gait, int numparam, float param); //gait number and param.
    float *gen(int time); //recommended time diff is 0.005s (5ms).
};

