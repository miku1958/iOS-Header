//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MFWeakObjectCache;
@protocol NSCopying;

__attribute__((visibility("hidden")))
@interface _MFWeakObjectCacheRef : NSObject
{
    id<NSCopying> _key;
    MFWeakObjectCache *_cache;
}

@property (weak, nonatomic) MFWeakObjectCache *cache; // @synthesize cache=_cache;
@property (copy, nonatomic) id<NSCopying> key; // @synthesize key=_key;

- (void).cxx_destruct;
- (void)dealloc;

@end

