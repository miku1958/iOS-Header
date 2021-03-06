//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Weather/WeatherPreferencesPersistence-Protocol.h>

@class NSString, NSUbiquitousKeyValueStore, WeatherCloudMigrator;
@protocol WeatherCloudPersistenceDelegate;

@interface WeatherCloudPersistence : NSObject <WeatherPreferencesPersistence>
{
    id<WeatherCloudPersistenceDelegate> _delegate;
    WeatherCloudMigrator *_migrator;
    NSUbiquitousKeyValueStore *_activeCloudStore;
    NSUbiquitousKeyValueStore *_nonEncryptedStore;
    NSUbiquitousKeyValueStore *_encryptedStore;
}

@property (strong, nonatomic) NSUbiquitousKeyValueStore *activeCloudStore; // @synthesize activeCloudStore=_activeCloudStore;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<WeatherCloudPersistenceDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSUbiquitousKeyValueStore *encryptedStore; // @synthesize encryptedStore=_encryptedStore;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) WeatherCloudMigrator *migrator; // @synthesize migrator=_migrator;
@property (strong, nonatomic) NSUbiquitousKeyValueStore *nonEncryptedStore; // @synthesize nonEncryptedStore=_nonEncryptedStore;
@property (readonly) Class superclass;

+ (id)cloudPersistenceWithDelegate:(id)arg1;
+ (BOOL)processIsWhitelistedForSync;
- (void).cxx_destruct;
- (id)arrayForKey:(id)arg1;
- (BOOL)boolForKey:(id)arg1;
- (void)cloudCitiesChangedExternally:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (void)encryptedStoreChanged:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (BOOL)isInitialSyncNotification:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setBool:(BOOL)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)stringForKey:(id)arg1;
- (BOOL)synchronize;
- (void)synchronizeWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

