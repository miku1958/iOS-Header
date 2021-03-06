//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface CKMultiDict : NSObject
{
    NSObject<OS_dispatch_queue> *_lockQueue;
    unsigned long long _count;
    NSMutableDictionary *_dictionary;
}

@property (strong, nonatomic) NSMutableDictionary *dictionary; // @synthesize dictionary=_dictionary;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *lockQueue; // @synthesize lockQueue=_lockQueue;

- (void).cxx_destruct;
- (id)allKeys;
- (unsigned long long)count;
- (id)dequeueObjectForKey:(id)arg1;
- (id)description;
- (void)enqueueObject:(id)arg1 forKey:(id)arg2;
- (id)headObjectForKey:(id)arg1;
- (id)init;
- (id)objectsForKey:(id)arg1;
- (id)peekObjectForKey:(id)arg1;
- (id)popObjectForKey:(id)arg1;
- (void)pushObject:(id)arg1 forKey:(id)arg2;
- (void)removeAllObjects;
- (void)removeObjectsForKey:(id)arg1;

@end

