//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardFoundation/SBFUserAuthenticationModel-Protocol.h>

@class NSString, SBFMobileKeyBag;
@protocol SBFUserAuthenticationModelDelegate;

@interface SBFUserAuthenticationModelEducationalMode : NSObject <SBFUserAuthenticationModel>
{
    SBFMobileKeyBag *_keybag;
    BOOL _pendingWipe;
    id<SBFUserAuthenticationModelDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<SBFUserAuthenticationModelDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=isPermanentlyBlocked) BOOL permanentlyBlocked;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isTemporarilyBlocked) BOOL temporarilyBlocked;
@property (readonly, nonatomic) double timeUntilUnblockedSinceReferenceDate;

- (void).cxx_destruct;
- (id)_refreshStateAndNotify:(BOOL)arg1;
- (void)_refreshStateForMkbState:(id)arg1 notify:(BOOL)arg2;
- (id)initWithKeyBag:(id)arg1;
- (void)noteNewMkbDeviceLockState:(id)arg1;
- (void)notePasscodeEntryBegan;
- (void)notePasscodeEntryCancelled;
- (void)notePasscodeUnlockFailedWithError:(id)arg1;
- (void)notePasscodeUnlockSucceeded;
- (void)performPasswordTest:(CDUnknownBlockType)arg1;
- (void)synchronize;

@end
