//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, TSCH3DDictionaryOfDictionary;

@interface TSCH3DSceneRenderCache : NSObject
{
    NSMutableSet *mEnabledKeys;
    TSCH3DDictionaryOfDictionary *mCache;
}

+ (id)cache;
+ (id)cacheFromScene:(id)arg1;
- (BOOL)cacheEnabledForKey:(id)arg1;
- (id)cacheObjectForKey:(id)arg1 cacheID:(id)arg2 created:(BOOL *)arg3 ifAbsent:(CDUnknownBlockType)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (void)enableCache:(BOOL)arg1 forKey:(id)arg2;
- (id)init;
- (void)setCacheObject:(id)arg1 forKey:(id)arg2 cacheID:(id)arg3;

@end

