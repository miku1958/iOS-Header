//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTPredictionExpertApplication.h>

@interface RTPredictionExpertApplicationMicroLocation : RTPredictionExpertApplication
{
    double _maxMicroLocationEventAge;
}

@property (nonatomic) double maxMicroLocationEventAge; // @synthesize maxMicroLocationEventAge=_maxMicroLocationEventAge;

- (void)_processEventsWithAppLaunchEvents:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)dateIntervalForAppLaunchEvent:(id)arg1;
- (id)initWithQueue:(id)arg1 category:(long long)arg2 dataSource:(id)arg3 defaultsManager:(id)arg4 mediaRemote:(id)arg5 featureAddons:(id)arg6;
- (id)supportedEventClasses;

@end

