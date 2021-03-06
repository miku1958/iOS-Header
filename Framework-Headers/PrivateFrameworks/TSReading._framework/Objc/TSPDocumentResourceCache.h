//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSURL;
@protocol OS_dispatch_queue;

@interface TSPDocumentResourceCache : NSObject
{
    NSURL *_cacheURL;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_entries;
    long long _maxCacheSizeInBytes;
}

@property (nonatomic) long long maxCacheSizeInBytes; // @synthesize maxCacheSizeInBytes=_maxCacheSizeInBytes;

+ (id)defaultCacheURL;
+ (id)sharedCache;
- (void).cxx_destruct;
- (id)URLForDocumentResourceDigestString:(id)arg1;
- (BOOL)beginDocumentResourceAccessForDigestString:(id)arg1;
- (BOOL)cacheDocumentResourceDigestString:(id)arg1 extension:(id)arg2 sourceURL:(id)arg3 fileSize:(long long)arg4 wasDownloaded:(BOOL)arg5;
- (void)clearCache;
- (void)endDocumentResourceAccessForDigestString:(id)arg1;
- (id)entryForDigestString:(id)arg1;
- (void)enumerateEntriesFromCacheURLWithHandler:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithCacheURL:(id)arg1;
- (void)reloadEntries;
- (void)shrinkCache;
- (void)shrinkCacheWithMaxCacheSizeInBytes:(long long)arg1;

@end

