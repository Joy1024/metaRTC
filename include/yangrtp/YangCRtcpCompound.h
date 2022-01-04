/*
 * YangCRtcpCompound.h
 *
 *  Created on: 2022年1月2日
 *      Author: yang
 */

#ifndef SRC_YANGRTP_YANGCRTCPCOMPOUND_H_
#define SRC_YANGRTP_YANGCRTCPCOMPOUND_H_

#include <yangrtp/YangRtcpCommon.h>

typedef struct YangRtcpCompound{
	 int32_t nb_bytes;
	 int32_t nb_data;
	 int32_t vlen;
	 char* data;
	 char* rtcps;
}YangRtcpCompound;

void yang_init_rtcpCompound(YangRtcpCompound* rtcp);
void yang_destroy_rtcpCompound(YangRtcpCompound* rtcp);
int32_t yang_decode_rtcpCompound(YangRtcpCompound* rtcp,YangBuffer *buffer);
int32_t yang_encode_rtcpCompound(YangRtcpCompound* rtcp,YangBuffer *buffer);
uint64_t yang_rtcpCompound_nb_bytes();




#endif /* SRC_YANGRTP_YANGCRTCPCOMPOUND_H_ */
