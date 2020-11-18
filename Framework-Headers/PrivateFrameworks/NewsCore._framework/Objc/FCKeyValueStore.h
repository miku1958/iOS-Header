//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FCKeyValueStoreClassRegistry, FCMutexLock, NSMutableDictionary, NSString;
@protocol FCKeyValueStoreMigrating;

@interface FCKeyValueStore : NSObject
{
    BOOL _needSave;
    NSString *_name;
    unsigned long long _storeSize;
    NSMutableDictionary *_objectsByKey;
    NSString *_storeDirectory;
    unsigned long long _clientVersion;
    unsigned long long _optionsMask;
    FCKeyValueStoreClassRegistry *_classRegistry;
    id<FCKeyValueStoreMigrating> _migrator;
    FCMutexLock *_writeLock;
}

@property (strong, nonatomic) FCKeyValueStoreClassRegistry *classRegistry; // @synthesize classRegistry=_classRegistry;
@property (nonatomic) unsigned long long clientVersion; // @synthesize clientVersion=_clientVersion;
@property (strong, nonatomic) id<FCKeyValueStoreMigrating> migrator; // @synthesize migrator=_migrator;
@property (strong, nonatomic) NSString *name; // @synthesize name=_name;
@property (nonatomic) BOOL needSave; // @synthesize needSave=_needSave;
@property (strong, nonatomic) NSMutableDictionary *objectsByKey; // @synthesize objectsByKey=_objectsByKey;
@property (nonatomic) unsigned long long optionsMask; // @synthesize optionsMask=_optionsMask;
@property (strong, nonatomic) NSString *storeDirectory; // @synthesize storeDirectory=_storeDirectory;
@property (nonatomic) unsigned long long storeSize; // @synthesize storeSize=_storeSize;
@property (strong, nonatomic) FCMutexLock *writeLock; // @synthesize writeLock=_writeLock;

+ (id)persistenceQueue;
- (void).cxx_destruct;
- (void)_clearStore;
- (id)_initializeStoreDirectoryWithName:(id)arg1;
- (BOOL)_isBackupEnabled;
- (id)_loadFromDisk;
- (void)_logCacheStatus;
- (void)_queueSave;
- (void)_saveAsyncWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)_shouldMigrateOnUpgrade;
- (void)addAllEntriesToDictionary:(id)arg1;
- (void)addEntriesFromDictionary:(id)arg1;
- (id)allKeys;
- (BOOL)boolValueForKey:(id)arg1;
- (BOOL)containsObjectForKey:(id)arg1;
- (id)init;
- (id)initWithName:(id)arg1 directory:(id)arg2 version:(unsigned long long)arg3 options:(unsigned long long)arg4 classRegistry:(id)arg5;
- (id)initWithName:(id)arg1 directory:(id)arg2 version:(unsigned long long)arg3 options:(unsigned long long)arg4 classRegistry:(id)arg5 migrator:(id)arg6;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)objectsForKeys:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)removeObjectsForKeys:(id)arg1;
- (void)saveWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setBoolValue:(BOOL)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setObjects:(id)arg1 forKeys:(id)arg2;
- (void)setOptionBackupEnabled:(BOOL)arg1;
- (void)updateObjectsForKeys:(id)arg1 withBlock:(CDUnknownBlockType)arg2;

@end

