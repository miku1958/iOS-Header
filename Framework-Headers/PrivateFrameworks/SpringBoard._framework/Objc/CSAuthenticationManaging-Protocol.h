//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NSString;

@protocol CSAuthenticationManaging <NSObject>
- (void)attemptUnlockWithPasscode:(NSString *)arg1 finishUIUnlock:(BOOL)arg2 completion:(void (^)(BOOL, BOOL))arg3;
- (void)setBiometricAutoUnlockingDisabled:(BOOL)arg1 forReason:(NSString *)arg2;
- (void)setPasscodeVisible:(BOOL)arg1 animated:(BOOL)arg2;
@end
