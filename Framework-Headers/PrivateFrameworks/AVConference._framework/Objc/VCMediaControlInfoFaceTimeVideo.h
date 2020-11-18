//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/VCMediaControlInfo.h>

__attribute__((visibility("hidden")))
@interface VCMediaControlInfoFaceTimeVideo : VCMediaControlInfo
{
    unsigned char _controlInfoCameraStatus;
    unsigned char _controlInfoLTRBits;
    unsigned int _controlInfoLTRTimestamp;
    unsigned char _controlInfoFEC[36];
    unsigned long long _controlInfoFECLength;
    unsigned int _controlInfoProbe;
    unsigned int _controlInfoVideoPacketSize;
    unsigned int _controlInfoVideoTimestamp;
    double _controlInfoVideoArrivalTime;
}

- (int)configureWithBuffer:(const char *)arg1 length:(unsigned long long)arg2 optionalControlInfo:(CDStruct_475a354f *)arg3;
- (id)description;
- (int)getInfo:(void *)arg1 bufferLength:(unsigned long long)arg2 infoSize:(unsigned long long *)arg3 type:(unsigned int)arg4;
- (int)handleOptionalControlInfo:(CDStruct_475a354f *)arg1;
- (BOOL)hasInfoType:(unsigned int)arg1;
- (int)serializeToBuffer:(char *)arg1 bufferLength:(unsigned long long)arg2 blobLength:(unsigned long long *)arg3;
- (unsigned long long)serializedSize;
- (int)setInfo:(void *)arg1 size:(unsigned long long)arg2 type:(unsigned int)arg3;

@end

