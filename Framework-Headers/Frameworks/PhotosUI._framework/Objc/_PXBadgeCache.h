//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface _PXBadgeCache : NSObject
{
    NSDictionary *_thumbnailCache;
}

+ (id)sharedCacheForStyle:(long long)arg1;
+ (id)sharedCacheForStyleBigShadowed;
+ (id)sharedCacheForStyleSmallShaded;
- (void).cxx_destruct;
- (id)_debugBadgeWithColors:(id)arg1;
- (id)_debugImageForBadgeType:(unsigned long long)arg1;
- (id)imageForBadgeType:(unsigned long long)arg1;
- (id)imageForCacheKey:(unsigned long long)arg1;
- (struct UIOffset)imageOffsetForBadgeType:(unsigned long long)arg1;
- (id)initWithStyle:(long long)arg1;

@end

