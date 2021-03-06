//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameCenterFoundation/GKCache-Protocol.h>

@class GKLinkedList, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface GKThreadsafeCache : NSObject <GKCache>
{
    NSMutableDictionary *_dictionary;
    NSMutableDictionary *_missingEntryQueues;
    GKLinkedList *_cacheList;
    unsigned long long _maxCount;
    unsigned long long _count;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

@property (strong, nonatomic) GKLinkedList *cacheList; // @synthesize cacheList=_cacheList;
@property (nonatomic) unsigned long long count; // @synthesize count=_count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSMutableDictionary *dictionary; // @synthesize dictionary=_dictionary;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long maxCount; // @synthesize maxCount=_maxCount;
@property (strong, nonatomic) NSMutableDictionary *missingEntryQueues; // @synthesize missingEntryQueues=_missingEntryQueues;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // @synthesize syncQueue=_syncQueue;

- (void)dealloc;
- (id)initWithName:(id)arg1 maxCount:(unsigned long long)arg2;
- (id)internalObjectForKey:(id)arg1;
- (void)internalSetObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)objectForKey:(id)arg1 withMissingHandler:(CDUnknownBlockType)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;

@end

