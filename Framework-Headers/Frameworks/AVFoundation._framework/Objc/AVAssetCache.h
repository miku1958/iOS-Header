//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVAssetCacheInternal, NSURL;

@interface AVAssetCache : NSObject
{
    AVAssetCacheInternal *_priv;
}

@property (readonly, copy, nonatomic) NSURL *URL;
@property (readonly, nonatomic) long long currentSize;
@property (nonatomic) long long maxEntrySize;
@property (nonatomic) long long maxSize;

+ (id)assetCacheWithURL:(id)arg1;
- (id)allKeys;
- (void)dealloc;
- (void)finalize;
- (id)initWithURL:(id)arg1;
- (id)lastModifiedDateOfEntryForKey:(id)arg1;
- (void)removeEntryForKey:(id)arg1;
- (long long)sizeOfEntryForKey:(id)arg1;

@end
