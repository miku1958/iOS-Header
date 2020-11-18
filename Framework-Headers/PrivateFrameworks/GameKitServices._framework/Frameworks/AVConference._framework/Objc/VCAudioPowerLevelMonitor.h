//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol VCAudioPowerLevelMonitorDelegate;

__attribute__((visibility("hidden")))
@interface VCAudioPowerLevelMonitor : NSObject
{
    unsigned int startDetectRemoteAudioLowPowerTime;
    float audioPowerThreshold;
    unsigned int audioLowPowerTimeInterval;
    BOOL isAudioPowerBelowThreshold;
    BOOL isAudioPowerMovingAverage;
    float audioPowerMovingAverageCoefficient;
    float currentAudioAverage;
    NSObject<VCAudioPowerLevelMonitorDelegate> *delegate;
}

@property (nonatomic) NSObject<VCAudioPowerLevelMonitorDelegate> *delegate; // @synthesize delegate;

- (void)detectRemoteAveragePowerLevel:(float)arg1 timestamp:(unsigned int)arg2;
- (id)init;

@end

