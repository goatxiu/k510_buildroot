/******************************************************************************

  Copyright (C), 2020, canaan Tech. Co., Ltd.

 ******************************************************************************
  File Name     : isp_mfbc_drv.h
  Version       : Initial Draft
  Author        : 
  Created       : 
  Description   : isp driver interface
  History       :
  1.Date        : 
    Author      : zhudalei
    Modification: Created file

******************************************************************************/
#ifndef _ISP_MFBC_DRV_DEF_H_
#define _ISP_MFBC_DRV_DEF_H_

typedef struct _ISP_MFBC_CTL_S
{
    unsigned int  mfbc_out_format_cfg;
}ISP_MFBC_CTL_S;

typedef struct _ISP_MFBC_SIZE_S
{  
	unsigned int mfbc_input_height;
	unsigned int mfbc_input_width;
}ISP_MFBC_SIZE_S;

typedef struct _ISP_MFBC_Y_BUF_S
{
	unsigned int mfbc_y_data_buf_base0;
	unsigned int mfbc_y_data_buf_base1;
	unsigned int mfbc_y_data_stride;
	unsigned int mfbc_y_data_wr_blen;
	unsigned int mfbc_y_head_buf_base0;
	unsigned int mfbc_y_head_buf_base1;
	unsigned int mfbc_y_head_stride;
	unsigned int mfbc_y_head_wr_blen;
} ISP_MFBC_Y_BUF_S;

typedef struct _ISP_MFBC_UV_BUF_S
{
	unsigned int mfbc_uv_data_buf_base0;
	unsigned int mfbc_uv_data_buf_base1;
	unsigned int mfbc_uv_data_stride;
	unsigned int mfbc_uv_data_wr_blen;
	unsigned int mfbc_uv_head_buf_base0;
	unsigned int mfbc_uv_head_buf_base1;
	unsigned int mfbc_uv_head_stride;
	unsigned int mfbc_uv_head_wr_blen;
	
} ISP_MFBC_UV_BUF_S;

typedef struct _ISP_MFBC_YL_BUF_S
{
	unsigned int mfbc_yl_data_buf_base0;
	unsigned int mfbc_yl_data_buf_base1;
	unsigned int mfbc_yl_data_stride;
	unsigned int mfbc_yl_data_wr_blen;
	unsigned int mfbc_yl_head_buf_base0;
	unsigned int mfbc_yl_head_buf_base1;
	unsigned int mfbc_yl_head_stride;
	unsigned int mfbc_yl_head_wr_blen;
	
} ISP_MFBC_YL_BUF_S;

typedef struct _ISP_MFBC_BUF_S
{
	ISP_MFBC_Y_BUF_S	stIspMfbcYBuf;
	ISP_MFBC_UV_BUF_S	stIspMfbcUVBuf;
	ISP_MFBC_YL_BUF_S	stIspMfbcYLBuf;	
} ISP_MFBC_BUF_S;

typedef struct _ISP_MFBC_ATTR_S
{
	ISP_MFBC_CTL_S	stIspMfbcCtl;
	ISP_MFBC_SIZE_S stIspMfbcSize;
	ISP_MFBC_BUF_S	stIspMfbcBuf;	
} ISP_MFBC_ATTR_S;

//int ISP_DRV_MFBC_SetBuf(ISP_MFBC_ATTR_S *pstMfbcAttr);
//int ISP_DRV_MFBC_SetSize(ISP_MFBC_ATTR_S *pstMfbcAttr);
int ISP_DRV_SetMFBC(ISP_MFBC_ATTR_S *pstMfbcAttr);
//debug
int ISP_DRV_GetMFBCRegsVal(void);
#endif/*_ISP_MFBC_DRV_DEF_H_*/
