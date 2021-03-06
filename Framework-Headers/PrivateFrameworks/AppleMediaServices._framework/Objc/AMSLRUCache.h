//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AMSDoubleLinkedList, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface AMSLRUCache : NSObject
{
    unsigned long long _maxSize;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_backingDictionary;
    AMSDoubleLinkedList *_backingList;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property (strong, nonatomic) NSMutableDictionary *backingDictionary; // @synthesize backingDictionary=_backingDictionary;
@property (strong, nonatomic) AMSDoubleLinkedList *backingList; // @synthesize backingList=_backingList;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) unsigned long long maxSize; // @synthesize maxSize=_maxSize;

- (void).cxx_destruct;
- (void)_addObject:(id)arg1 forKey:(id)arg2;
- (unsigned long long)_count;
- (void)_removeObjectForKey:(id)arg1;
- (id)allObjectsAndKeys;
- (id)description;
- (id)init;
- (id)initWithMaxSize:(unsigned long long)arg1;
- (id)objectForKey:(id)arg1;
- (id)objectForKey:(id)arg1 withCreationBlock:(CDUnknownBlockType)arg2;
- (void)removeAllObjects;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end

