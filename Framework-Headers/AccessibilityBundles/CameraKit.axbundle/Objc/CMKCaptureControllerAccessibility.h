//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraKit/__CMKCaptureControllerAccessibility_super.h>

@interface CMKCaptureControllerAccessibility : __CMKCaptureControllerAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_capturedPhotoWithDictionary:(id)arg1 error:(id)arg2 HDRUsed:(BOOL)arg3;
- (void)_sessionStarted:(id)arg1;
- (void)_sessionStopped:(id)arg1;
- (void)_setCameraMode:(long long)arg1 cameraDevice:(long long)arg2;
- (void)cameraControllerVideoCaptureDidStart:(id)arg1;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (BOOL)capturePhotoUsingHDR:(BOOL)arg1;

@end

