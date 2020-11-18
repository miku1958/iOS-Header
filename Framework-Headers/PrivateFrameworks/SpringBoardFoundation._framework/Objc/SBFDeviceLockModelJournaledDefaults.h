//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <SpringBoardFoundation/SBFDeviceLockModel-Protocol.h>

@class NSDictionary, NSString, NSUserDefaults;
@protocol OS_dispatch_queue, SBFDeviceLockModelDelegate;

@interface SBFDeviceLockModelJournaledDefaults : NSObject <SBFDeviceLockModel>
{
    NSUserDefaults *_lockStateDefaults;
    NSString *_journalPath;
    id<SBFDeviceLockModelDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_persistentStateQueue;
    BOOL _speculativePasscodeFailureChargeOutstanding;
    NSDictionary *_originalDefaultsForRollback;
    BOOL _pendingWipe;
    BOOL _permanentlyBlocked;
    double _unblockTime;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<SBFDeviceLockModelDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=isPermanentlyBlocked) BOOL permanentlyBlocked;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isTemporarilyBlocked) BOOL temporarilyBlocked;
@property (readonly, nonatomic) double timeUntilUnblockedSinceReferenceDate;

+ (id)_journaledDefaultsAndTypes;
- (id)_copyLockControllerDefaults;
- (void)_evaluatePendingWipe;
- (void)_loadLockControllerDefaults:(id)arg1;
- (void)_loadLockControllerDefaultsJournalIfNecessary;
- (void)_persistentStateQueue_beginSpeculativeFailureCharge;
- (void)_persistentStateQueue_cancelSpeculativeFailureCharge;
- (void)_persistentStateQueue_clearBlockedState;
- (void)_persistentStateQueue_evaluatePendingWipe;
- (void)_persistentStateQueue_loadLockState;
- (void)_persistentStateQueue_unlockFailedWithError:(id)arg1;
- (void)_persistentStateQueue_unlockSucceeded;
- (void)_updateLockControllerDefaultsJournal;
- (void)clearBlockedState;
- (void)dealloc;
- (id)init;
- (id)initWithDefaultsDomain:(id)arg1 journalPath:(id)arg2;
- (void)notePasscodeEntryBegan;
- (void)notePasscodeEntryCancelled;
- (void)notePasscodeUnlockFailedWithError:(id)arg1;
- (void)notePasscodeUnlockSucceeded;
- (void)performPasswordTest:(CDUnknownBlockType)arg1;
- (void)synchronize;
- (id)updateLockControllerDefaultsWithBlock:(CDUnknownBlockType)arg1 journaled:(BOOL)arg2;

@end

