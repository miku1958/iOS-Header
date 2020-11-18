//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FMReadWriteLock, NSMutableDictionary;

@interface FMConcurrentMutableDictionary : NSObject
{
    NSMutableDictionary *_underlyingDictionary;
    FMReadWriteLock *_lock;
}

@property (readonly, nonatomic) unsigned long long count;
@property (strong, nonatomic) FMReadWriteLock *lock; // @synthesize lock=_lock;
@property (strong, nonatomic) NSMutableDictionary *underlyingDictionary; // @synthesize underlyingDictionary=_underlyingDictionary;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)nativeDictionary;
- (id)objectForKey:(id)arg1;
- (id)objectForKey:(id)arg1 withConstructor:(CDUnknownBlockType)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)popObjectforKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (id)replaceObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;

@end

