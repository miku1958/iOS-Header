//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVAudioMixInputParameters.h>

@class AVMutableAudioMixInputParametersInternal, NSString;

@interface AVMutableAudioMixInputParameters : AVAudioMixInputParameters
{
    AVMutableAudioMixInputParametersInternal *_mutableInputParameters;
}

@property (strong, nonatomic) const struct opaqueMTAudioProcessingTap *audioTapProcessor;
@property (copy, nonatomic) NSString *audioTimePitchAlgorithm;
@property (nonatomic) int trackID;

+ (id)audioMixInputParameters;
+ (id)audioMixInputParametersWithTrack:(id)arg1;
- (void)setVolume:(float)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)setVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(CDStruct_e83c9415)arg3;

@end

