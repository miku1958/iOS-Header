//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVAssetCache.h>

@class AVManagedAssetCacheInternal;

__attribute__((visibility("hidden")))
@interface AVManagedAssetCache : AVAssetCache
{
    AVManagedAssetCacheInternal *_priv;
}

+ (id)assetCacheWithURL:(id)arg1;
- (id)URL;
- (id)allKeys;
- (long long)currentSize;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (BOOL)isPlayableOffline;
- (id)lastModifiedDateOfEntryForKey:(id)arg1;
- (long long)maxEntrySize;
- (long long)maxSize;
- (id)mediaSelectionOptionsInMediaSelectionGroup:(id)arg1;
- (void)removeEntryForKey:(id)arg1;
- (void)setMaxEntrySize:(long long)arg1;
- (void)setMaxSize:(long long)arg1;
- (long long)sizeOfEntryForKey:(id)arg1;

@end
