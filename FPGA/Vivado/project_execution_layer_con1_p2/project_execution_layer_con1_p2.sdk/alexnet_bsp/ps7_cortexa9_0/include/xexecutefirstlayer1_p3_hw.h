// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.4
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

// control
// 0x00 : Control signals
//        bit 0  - ap_start (Read/Write/COH)
//        bit 1  - ap_done (Read/COR)
//        bit 2  - ap_idle (Read)
//        bit 3  - ap_ready (Read)
//        bit 7  - auto_restart (Read/Write)
//        others - reserved
// 0x04 : Global Interrupt Enable Register
//        bit 0  - Global Interrupt Enable (Read/Write)
//        others - reserved
// 0x08 : IP Interrupt Enable Register (Read/Write)
//        bit 0  - Channel 0 (ap_done)
//        bit 1  - Channel 1 (ap_ready)
//        others - reserved
// 0x0c : IP Interrupt Status Register (Read/TOW)
//        bit 0  - Channel 0 (ap_done)
//        bit 1  - Channel 1 (ap_ready)
//        others - reserved
// 0x10 : Data signal of group_id_x
//        bit 31~0 - group_id_x[31:0] (Read/Write)
// 0x14 : reserved
// 0x18 : Data signal of group_id_y
//        bit 31~0 - group_id_y[31:0] (Read/Write)
// 0x1c : reserved
// 0x20 : Data signal of group_id_z
//        bit 31~0 - group_id_z[31:0] (Read/Write)
// 0x24 : reserved
// 0x28 : Data signal of bias
//        bit 31~0 - bias[31:0] (Read/Write)
// 0x2c : reserved
// 0x30 : Data signal of Layer1_Neurons_GPU
//        bit 31~0 - Layer1_Neurons_GPU[31:0] (Read/Write)
// 0x34 : reserved
// 0x38 : Data signal of Layer1_Weights_GPU
//        bit 31~0 - Layer1_Weights_GPU[31:0] (Read/Write)
// 0x3c : reserved
// 0x40 : Data signal of Layer2_Neurons_GPU
//        bit 31~0 - Layer2_Neurons_GPU[31:0] (Read/Write)
// 0x44 : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XEXECUTEFIRSTLAYER1_P3_CONTROL_ADDR_AP_CTRL                 0x00
#define XEXECUTEFIRSTLAYER1_P3_CONTROL_ADDR_GIE                     0x04
#define XEXECUTEFIRSTLAYER1_P3_CONTROL_ADDR_IER                     0x08
#define XEXECUTEFIRSTLAYER1_P3_CONTROL_ADDR_ISR                     0x0c
#define XEXECUTEFIRSTLAYER1_P3_CONTROL_ADDR_GROUP_ID_X_DATA         0x10
#define XEXECUTEFIRSTLAYER1_P3_CONTROL_BITS_GROUP_ID_X_DATA         32
#define XEXECUTEFIRSTLAYER1_P3_CONTROL_ADDR_GROUP_ID_Y_DATA         0x18
#define XEXECUTEFIRSTLAYER1_P3_CONTROL_BITS_GROUP_ID_Y_DATA         32
#define XEXECUTEFIRSTLAYER1_P3_CONTROL_ADDR_GROUP_ID_Z_DATA         0x20
#define XEXECUTEFIRSTLAYER1_P3_CONTROL_BITS_GROUP_ID_Z_DATA         32
#define XEXECUTEFIRSTLAYER1_P3_CONTROL_ADDR_BIAS_DATA               0x28
#define XEXECUTEFIRSTLAYER1_P3_CONTROL_BITS_BIAS_DATA               32
#define XEXECUTEFIRSTLAYER1_P3_CONTROL_ADDR_LAYER1_NEURONS_GPU_DATA 0x30
#define XEXECUTEFIRSTLAYER1_P3_CONTROL_BITS_LAYER1_NEURONS_GPU_DATA 32
#define XEXECUTEFIRSTLAYER1_P3_CONTROL_ADDR_LAYER1_WEIGHTS_GPU_DATA 0x38
#define XEXECUTEFIRSTLAYER1_P3_CONTROL_BITS_LAYER1_WEIGHTS_GPU_DATA 32
#define XEXECUTEFIRSTLAYER1_P3_CONTROL_ADDR_LAYER2_NEURONS_GPU_DATA 0x40
#define XEXECUTEFIRSTLAYER1_P3_CONTROL_BITS_LAYER2_NEURONS_GPU_DATA 32

