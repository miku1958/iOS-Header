//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVFCore/NSCopying-Protocol.h>
#import <AVFCore/NSMutableCopying-Protocol.h>

@class AVAudioMixInputParametersInternal, NSString;

@interface AVAudioMixInputParameters : NSObject <NSCopying, NSMutableCopying>
{
    AVAudioMixInputParametersInternal *_inputParameters;
}

@property (readonly, strong, nonatomic) const struct opaqueMTAudioProcessingTap *audioTapProcessor;
@property (readonly, copy, nonatomic) NSString *audioTimePitchAlgorithm;
@property (readonly, nonatomic) int trackID;

- (id)_audioVolumeCurve;
- (void)_setScheduledAudioParameters:(id)arg1;
- (void)_setVolume:(float)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)_setVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(CDStruct_e83c9415)arg3 rampMode:(long long)arg4;
- (id)_volumeCurveAsString;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)effectParameters;
- (BOOL)getVolumeRampForTime:(CDStruct_1b6d18a9)arg1 startVolume:(float *)arg2 endVolume:(float *)arg3 timeRange:(CDStruct_e83c9415 *)arg4;
- (BOOL)getVolumeRampForTime:(CDStruct_1b6d18a9)arg1 startVolume:(float *)arg2 endVolume:(float *)arg3 timeRange:(CDStruct_e83c9415 *)arg4 rampMode:(long long *)arg5;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)setAudioTapProcessor:(struct opaqueMTAudioProcessingTap *)arg1;
- (void)setAudioTimePitchAlgorithm:(id)arg1;
- (void)setEffectParameters:(id)arg1;
- (void)setTrackID:(int)arg1;
- (void)setVolume:(float)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)setVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(CDStruct_e83c9415)arg3;
- (void)setVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(CDStruct_e83c9415)arg3 rampMode:(long long)arg4;

@end

