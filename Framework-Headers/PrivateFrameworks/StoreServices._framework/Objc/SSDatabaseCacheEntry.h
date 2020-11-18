//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreServices/SSSQLiteEntity.h>

@class SSPersistentCache;

@interface SSDatabaseCacheEntry : SSSQLiteEntity
{
    SSPersistentCache *_persistentCache;
}

+ (unsigned long long)_fetchPersistentID:(id)arg1 inDatabase:(id)arg2;
+ (id)allPropertyKeys;
+ (id)databaseTable;
- (id)dataBlob:(BOOL *)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithLookupKey:(id)arg1 inDatabase:(id)arg2;
- (void)setPersistentCache:(id)arg1;

@end
