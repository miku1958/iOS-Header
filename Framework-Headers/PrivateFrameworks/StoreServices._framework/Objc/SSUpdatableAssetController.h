//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL, SSUpdatableAssetCacheManager, SSUpdatableAssetManifest, SSXPCConnection;
@protocol OS_dispatch_queue;

@interface SSUpdatableAssetController : NSObject
{
    NSString *_bundledManifestVersion;
    SSUpdatableAssetManifest *_bundledManifest;
    SSUpdatableAssetManifest *_currentManifest;
    SSUpdatableAssetCacheManager *_cacheManager;
    SSXPCConnection *_connection;
    NSURL *_manifestURL;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSURL *_bundledManifestURL;
}

@property (readonly, nonatomic) NSURL *bundledManifestURL; // @synthesize bundledManifestURL=_bundledManifestURL;
@property (readonly, nonatomic) SSUpdatableAssetManifest *currentManifest;
@property (copy, nonatomic) NSURL *manifestURL; // @synthesize manifestURL=_manifestURL;
@property (readonly, nonatomic) SSUpdatableAssetManifest *newestCachedManifest;

- (void).cxx_destruct;
- (id)_bundledManifest;
- (id)_bundledManifestVersion;
- (id)_connection;
- (void)clearCache:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithBundledManifestURL:(id)arg1;
- (id)initWithBundledManifestURL:(id)arg1 clientIdentifier:(id)arg2;
- (void)refreshCachedManifest:(CDUnknownBlockType)arg1;

@end

