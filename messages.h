#define REQUEST_NORMAL_CODE             0xA5

#define REQUEST_NORMAL_LENGTH           27

#define REQUEST_NORMAL_TYPE             1
#define REQUEST_NORMAL_FLAGS            2
#define REQUEST_NORMAL_MARCH            3
#define REQUEST_NORMAL_LAG              5
#define REQUEST_NORMAL_DEPTH            7
#define REQUEST_NORMAL_ROLL             9
#define REQUEST_NORMAL_PITCH            11
#define REQUEST_NORMAL_YAW              13

#define REQUEST_NORMAL_LIGHT            15
#define REQUEST_NORMAL_GRAB             16
#define REQUEST_NORMAL_TILT             17
#define REQUEST_NORMAL_ROTATE           18
#define REQUEST_NORMAL_BT               19
#define REQUEST_NORMAL_BOTTOM_LIGHT     20

#define REQUEST_NORMAL_STABILIZE_DEPTH  21
#define REQUEST_NORMAL_STABILIZE_ROLL   22
#define REQUEST_NORMAL_STABILIZE_PITCH  23
#define REQUEST_NORMAL_STABILIZE_YAW    24
#define REQUEST_NORMAL_RESET_IMU        25

#define REQUEST_NORMAL_CHECKSUM         26



// Важно оставить в рабочем состоянии!
#define REQUEST_DIRECT_CODE             0xAA

#define REQUEST_DIRECT_LENGTH           12

#define REQUEST_DIRECT_TYPE             1
#define REQUEST_DIRECT_1                2
#define REQUEST_DIRECT_2                3
#define REQUEST_DIRECT_3                4
#define REQUEST_DIRECT_4                5
#define REQUEST_DIRECT_5                6
#define REQUEST_DIRECT_6                7
#define REQUEST_DIRECT_7                8
#define REQUEST_DIRECT_8                9
#define REQUEST_DIRECT_CHECKSUM         10

// В разработке
#define REQUEST_CONFIG_CODE             0x55

#define REQUEST_CONFIG_LENGTH           152

#define REQUEST_CONFIG_TYPE             1

#define REQUEST_CONFIG_CONST_TIME_DEPTH 2
#define REQUEST_CONFIG_CONST_TIME_ROLL  3
#define REQUEST_CONFIG_CONST_TIME_PITCH 4
#define REQUEST_CONFIG_CONST_TIME_YAW   5

#define REQUEST_CONFIG_K1_DEPTH         6
#define REQUEST_CONFIG_K2_DEPTH         10
#define REQUEST_CONFIG_START_DEPTH      14
#define REQUEST_CONFIG_GAIN_DEPTH       18

#define REQUEST_CONFIG_K1_ROLL          22
#define REQUEST_CONFIG_K2_ROLL          26
#define REQUEST_CONFIG_START_ROLL       30
#define REQUEST_CONFIG_GAIN_ROLL        34

#define REQUEST_CONFIG_K1_PITCH         38
#define REQUEST_CONFIG_K2_PITCH         42
#define REQUEST_CONFIG_START_PITCH      46
#define REQUEST_CONFIG_GAIN_PITCH       50

#define REQUEST_CONFIG_K1_YAW           54
#define REQUEST_CONFIG_K2_YAW           58
#define REQUEST_CONFIG_START_YAW        62
#define REQUEST_CONFIG_GAIN_YAW         66

#define REQUEST_CONFIG_POSITION_HLB     70
#define REQUEST_CONFIG_POSITION_HLF     71
#define REQUEST_CONFIG_POSITION_HRB     72
#define REQUEST_CONFIG_POSITION_HRF     73
#define REQUEST_CONFIG_POSITION_VB      74
#define REQUEST_CONFIG_POSITION_VF      75
#define REQUEST_CONFIG_POSITION_VL      76
#define REQUEST_CONFIG_POSITION_VR      77

#define REQUEST_CONFIG_INVERSE_HLB      78
#define REQUEST_CONFIG_INVERSE_HLF      79
#define REQUEST_CONFIG_INVERSE_HRB      80
#define REQUEST_CONFIG_INVERSE_HRF      81
#define REQUEST_CONFIG_INVERSE_VB       82
#define REQUEST_CONFIG_INVERSE_VF       83
#define REQUEST_CONFIG_INVERSE_VL       84
#define REQUEST_CONFIG_INVERSE_VR       85

#define REQUEST_CONFIG_K_FORWARD_HLB    86
#define REQUEST_CONFIG_K_FORWARD_HLF    90
#define REQUEST_CONFIG_K_FORWARD_HRB    94
#define REQUEST_CONFIG_K_FORWARD_HRF    98
#define REQUEST_CONFIG_K_FORWARD_VB     102
#define REQUEST_CONFIG_K_FORWARD_VF     106
#define REQUEST_CONFIG_K_FORWARD_VL     110
#define REQUEST_CONFIG_K_FORWARD_VR     114

#define REQUEST_CONFIG_K_BACKWARD_HLB   118
#define REQUEST_CONFIG_K_BACKWARD_HLF   122
#define REQUEST_CONFIG_K_BACKWARD_HRB   126
#define REQUEST_CONFIG_K_BACKWARD_HRF   130
#define REQUEST_CONFIG_K_BACKWARD_VB    134
#define REQUEST_CONFIG_K_BACKWARD_VF    138
#define REQUEST_CONFIG_K_BACKWARD_VL    142
#define REQUEST_CONFIG_K_BACKWARD_VR    146

#define REQUEST_CONFIG_CHECKSUM         150




#define RESPONSE_LENGTH                 63

#define RESPONSE_ROLL                   0
#define RESPONSE_PITCH                  2
#define RESPONSE_YAW                    4

#define RESPONSE_ROLL_SPEED             6
#define RESPONSE_PITCH_SPEED            8
#define RESPONSE_YAW_SPEED              10

#define RESPONSE_PRESSURE               12

#define RESPONSE_AGAR                   14

#define RESPONSE_VMA_CURRENT_HLB        22
#define RESPONSE_VMA_CURRENT_HLF        24
#define RESPONSE_VMA_CURRENT_HRB        26
#define RESPONSE_VMA_CURRENT_HRF        28
#define RESPONSE_VMA_CURRENT_VB         30
#define RESPONSE_VMA_CURRENT_VF         32
#define RESPONSE_VMA_CURRENT_VL         34
#define RESPONSE_VMA_CURRENT_VR         36


#define RESPONSE_VMA_VELOCITY_HLB       38
#define RESPONSE_VMA_VELOCITY_HLF       39
#define RESPONSE_VMA_VELOCITY_HRB       40
#define RESPONSE_VMA_VELOCITY_HRF       41
#define RESPONSE_VMA_VELOCITY_VB        42
#define RESPONSE_VMA_VELOCITY_VF        43
#define RESPONSE_VMA_VELOCITY_VL        44
#define RESPONSE_VMA_VELOCITY_VR        45

#define RESPONSE_DEV_CURRENT_1          46
#define RESPONSE_DEV_CURRENT_2          48
#define RESPONSE_DEV_CURRENT_3          50
#define RESPONSE_DEV_CURRENT_4          52
#define RESPONSE_DEV_CURRENT_5          54
#define RESPONSE_DEV_CURRENT_6          56

#define RESPONSE_VMA_ERRORS             58

#define RESPONSE_DEV_ERRORS             60

#define RESPONSE_CHECKSUM               61
