//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <webrtc/WK_RTCVideoEncoder-Protocol.h>

@class NSMutableArray, NSString, WK_RTCVideoCodecInfo;

__attribute__((visibility("hidden")))
@interface WK_RTCVideoEncoderH264 : NSObject <WK_RTCVideoEncoder>
{
    NSMutableArray *_codecs;
    WK_RTCVideoCodecInfo *_codecInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)encode:(id)arg1 codecSpecificInfo:(id)arg2 frameTypes:(id)arg3;
- (id)implementationName;
- (id)initWithCodecInfo:(id)arg1;
- (long long)releaseEncoder;
- (id)scalingSettings;
- (int)setBitrate:(unsigned int)arg1 framerate:(unsigned int)arg2;
- (void)setCallback:(CDUnknownBlockType)arg1;
- (int)setRateAllocation:(id)arg1 framerate:(unsigned int)arg2;
- (long long)startEncodeWithSettings:(id)arg1 numberOfCores:(int)arg2;

@end

