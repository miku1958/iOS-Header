//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmailFoundation/EFPriorityDesignator.h>

#import <MessageLegacy/EFCancelable-Protocol.h>

@class MFError, MFInvocationQueue, MFMailboxUid, NSMutableSet, NSString, NSThread;

@interface MFActivityMonitor : EFPriorityDesignator <EFCancelable>
{
    NSThread *_runningThread;
    NSString *_taskName;
    NSString *_displayName;
    NSString *_statusMessage;
    NSString *_descriptionString;
    MFInvocationQueue *_ourQueue;
    double _percentDone;
    unsigned int _key:13;
    unsigned int _canCancel:1;
    unsigned int _shouldCancel:1;
    unsigned int _isActive:1;
    unsigned int _changeCount:8;
    id _delegate;
    id _target;
    MFError *_error;
    unsigned long long _expectedLength;
    unsigned long long _maxCount;
    unsigned long long _currentCount;
    double _currentItemPercentDone;
    unsigned int _supportsPerItemProgress:1;
    MFMailboxUid *_mailbox;
    double _lastTime;
    double _startTime;
    unsigned long long _gotNewMessagesState;
    unsigned long long _bytesRead;
    unsigned long long _bytesWritten;
    NSMutableSet *_reasons;
    NSMutableSet *_associatedCancelables;
    BOOL _isRemoteSearch;
}

@property (nonatomic) BOOL canBeCancelled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isRemoteSearch; // @synthesize isRemoteSearch=_isRemoteSearch;
@property (strong) MFMailboxUid *mailbox; // @synthesize mailbox=_mailbox;
@property (nonatomic) BOOL shouldCancel;
@property (readonly) Class superclass;

+ (id)currentMonitor;
+ (void)destroyMonitor;
- (void)_cancelAssociatedCancelables;
- (void)_didChange;
- (BOOL)_lockedAddActivityTarget:(id)arg1;
- (id)_ntsThrottledUserInfoDict;
- (int)acquireExclusiveAccessKey;
- (id)activityTarget;
- (id)activityTargets;
- (void)addActivityTarget:(id)arg1;
- (void)addActivityTargets:(id)arg1;
- (void)addCancelable:(id)arg1;
- (void)addReason:(id)arg1;
- (unsigned long long)bytesRead;
- (unsigned long long)bytesWritten;
- (void)cancel;
- (void)cancelMessage;
- (int)changeCount;
- (void)dealloc;
- (id)displayName;
- (id)error;
- (unsigned long long)expectedLength;
- (void)finishedActivity:(id)arg1;
- (unsigned long long)gotNewMessagesState;
- (BOOL)hasReason:(id)arg1;
- (id)init;
- (BOOL)isActive;
- (void)notifyConnectionEstablished;
- (double)percentDone;
- (void)postActivityFinished:(id)arg1;
- (void)postActivityStarting;
- (void)postDidChangeWithUserInfo:(id)arg1;
- (id)primaryTarget;
- (id)reasons;
- (void)recordBytesRead:(unsigned long long)arg1;
- (void)recordBytesWritten:(unsigned long long)arg1;
- (void)relinquishExclusiveAccessKey:(int)arg1;
- (void)removeActivityTarget:(id)arg1;
- (void)removeCancelable:(id)arg1;
- (void)reset;
- (void)resetConnectionStats;
- (void)setActivityTarget:(id)arg1;
- (void)setCurrentCount:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setDisplayName:(id)arg1 maxCount:(unsigned long long)arg2;
- (void)setError:(id)arg1;
- (void)setExpectedLength:(unsigned long long)arg1;
- (void)setGotNewMessagesState:(unsigned long long)arg1;
- (void)setInvocationQueue:(id)arg1;
- (void)setMaxCount:(unsigned long long)arg1;
- (void)setPercentDone:(double)arg1;
- (void)setPercentDone:(double)arg1 withKey:(int)arg2;
- (void)setPercentDoneOfCurrentItem:(double)arg1;
- (void)setPrimaryTarget:(id)arg1;
- (void)setStatusMessage:(id)arg1;
- (void)setStatusMessage:(id)arg1 percentDone:(double)arg2;
- (void)setStatusMessage:(id)arg1 percentDone:(double)arg2 withKey:(int)arg3;
- (void)setStatusMessage:(id)arg1 withKey:(int)arg2;
- (void)setSupportsPerItemProgress:(BOOL)arg1;
- (void)setTaskName:(id)arg1;
- (void)startActivity;
- (double)startTime;
- (id)statusMessage;
- (id)taskName;
- (id)userInfoForNotification;

@end

