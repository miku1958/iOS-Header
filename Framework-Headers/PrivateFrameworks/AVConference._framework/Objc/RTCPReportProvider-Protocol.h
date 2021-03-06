//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/NSObject-Protocol.h>

@protocol RTCPReportProvider <NSObject>
- (BOOL)generateReceptionReportList:(struct _RTCP_RECEPTION_REPORT *)arg1 reportCount:(char *)arg2;

@optional
- (unsigned int)getExtendedSequenceNumberForSequenceNumber:(unsigned short)arg1;
- (unsigned int)getRTCPReportNTPTimeMiddle32ForReportId:(unsigned char)arg1;
@end

