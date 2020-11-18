//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface _LSIconCache : NSObject
{
    BOOL _initialized;
    NSString *_cacheKeySalt;
    NSURL *_cacheURL;
}

@property (copy) NSString *cacheKeySalt; // @synthesize cacheKeySalt=_cacheKeySalt;
@property (strong) NSURL *cacheURL; // @synthesize cacheURL=_cacheURL;
@property (readonly) BOOL initialized; // @synthesize initialized=_initialized;

+ (id)UUIDStringForString:(id)arg1;
+ (id)cacheContainerURL;
+ (id)cacheFolderURL;
+ (long long)currentDisplayGamut;
+ (id)iconCacheSystemVersionFileURL;
- (void).cxx_destruct;
- (id)bundleCacheKeyForBundleIdentifier:(id)arg1 cacheKey:(id)arg2 variant:(int)arg3 options:(int)arg4;
- (id)bundleCacheKeyPrefixForBundleIdentifier:(id)arg1;
- (id)iconDataForKey:(id)arg1 generatorBlock:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithCacheURL:(id)arg1 salt:(id)arg2;

@end

