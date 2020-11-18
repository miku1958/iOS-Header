//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate;

@interface IMCloudKitSyncState : NSObject
{
    BOOL _hasExited;
    BOOL _isDisablingDevices;
    BOOL _accountIsEnabled;
    unsigned long long _syncControllerSyncState;
    long long _syncControllerSyncType;
    long long _syncControllerRecordType;
    NSDate *_exitDate;
    long long _changingEnabledState;
    NSDate *_lastSyncDate;
    NSArray *_errors;
    long long _accountStatus;
    long long _syncState;
}

@property (readonly, nonatomic) BOOL accountIsEnabled; // @synthesize accountIsEnabled=_accountIsEnabled;
@property (readonly, nonatomic) long long accountStatus; // @synthesize accountStatus=_accountStatus;
@property (readonly, nonatomic) BOOL canChangeEnabledSetting;
@property (readonly, nonatomic) BOOL canEnableSyncing;
@property (readonly, nonatomic) BOOL canStartSyncing;
@property (readonly, nonatomic) long long changingEnabledState; // @synthesize changingEnabledState=_changingEnabledState;
@property (readonly, nonatomic) NSArray *errors; // @synthesize errors=_errors;
@property (readonly, copy, nonatomic) NSDate *exitDate; // @synthesize exitDate=_exitDate;
@property (readonly, nonatomic) BOOL hasExited; // @synthesize hasExited=_hasExited;
@property (readonly, nonatomic) BOOL isDisablingDevices; // @synthesize isDisablingDevices=_isDisablingDevices;
@property (readonly, nonatomic) BOOL isSyncEnabledForDisplayOnly;
@property (readonly, nonatomic) BOOL isSyncing;
@property (readonly, nonatomic) BOOL isSyncingAvailable;
@property (readonly, nonatomic) BOOL isSyncingEnabled;
@property (readonly, nonatomic) BOOL isSyncingPaused;
@property (readonly, nonatomic) NSDate *lastSyncDate; // @synthesize lastSyncDate=_lastSyncDate;
@property (readonly, nonatomic) long long syncControllerRecordType; // @synthesize syncControllerRecordType=_syncControllerRecordType;
@property (readonly, nonatomic) unsigned long long syncControllerSyncState; // @synthesize syncControllerSyncState=_syncControllerSyncState;
@property (readonly, nonatomic) long long syncControllerSyncType; // @synthesize syncControllerSyncType=_syncControllerSyncType;
@property (readonly, nonatomic) long long syncState; // @synthesize syncState=_syncState;
@property (readonly, nonatomic) BOOL syncingFailed;

+ (id)logHandle;
- (void).cxx_destruct;
- (BOOL)_isChangingEnabledState;
- (BOOL)_shouldHideProgressInFirstSevenDays;
- (id)createSyncProgressWithSyncStatistics:(id)arg1;
- (id)description;
- (id)initWithAccountEnabled:(BOOL)arg1 stateDictionary:(id)arg2;
- (id)logHandle;
- (BOOL)shouldFetchSyncStatistics;
- (BOOL)shouldRescheduleSyncSyncProgress;
- (id)syncErrorWithDomain:(id)arg1 code:(long long)arg2;

@end

