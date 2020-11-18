//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DAAccount, DATrustHandler;

@interface DAAgent : NSObject
{
    BOOL _isMonitoring;
    BOOL _syncWhenReachable;
    BOOL _isWaitingForPassword;
    DAAccount *_account;
    double _lastRetryTimeout;
    CDUnknownBlockType _networkReachableBlock;
}

@property (strong, nonatomic) DAAccount *account; // @synthesize account=_account;
@property (nonatomic) BOOL isMonitoring; // @synthesize isMonitoring=_isMonitoring;
@property (nonatomic) BOOL isWaitingForPassword; // @synthesize isWaitingForPassword=_isWaitingForPassword;
@property (nonatomic) double lastRetryTimeout; // @synthesize lastRetryTimeout=_lastRetryTimeout;
@property (copy, nonatomic) CDUnknownBlockType networkReachableBlock; // @synthesize networkReachableBlock=_networkReachableBlock;
@property (nonatomic) BOOL syncWhenReachable; // @synthesize syncWhenReachable=_syncWhenReachable;
@property (readonly, nonatomic) DATrustHandler *trustHandler;

- (void).cxx_destruct;
- (void)_reachabilityChanged:(id)arg1;
- (id)getDAAccount;
- (id)initWithAccount:(id)arg1;
- (void)observeReachabilityWithBlock:(CDUnknownBlockType)arg1;
- (int)preferredEventDaysToSync;
- (int)preferredToDoDaysToSync;
- (void)processMeetingRequestDatas:(id)arg1 deliveryIdsToClear:(id)arg2 deliveryIdsToSoftClear:(id)arg3 inFolderWithId:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (void)refreshFolderListRequireChangedFolders:(BOOL)arg1 isUserRequested:(BOOL)arg2;
- (void)requestAgentStopMonitoringWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)shutdown;
- (void)startMonitoring;
- (id)stateString;
- (void)stopObservingReachability;
- (void)syncFolderIDs:(id)arg1 forDataclasses:(long long)arg2 isUserRequested:(BOOL)arg3;

@end

