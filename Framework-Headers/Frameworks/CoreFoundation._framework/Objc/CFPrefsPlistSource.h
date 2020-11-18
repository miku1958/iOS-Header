//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreFoundation/CFPrefsSource.h>

__attribute__((visibility("hidden")))
@interface CFPrefsPlistSource : CFPrefsSource
{
    struct __CFString *userIdentifier;
    struct __CFString *domainIdentifier;
    struct __CFString *container;
    _Atomic struct __CFDictionary *_locallySetDict;
    _Atomic char *accessPath;
    _Atomic BOOL _isByHost;
    _Atomic BOOL _volatile;
    _Atomic BOOL _readonly;
    _Atomic BOOL _avoidsDaemonCache;
    _Atomic BOOL _restrictedAccess;
    _Atomic BOOL _checkedInvalidHome;
    _Atomic BOOL _lastWriteFailed;
    _Atomic BOOL _observing;
    _Atomic BOOL _byteCountLimitExceeded;
    _Atomic BOOL _directMode;
    _Atomic BOOL _disableBackup;
    _Atomic int _fileProtectionClass;
}

- (BOOL)_isSharedInTheiOSSimulator;
- (void)_sharedCleanup;
- (BOOL)_shouldEnableDirectMode;
- (void)addPIDImpersonationIfNecessary:(id)arg1;
- (void)alreadylocked_clearCache;
- (struct __CFDictionary *)alreadylocked_copyDictionary;
- (struct __CFArray *)alreadylocked_copyKeyList;
- (void *)alreadylocked_copyValueForKey:(struct __CFString *)arg1;
- (id)alreadylocked_createObserverUpdateMessageWithOperation:(int)arg1 forRole:(int *)arg2;
- (long long)alreadylocked_generationCount;
- (BOOL)alreadylocked_requestNewData;
- (void)alreadylocked_setPrecopiedValues:(const void **)arg1 forKeys:(const struct __CFString **)arg2 count:(long long)arg3 from:(id)arg4;
- (int)alreadylocked_updateObservingRemoteChanges;
- (BOOL)attachAccessTokenToMessage:(id)arg1 accessType:(int)arg2;
- (struct __CFString *)container;
- (void *)copyValueForKey:(struct __CFString *)arg1;
- (id)createRequestNewContentMessageForDaemon:(int)arg1;
- (id)createSynchronizeMessage;
- (void)dealloc;
- (struct __CFString *)domainIdentifier;
- (long long)generationCount;
- (void)goReadOnlyAfterTryingToWriteKeys:(const struct __CFString **)arg1 values:(const void **)arg2 count:(long long)arg3;
- (void)goVolatileAfterTryingToWriteKeys:(const struct __CFString **)arg1 values:(const void **)arg2 count:(long long)arg3;
- (BOOL)handleErrorReply:(id)arg1 fromMessageSettingKeys:(const struct __CFString **)arg2 toValues:(const void **)arg3 count:(long long)arg4 retryCount:(int)arg5 retryContinuation:(CDUnknownBlockType)arg6;
- (BOOL)handleErrorReply:(id)arg1 retryCount:(int)arg2 retryContinuation:(CDUnknownBlockType)arg3;
- (void)handlePossibleOversizedMessage:(int)arg1;
- (void)handleReply:(id)arg1 toRequestNewDataMessage:(id)arg2 onConnection:(id)arg3 retryCount:(int)arg4 error:(BOOL *)arg5;
- (id)initWithDomain:(struct __CFString *)arg1 user:(struct __CFString *)arg2 byHost:(BOOL)arg3 containerPath:(struct __CFString *)arg4 containingPreferences:(id)arg5;
- (BOOL)isByHost;
- (BOOL)isDirectModeEnabled;
- (BOOL)isVolatile;
- (void)requestPlistValidation;
- (void)sendFullyPreparedMessage:(id)arg1 toConnection:(id)arg2 settingValues:(const void **)arg3 forKeys:(const struct __CFString **)arg4 count:(long long)arg5 retryCount:(int)arg6;
- (long long)sendMessageSettingValues:(const void **)arg1 forKeys:(const struct __CFString **)arg2 count:(long long)arg3;
- (void)sendRequestNewDataMessage:(id)arg1 toConnection:(id)arg2 retryCount:(int)arg3 error:(BOOL *)arg4;
- (void)setAccessRestricted:(BOOL)arg1;
- (void)setBackupDisabled:(BOOL)arg1;
- (void)setContainer:(struct __CFString *)arg1;
- (void)setDaemonCacheEnabled:(BOOL)arg1;
- (void)setDomainIdentifier:(struct __CFString *)arg1;
- (void)setFileProtectionClass:(int)arg1;
- (void)setUserIdentifier:(struct __CFString *)arg1;
- (BOOL)synchronize;
- (void)transitionIntoDirectModeIfNeededWithRetryBlock:(CDUnknownBlockType)arg1;
- (struct __CFString *)userIdentifier;
- (BOOL)volatilizeIfInvalidHomeDir;
- (void)writeFailedForKeys:(const struct __CFString **)arg1 values:(const void **)arg2 count:(long long)arg3;

@end
