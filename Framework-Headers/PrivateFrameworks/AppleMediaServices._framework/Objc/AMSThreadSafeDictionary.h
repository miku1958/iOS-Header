//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AMSThreadSafeDictionary : NSObject
{
    NSMutableDictionary *_backingDictionary;
    NSObject<OS_dispatch_queue> *_backingDictionaryAccessQueue;
}

@property (readonly, copy) NSArray *allKeys;
@property (readonly, copy) NSArray *allValues;
@property (strong, nonatomic) NSMutableDictionary *backingDictionary; // @synthesize backingDictionary=_backingDictionary;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *backingDictionaryAccessQueue; // @synthesize backingDictionaryAccessQueue=_backingDictionaryAccessQueue;

- (void).cxx_destruct;
- (id)init;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;

@end
