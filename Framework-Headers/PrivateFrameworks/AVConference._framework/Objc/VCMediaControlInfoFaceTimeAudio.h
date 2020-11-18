//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/VCMediaControlInfo.h>

__attribute__((visibility("hidden")))
@interface VCMediaControlInfoFaceTimeAudio : VCMediaControlInfo
{
    unsigned int _controlInfoReceivedKbits;
    unsigned int _controlInfoReceivedPackets;
    unsigned int _controlInfoAudioPacketSize;
    unsigned int _controlInfoAudioTimestamp;
    double _controlInfoArrivalTime;
    CDStruct_b4442fdd _controlFeedbackParameter;
    BOOL _videoEnabled;
}

@property (readonly) unsigned long long feedbackSize;
@property BOOL videoEnabled; // @synthesize videoEnabled=_videoEnabled;

- (int)configureWithBuffer:(const char *)arg1 length:(unsigned long long)arg2 optionalControlInfo:(CDStruct_39aa150d *)arg3;
- (id)description;
- (int)getInfo:(void *)arg1 bufferLength:(unsigned long long)arg2 infoSize:(unsigned long long *)arg3 type:(unsigned int)arg4;
- (int)getInfoUnserialized:(CDStruct_b4442fdd *)arg1 type:(unsigned int)arg2;
- (int)handleOptionalControlInfo:(CDStruct_39aa150d *)arg1;
- (BOOL)hasInfoType:(unsigned int)arg1;
- (int)serializeToBuffer:(char *)arg1 bufferLength:(unsigned long long)arg2 blobLength:(unsigned long long *)arg3;
- (unsigned long long)serializedSize;
- (int)setInfo:(void *)arg1 size:(unsigned long long)arg2 type:(unsigned int)arg3;
- (int)setInfoUnserialized:(CDStruct_b4442fdd *)arg1 type:(unsigned int)arg2;

@end
