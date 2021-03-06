//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class WK_RTCVideoEncoderH264, WK_RTCVideoEncoderH265;

__attribute__((visibility("hidden")))
@interface WK_RTCLocalVideoH264H265Encoder : NSObject
{
    WK_RTCVideoEncoderH264 *m_h264Encoder;
    WK_RTCVideoEncoderH265 *m_h265Encoder;
}

- (void).cxx_destruct;
- (long long)encode:(id)arg1 codecSpecificInfo:(id)arg2 frameTypes:(id)arg3;
- (id)initWithCodecInfo:(id)arg1;
- (long long)releaseEncoder;
- (int)setBitrate:(unsigned int)arg1 framerate:(unsigned int)arg2;
- (void)setCallback:(CDUnknownBlockType)arg1;
- (long long)startEncodeWithSettings:(id)arg1 numberOfCores:(int)arg2;

@end

