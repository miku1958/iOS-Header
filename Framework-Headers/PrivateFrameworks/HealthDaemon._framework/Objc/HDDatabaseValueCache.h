//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface HDDatabaseValueCache : NSObject
{
    NSMutableDictionary *_cache;
    NSObject<OS_dispatch_queue> *_resourceQueue;
    NSString *_threadLocalKey;
}

@property (strong, nonatomic) NSMutableDictionary *cache; // @synthesize cache=_cache;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *resourceQueue; // @synthesize resourceQueue=_resourceQueue;
@property (copy, nonatomic) NSString *threadLocalKey; // @synthesize threadLocalKey=_threadLocalKey;

- (void).cxx_destruct;
- (void)_commitTransactionStorage:(id)arg1;
- (id)_resourceQueue_objectForKey:(id)arg1 database:(id)arg2;
- (void)_resourceQueue_removeAllObjectsWithDatabase:(id)arg1;
- (void)_resourceQueue_storeObject:(id)arg1 forKey:(id)arg2 database:(id)arg3;
- (id)_transactionStorageWithDatabase:(id)arg1 createIfNecessary:(BOOL)arg2;
- (id)fetchObjectForKey:(id)arg1 database:(id)arg2 error:(id *)arg3 faultHandler:(CDUnknownBlockType)arg4;
- (id)init;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjectsWithDatabase:(id)arg1;
- (void)removeObjectForKey:(id)arg1 database:(id)arg2;

@end

