#ifndef __DRDDP_H__
#define __DRDDP_H__

// ddp_drv.h
typedef enum DISP_MODULE_ENUM_
{
    DISP_MODULE_OVL,
    DISP_MODULE_COLOR,
    DISP_MODULE_BLS,
    DISP_MODULE_WDMA0,
    DISP_MODULE_RDMA,
    DISP_MODULE_RDMA1,
    DISP_MODULE_DPI0,
    DISP_MODULE_DBI,
    DISP_MODULE_DSI_CMD,
    DISP_MODULE_DSI_VDO,
    DISP_MODULE_CONFIG,
    DISP_MODULE_MUTEX,
    DISP_MODULE_CMDQ,
    DISP_MODULE_G2D,    //20
    DISP_MODULE_SMI,  // For interrupt handling
    DISP_MODULE_MAX
} DISP_MODULE_ENUM;

int disp_dump_reg(DISP_MODULE_ENUM module);

// ddp_hal.h
enum RDMA_OUTPUT_FORMAT
{
    RDMA_OUTPUT_FORMAT_ARGB   = 0,
    RDMA_OUTPUT_FORMAT_YUV444 = 1,
};

enum RDMA_MODE
{
    RDMA_MODE_DIRECT_LINK = 0,
    RDMA_MODE_MEMORY      = 1,
};

#endif // __DRDDP_H__
