//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableDictionary;

@interface MFWeakObjectCache : NSObject
{
    CDUnknownBlockType _block;
    NSMutableDictionary *_dictionary;
    NSLock *_lock;
}

- (void)dealloc;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (id)objectForKey:(id)arg1;
- (id)objectForKey:(id)arg1 shouldGenerate:(BOOL)arg2 wasCached:(BOOL *)arg3;
- (id)objectForKey:(id)arg1 wasCached:(BOOL *)arg2;
- (void)removeObjectForKey:(id)arg1;
- (id)weakObjectCacheRefForKey:(id)arg1;

@end

