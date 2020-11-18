//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMPerformanceTestHarness.h>

@class NSMutableArray;

@interface CAMModeAndDeviceConfigurationTestHarness : CAMPerformanceTestHarness
{
    NSMutableArray *__modeChangeListeners;
}

@property (readonly, nonatomic) NSMutableArray *_modeChangeListeners; // @synthesize _modeChangeListeners=__modeChangeListeners;

- (void).cxx_destruct;
- (void)handleChangeToMode:(long long)arg1 device:(long long)arg2;
- (void)handleDidCloseViewfinderForReason:(long long)arg1;
- (void)handleDidOpenViewfinderForReason:(long long)arg1;
- (void)handleWillCloseViewfinderForReason:(long long)arg1;
- (void)handleWillOpenViewfinderForReason:(long long)arg1;
- (id)initWithTestName:(id)arg1;
- (void)registerHandler:(CDUnknownBlockType)arg1 forChangeToMode:(long long)arg2 devicePosition:(long long)arg3;

@end

