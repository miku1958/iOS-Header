//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Weather/WeatherPreferencesPersistence-Protocol.h>

@class NSString, NSUbiquitousKeyValueStore;
@protocol WeatherCloudPersistenceDelegate;

@interface WeatherCloudPersistence : NSObject <WeatherPreferencesPersistence>
{
    id<WeatherCloudPersistenceDelegate> _delegate;
    NSUbiquitousKeyValueStore *_cloudStore;
}

@property (strong) NSUbiquitousKeyValueStore *cloudStore; // @synthesize cloudStore=_cloudStore;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<WeatherCloudPersistenceDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)cloudPersistenceWithDelegate:(id)arg1;
+ (BOOL)processIsWhitelistedForSync;
- (void).cxx_destruct;
- (id)arrayForKey:(id)arg1;
- (BOOL)boolForKey:(id)arg1;
- (void)cloudCitiesChangedExternally:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (BOOL)isInitialSyncNotification:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setBool:(BOOL)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)stringForKey:(id)arg1;
- (BOOL)synchronize;

@end

