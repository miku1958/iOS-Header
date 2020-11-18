//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CFPDDataBuffer, CFPrefsDaemon;
@protocol OS_os_transaction, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface CFPDSource : NSObject
{
    CFPrefsDaemon *_cfprefsd;
    CFPDDataBuffer *_plist;
    NSObject<OS_xpc_object> *_pendingChangesQueue;
    unsigned long long _pendingChangesSize;
    struct __CFString *_userName;
    struct __CFString *_domain;
    char *_actualPath;
    struct __CFSet *_observingConnections;
    NSObject<OS_os_transaction> *_dirtyTransaction;
    struct __CFString *_uncanonicalizedPathCache;
    struct os_unfair_lock_s _uncanonicalizedPathCacheLock;
    struct os_unfair_lock_s _observingConnectionsLock;
    struct os_unfair_lock_s _writeLock;
    struct os_unfair_lock_s _lock;
    unsigned int _lastEuid;
    unsigned int _lastEgid;
    int _fileProtectionClass;
    short _generationShmemIndex;
    BOOL _byHost;
    BOOL _managed;
    BOOL _managedUsesContainer;
    BOOL _watchingParentDirectory;
    unsigned int _handlingRequest:1;
    unsigned int _dirty:1;
    unsigned int _neverCache:1;
    unsigned int _checkedForNonPrefsPlist:1;
    unsigned int _restrictedReadability:1;
    unsigned int _waitingForDeviceUnlock:1;
    unsigned int _disableBackup:1;
}

- (id)acceptMessage:(id)arg1;
- (void)asyncNotifyObserversOfWriteFromConnection:(id)arg1 message:(id)arg2;
- (BOOL)byHost;
- (void)cacheActualPath;
- (void)cleanUpAfterAcceptingMessage:(id)arg1;
- (struct __CFString *)cloudConfigurationPath;
- (struct __CFString *)container;
- (id)copyPropertyListValidatingPlist:(BOOL)arg1;
- (id)copyPropertyListWithoutDrainingPendingChangesValidatingPlist:(BOOL)arg1;
- (struct __CFString *)copyUncanonicalizedPath;
- (CDUnknownBlockType)createDiskWriteShouldPerformSynchronously:(BOOL *)arg1;
- (void)dealloc;
- (struct __CFString *)debugDump;
- (id)description;
- (struct __CFString *)domain;
- (void)drainPendingChanges;
- (BOOL)enqueueNewKey:(id)arg1 value:(id)arg2 encoding:(int)arg3 inBatch:(BOOL)arg4;
- (void)finishedNonRequestWriteWithError:(int)arg1;
- (unsigned long long)hash;
- (id)initWithDomain:(struct __CFString *)arg1 userName:(struct __CFString *)arg2 byHost:(BOOL)arg3 managed:(BOOL)arg4 shmemIndex:(short)arg5 daemon:(id)arg6;
- (BOOL)isEqual:(id)arg1;
- (void)lockedAsync:(CDUnknownBlockType)arg1;
- (void)lockedSync:(CDUnknownBlockType)arg1;
- (BOOL)managed;
- (void)observingConnectionWasInvalidated:(id)arg1;
- (void)processEndOfMessageIntendingToRemoveSource:(BOOL *)arg1;
- (void)respondToFileWrittenToBehindOurBack;
- (void)setDirty:(BOOL)arg1;
- (void)setManagedPreferencesUseContainer:(BOOL)arg1;
- (void)setUncanonicalizedPathCached:(BOOL)arg1;
- (short)shmemIndex;
- (void)syncWriteToDisk;
- (void)syncWriteToDiskAndFlushCacheForReason:(struct __CFString *)arg1;
- (void)updateShmemEntry;
- (struct __CFString *)user;
- (int)validateMessage:(id)arg1 withNewKey:(id)arg2 newValue:(id)arg3 plistIsAvailableToRead:(BOOL)arg4 containerPath:(const char *)arg5 diagnosticMessage:(const char **)arg6;

@end
