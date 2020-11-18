//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Sharing/NSObject-Protocol.h>

@class NSError, SFAutoUnlockDevice;

@protocol SFUnlockClientProtocol <NSObject>
- (void)beganAttemptWithDevice:(SFAutoUnlockDevice *)arg1;
- (void)completedUnlockWithDevice:(SFAutoUnlockDevice *)arg1;
- (void)enabledDevice:(SFAutoUnlockDevice *)arg1;
- (void)failedToEnableDevice:(SFAutoUnlockDevice *)arg1 error:(NSError *)arg2;
- (void)failedUnlockWithError:(NSError *)arg1;
- (void)keyDeviceLocked:(SFAutoUnlockDevice *)arg1;
@end
