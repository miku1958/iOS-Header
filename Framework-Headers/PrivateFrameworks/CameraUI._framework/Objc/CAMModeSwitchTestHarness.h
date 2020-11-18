//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMPerformanceTestHarness.h>

@class CAMViewfinderViewController;

@interface CAMModeSwitchTestHarness : CAMPerformanceTestHarness
{
    CAMViewfinderViewController *_viewfinder;
    long long _desiredMode;
}

+ (id)harnessWithTestName:(id)arg1 viewfinder:(id)arg2 mode:(long long)arg3;
- (void).cxx_destruct;
- (void)ensureCaptureMode:(long long)arg1 thenPerform:(CDUnknownBlockType)arg2;
- (id)initWithTestName:(id)arg1 viewfinder:(id)arg2 mode:(long long)arg3;
- (void)runConfiguredTest;

@end

