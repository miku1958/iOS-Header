//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDCameraProfileSettingsManager;

@protocol HMDCameraProfileSettingsManagerDelegate <NSObject>
- (void)cameraProfileSettingsManager:(HMDCameraProfileSettingsManager *)arg1 canDisableRecordingWithCompletion:(void (^)(BOOL, NSError *))arg2;
- (void)cameraProfileSettingsManager:(HMDCameraProfileSettingsManager *)arg1 canEnableRecordingWithCompletion:(void (^)(BOOL, NSError *))arg2;
@end
