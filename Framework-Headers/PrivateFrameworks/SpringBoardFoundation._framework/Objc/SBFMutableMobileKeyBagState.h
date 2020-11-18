//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardFoundation/SBFMobileKeyBagState.h>

@interface SBFMutableMobileKeyBagState : SBFMobileKeyBagState
{
}

@property (nonatomic) double backOffTime; // @dynamic backOffTime;
@property (nonatomic) long long escrowCount; // @dynamic escrowCount;
@property (nonatomic) unsigned long long failedAttemptCount; // @dynamic failedAttemptCount;
@property (nonatomic) long long lockState; // @dynamic lockState;
@property (nonatomic) BOOL permanentlyBlocked; // @dynamic permanentlyBlocked;
@property (nonatomic) BOOL recoveryEnabled; // @dynamic recoveryEnabled;
@property (nonatomic) BOOL recoveryPossible; // @dynamic recoveryPossible;
@property (nonatomic) BOOL recoveryRequired; // @dynamic recoveryRequired;
@property (nonatomic) BOOL shouldWipe; // @dynamic shouldWipe;

- (id)_mutableState;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithMKBLockStateInfo:(id)arg1;

@end

