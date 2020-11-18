//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol CNScheduler;

@interface CNCache : NSObject
{
    NSMutableDictionary *_storage;
    id<CNScheduler> _resourceScheduler;
}

@property (readonly, nonatomic) id<CNScheduler> resourceScheduler; // @synthesize resourceScheduler=_resourceScheduler;
@property (readonly, nonatomic) NSMutableDictionary *storage; // @synthesize storage=_storage;

+ (id)atomicCache;
+ (id)cache;
- (void).cxx_destruct;
- (id)allKeys;
- (id)allObjects;
- (id)init;
- (id)initWithResourceScheduler:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)objectForKey:(id)arg1 onCacheMiss:(CDUnknownBlockType)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)performWithResourceLock:(CDUnknownBlockType)arg1;
- (void)removeAllObjects;
- (id)resultWithResourceLock:(CDUnknownBlockType)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;

@end

