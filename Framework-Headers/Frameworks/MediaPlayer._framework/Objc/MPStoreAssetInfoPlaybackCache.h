//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MPStoreAssetInfoPlaybackCache : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableArray *_accessOrderedRequests;
    NSMutableDictionary *_requestToCachedResponse;
}

+ (id)sharedCache;
- (void).cxx_destruct;
- (id)_init;
- (void)addCachedResponse:(id)arg1 forRequest:(id)arg2;
- (id)cachedResponseForRequest:(id)arg1;
- (void)updateForPlaybackOfFileAsset:(id)arg1 fromResponse:(id)arg2;

@end

