//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NSError, SBLockScreenEmergencyCallViewController;

@protocol SBLockScreenEmergencyCallViewControllerDelegate <NSObject>
- (void)dismissEmergencyCallViewController:(SBLockScreenEmergencyCallViewController *)arg1;
- (void)emergencyCallViewController:(SBLockScreenEmergencyCallViewController *)arg1 didExitWithError:(NSError *)arg2;
@end
