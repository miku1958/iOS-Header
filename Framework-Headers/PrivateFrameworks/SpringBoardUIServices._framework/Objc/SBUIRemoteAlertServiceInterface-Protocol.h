//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDictionary, NSString, NSUUID;

@protocol SBUIRemoteAlertServiceInterface

@optional
- (void)handleDoubleHeightStatusBarTap;
- (void)handleHeadsetButtonPressed:(BOOL)arg1;
- (void)handleHomeButtonPressed;
- (void)handleLockButtonPressed;
- (void)handleVolumeDownButtonPressed;
- (void)handleVolumeUpButtonPressed;
- (void)noteActivatedForActivityContinuationWithIdentifier:(NSUUID *)arg1;
- (void)noteActivatedForCustomReason:(NSString *)arg1;
- (void)setUserInfo:(NSDictionary *)arg1;
@end

