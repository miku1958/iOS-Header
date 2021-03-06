//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DataDeliveryServices/DDSAssetQueryResultCaching-Protocol.h>
#import <DataDeliveryServices/NSCacheDelegate-Protocol.h>

@class NSCache, NSString;
@protocol OS_dispatch_queue;

@interface DDSAssetQueryResultCache : NSObject <NSCacheDelegate, DDSAssetQueryResultCaching>
{
    NSCache *_assetsByQueryCache;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (strong, nonatomic) NSCache *assetsByQueryCache; // @synthesize assetsByQueryCache=_assetsByQueryCache;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (void)cacheAssets:(id)arg1 forQuery:(id)arg2;
- (id)cachedAssetsForQuery:(id)arg1;
- (void)clearCache;
- (id)init;

@end

