//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol NSCacheDelegate;

@interface NSCache : NSObject
{
    id _delegate;
    void *_private[5];
    void *_reserved;
}

@property unsigned long long countLimit;
@property id<NSCacheDelegate> delegate;
@property BOOL evictsObjectsWithDiscardedContent;
@property (copy) NSString *name;
@property unsigned long long totalCostLimit;

- (id)allObjects;
- (void)dealloc;
- (BOOL)evictsObjectsWhenApplicationEntersBackground;
- (void)finalize;
- (id)init;
- (unsigned long long)minimumObjectCount;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setEvictsObjectsWhenApplicationEntersBackground:(BOOL)arg1;
- (void)setMinimumObjectCount:(unsigned long long)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3;

@end

