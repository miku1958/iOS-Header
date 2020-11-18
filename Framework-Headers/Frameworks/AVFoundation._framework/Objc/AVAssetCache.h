//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AVAssetCache : NSObject
{
}

@property (readonly, nonatomic, getter=isPlayableOffline) BOOL playableOffline;

+ (id)assetCacheWithURL:(id)arg1;
- (id)URL;
- (id)_init;
- (id)allKeys;
- (long long)currentSize;
- (id)initWithURL:(id)arg1;
- (id)lastModifiedDateOfEntryForKey:(id)arg1;
- (long long)maxEntrySize;
- (long long)maxSize;
- (id)mediaSelectionOptionsInMediaSelectionGroup:(id)arg1;
- (void)removeEntryForKey:(id)arg1;
- (long long)sizeOfEntryForKey:(id)arg1;

@end
