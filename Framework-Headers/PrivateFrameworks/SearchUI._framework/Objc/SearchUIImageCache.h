//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache;

@interface SearchUIImageCache : NSObject
{
    NSCache *_imageCache;
}

@property (strong) NSCache *imageCache; // @synthesize imageCache=_imageCache;

+ (void)cacheTLKImage:(id)arg1 forSFImage:(id)arg2;
+ (id)cachedTlkImageForSFImage:(id)arg1;
+ (id)sharedCache;
- (void).cxx_destruct;
- (void)appIconImageDidChange:(id)arg1;
- (void)clearCacheAndPostNotificationForChangedIconForBundleIdentifier:(id)arg1;
- (void)dateDidChange;
- (id)init;

@end
