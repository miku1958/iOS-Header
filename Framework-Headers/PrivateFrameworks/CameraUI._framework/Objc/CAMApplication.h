//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIApplication.h>

@class CAMPerformanceTestHarness;

@interface CAMApplication : UIApplication
{
    CAMPerformanceTestHarness *_currentTestHarness;
}

@property (strong, nonatomic) CAMPerformanceTestHarness *currentTestHarness; // @synthesize currentTestHarness=_currentTestHarness;

- (void).cxx_destruct;
- (void)_configureExtendedLaunchTestIfNeeded;
- (id)_extendLaunchTest;
- (void)_registerPreviewStartBlock:(CDUnknownBlockType)arg1;
- (void)didChangeToMode:(long long)arg1 device:(long long)arg2;
- (void)prepareForDefaultImageSnapshotForScreen:(id)arg1;
- (BOOL)runSwitchCamerasTestWithName:(id)arg1 options:(id)arg2;
- (BOOL)runSwitchModesTestWithName:(id)arg1 options:(id)arg2;
- (BOOL)runTakePictureTestWithFrontCamera:(id)arg1 options:(id)arg2 prototype:(id)arg3;
- (BOOL)runTakePictureTestWithTestName:(id)arg1 options:(id)arg2 prototype:(id)arg3;
- (BOOL)runTest:(id)arg1 options:(id)arg2;
- (unsigned long long)supportedInterfaceOrientationsForWindow:(id)arg1;

@end

