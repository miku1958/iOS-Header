//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_xpc_object;

@interface _CFXPreferences : NSObject
{
    struct __CFDictionary *_sources;
    struct _opaque_pthread_mutex_t *_sourcesLock;
    struct __CFDictionary *_namedVolatileSources;
    struct _opaque_pthread_mutex_t *_namedVolatileSourcesLock;
    struct __CFDictionary *_searchLists;
    struct _opaque_pthread_mutex_t *_searchListsLock;
    NSObject<OS_xpc_object> *_agentConnection;
    NSObject<OS_xpc_object> *_daemonConnection;
    NSObject<OS_xpc_object> *_observationConnection;
    unsigned int _launchdUID;
    _Atomic unsigned int _lastEUID;
}

+ (id)defaultPreferences;
- (id)_copyDaemonConnectionSettingUpIfNecessaryForRole:(int)arg1;
- (void)addSuitePreferences:(struct __CFString *)arg1 toAppIdentifier:(struct __CFString *)arg2 container:(struct __CFString *)arg3;
- (void)alreadylocked_withNamedVolatileSources:(CDUnknownBlockType)arg1;
- (void)alreadylocked_withSearchLists:(CDUnknownBlockType)arg1;
- (void)alreadylocked_withSources:(CDUnknownBlockType)arg1;
- (unsigned char)appSynchronizeWithIdentifier:(struct __CFString *)arg1 container:(struct __CFString *)arg2;
- (BOOL)appValueIsForcedForKey:(struct __CFString *)arg1 appIdentifier:(struct __CFString *)arg2;
- (void)assertEquivalence:(BOOL)arg1 ofIdentifiers:(struct __CFArray *)arg2 containers:(struct __CFArray *)arg3 cloudConfigurationURLs:(struct __CFArray *)arg4;
- (void)assertEquivalence:(BOOL)arg1 ofIdentifiers:(struct __CFArray *)arg2 users:(struct __CFArray *)arg3 hosts:(struct __CFArray *)arg4 containers:(struct __CFArray *)arg5 managedFlags:(struct __CFArray *)arg6 cloudFlags:(struct __CFArray *)arg7;
- (BOOL)canLookUpAgents;
- (void *)copyAppValueForKey:(struct __CFString *)arg1 identifier:(struct __CFString *)arg2 container:(struct __CFString *)arg3 configurationURL:(struct __CFURL *)arg4;
- (struct __CFString *)copyDescriptionOfSearchLists;
- (struct __CFDictionary *)copyDictionaryForApp:(struct __CFString *)arg1 withContainer:(struct __CFString *)arg2;
- (struct __CFDictionary *)copyDictionaryForSourceWithIdentifier:(struct __CFString *)arg1;
- (struct __CFDictionary *)copyDictionaryForVolatileSourceWithName:(struct __CFString *)arg1;
- (struct __CFArray *)copyKeyListForIdentifier:(struct __CFString *)arg1 user:(struct __CFString *)arg2 host:(struct __CFString *)arg3 container:(struct __CFString *)arg4;
- (id)copyObservationConnection;
- (void *)copyValueForKey:(struct __CFString *)arg1 identifier:(struct __CFString *)arg2 user:(struct __CFString *)arg3 host:(struct __CFString *)arg4 container:(struct __CFString *)arg5;
- (struct __CFDictionary *)copyValuesForKeys:(struct __CFArray *)arg1 identifier:(struct __CFString *)arg2 user:(struct __CFString *)arg3 host:(struct __CFString *)arg4 container:(struct __CFString *)arg5;
- (void)dealloc;
- (void)destroyConnections;
- (void)flushCachesForAppIdentifier:(struct __CFString *)arg1 user:(struct __CFString *)arg2;
- (void)flushManagedSources;
- (void)fullCloudSynchronizeForAppIdentifier:(struct __CFString *)arg1 container:(struct __CFString *)arg2 configurationURL:(struct __CFURL *)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)hasCloudValueForKey:(struct __CFString *)arg1 appIdentifier:(struct __CFString *)arg2 container:(struct __CFString *)arg3 configurationURL:(struct __CFURL *)arg4;
- (BOOL)hasNonRegisteredValueForKey:(struct __CFString *)arg1 appIdentifier:(struct __CFString *)arg2 container:(struct __CFString *)arg3 configurationURL:(struct __CFURL *)arg4;
- (id)init;
- (unsigned int)lastEUID;
- (void)notifyOfImpendingDeletionOfUser:(struct __CFString *)arg1;
- (void)registerDefaultValues:(struct __CFDictionary *)arg1;
- (void)registerUserDefaultsInstance:(id)arg1 configurationURL:(struct __CFURL *)arg2;
- (void)removeSuite:(struct __CFString *)arg1 fromApp:(struct __CFString *)arg2 withContainer:(struct __CFString *)arg3;
- (void)removeVolatileSourceForName:(struct __CFString *)arg1;
- (void)replaceSearchList:(id)arg1 withSearchList:(id)arg2;
- (void)replaceValuesInSourceForIdentifier:(struct __CFString *)arg1 user:(struct __CFString *)arg2 host:(struct __CFString *)arg3 container:(struct __CFString *)arg4 withValues:(struct __CFDictionary *)arg5;
- (void)replaceValuesInVolatileSourceNamed:(struct __CFString *)arg1 withValues:(struct __CFDictionary *)arg2;
- (void)resetPreferences:(BOOL)arg1;
- (void)setAccessRestricted:(BOOL)arg1 forAppIdentifier:(struct __CFString *)arg2;
- (void)setBackupDisabled:(BOOL)arg1 identifier:(struct __CFString *)arg2 user:(struct __CFString *)arg3 host:(struct __CFString *)arg4 container:(struct __CFString *)arg5;
- (void)setCloudSyncEnabled:(BOOL)arg1 forKey:(struct __CFString *)arg2 appIdentifier:(struct __CFString *)arg3 container:(struct __CFString *)arg4;
- (void)setDaemonCacheEnabled:(BOOL)arg1 identifier:(struct __CFString *)arg2 user:(struct __CFString *)arg3 host:(struct __CFString *)arg4 container:(struct __CFString *)arg5;
- (void)setValue:(void *)arg1 forKey:(struct __CFString *)arg2 appIdentifier:(struct __CFString *)arg3 container:(struct __CFString *)arg4 configurationURL:(struct __CFURL *)arg5;
- (void)setValue:(void *)arg1 forKey:(struct __CFString *)arg2 identifier:(struct __CFString *)arg3 user:(struct __CFString *)arg4 host:(struct __CFString *)arg5 container:(struct __CFString *)arg6;
- (void)setValuesForKeys:(struct __CFDictionary *)arg1 removingValuesForKeys:(struct __CFArray *)arg2 identifier:(struct __CFString *)arg3 user:(struct __CFString *)arg4 host:(struct __CFString *)arg5 container:(struct __CFString *)arg6;
- (CDUnion_f9025cb3 *)shmemForRole:(int)arg1 name:(const char *)arg2;
- (unsigned char)synchronizeIdentifier:(struct __CFString *)arg1 user:(struct __CFString *)arg2 host:(struct __CFString *)arg3 container:(struct __CFString *)arg4;
- (void)unregisterUserDefaultsInstance:(id)arg1;
- (void)updateSearchListsForIdentifier:(struct __CFString *)arg1;
- (struct __CFArray *)volatileSourceNames;
- (void)with23930198HackSourceForIdentifier:(struct __CFString *)arg1 user:(struct __CFString *)arg2 byHost:(BOOL)arg3 container:(struct __CFString *)arg4 cloud:(BOOL)arg5 perform:(CDUnknownBlockType)arg6;
- (void)withConnectionForRole:(int)arg1 performBlock:(CDUnknownBlockType)arg2;
- (void)withManagedSourceForIdentifier:(struct __CFString *)arg1 user:(struct __CFString *)arg2 perform:(CDUnknownBlockType)arg3;
- (void)withNamedVolatileSourceForIdentifier:(struct __CFString *)arg1 perform:(CDUnknownBlockType)arg2;
- (void)withNamedVolatileSources:(CDUnknownBlockType)arg1;
- (void)withSearchListForIdentifier:(struct __CFString *)arg1 container:(struct __CFString *)arg2 cloudConfigurationURL:(struct __CFURL *)arg3 perform:(CDUnknownBlockType)arg4;
- (void)withSearchLists:(CDUnknownBlockType)arg1;
- (void)withSnapshotSearchList:(CDUnknownBlockType)arg1;
- (void)withSourceForIdentifier:(struct __CFString *)arg1 user:(struct __CFString *)arg2 byHost:(BOOL)arg3 container:(struct __CFString *)arg4 cloud:(BOOL)arg5 perform:(CDUnknownBlockType)arg6;
- (void)withSources:(CDUnknownBlockType)arg1;
- (void)withSuiteSearchListForIdentifier:(struct __CFString *)arg1 user:(struct __CFString *)arg2 locked:(BOOL)arg3 perform:(CDUnknownBlockType)arg4;

@end

