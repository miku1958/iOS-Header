//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMDAudioCodecGroup, HMDAudioSampleRate, HMDBitRateSetting, NSNumber;

@interface HMDCameraAudioParameterCombination : HMFObject
{
    HMDAudioCodecGroup *_codecGroupType;
    HMDBitRateSetting *_bitrateSetting;
    HMDAudioSampleRate *_sampleRate;
    NSNumber *_maximumBitrate;
    NSNumber *_minimumBitrate;
    NSNumber *_rtcpInterval;
    NSNumber *_rtpPTime;
}

@property (readonly, nonatomic) HMDBitRateSetting *bitrateSetting; // @synthesize bitrateSetting=_bitrateSetting;
@property (readonly, nonatomic) HMDAudioCodecGroup *codecGroupType; // @synthesize codecGroupType=_codecGroupType;
@property (readonly, nonatomic) NSNumber *maximumBitrate; // @synthesize maximumBitrate=_maximumBitrate;
@property (readonly, nonatomic) NSNumber *minimumBitrate; // @synthesize minimumBitrate=_minimumBitrate;
@property (readonly, nonatomic) NSNumber *rtcpInterval; // @synthesize rtcpInterval=_rtcpInterval;
@property (readonly, nonatomic) NSNumber *rtpPTime; // @synthesize rtpPTime=_rtpPTime;
@property (readonly, nonatomic) HMDAudioSampleRate *sampleRate; // @synthesize sampleRate=_sampleRate;

- (void).cxx_destruct;
- (id)description;
- (id)initWithCodecGroup:(id)arg1 bitrateSetting:(id)arg2 sampleRate:(id)arg3;
- (id)initWithCodecGroup:(id)arg1 bitrateSetting:(id)arg2 sampleRate:(id)arg3 maximumBitrate:(id)arg4 minimumBitrate:(id)arg5 rtcpInterval:(id)arg6 rtpPtime:(id)arg7;
- (BOOL)isEqual:(id)arg1;

@end

