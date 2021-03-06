//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface TVAssetLibrary : NSObject
{
    NSObject<OS_dispatch_queue> *assetWriteQueue;
    NSObject<OS_dispatch_queue> *assetAccessQueue;
    NSString *_cachePath;
    NSMutableArray *_registeredGroups;
}

@property (copy, nonatomic) NSString *cachePath; // @synthesize cachePath=_cachePath;
@property (strong, nonatomic) NSMutableArray *registeredGroups; // @synthesize registeredGroups=_registeredGroups;

+ (void)_initializeAssetLibraryWithCachePath:(id)arg1 screensaverCache:(BOOL)arg2 purgeCacheOnLoad:(BOOL)arg3;
+ (void)initializeAssetLibraryWithCachePath:(id)arg1;
+ (void)initializeAssetLibraryWithCachePath:(id)arg1 purgeCacheOnLoad:(BOOL)arg2;
+ (void)intializeScreensaverSharedAssetLibrary;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_setImageAsset:(id)arg1 forKey:(id)arg2 inGroupOfType:(long long)arg3 expiryDate:(id)arg4 overWrite:(BOOL)arg5 tags:(id)arg6;
- (id)assetExpiryDateForKey:(id)arg1 inGroupOfType:(long long)arg2;
- (id)assetForKey:(id)arg1 inGroupOfType:(long long)arg2;
- (id)assetPathForKey:(id)arg1 inGroupOfType:(long long)arg2;
- (id)assetPathsForGroupOfType:(long long)arg1;
- (id)cachePathForGroupOfType:(long long)arg1;
- (id)groupWithGroupType:(long long)arg1;
- (id)initWithCachePath:(id)arg1 screensaverCache:(BOOL)arg2 purgeCacheOnLoad:(BOOL)arg3;
- (id)keyForAssetWithTags:(id)arg1 inGroupOfType:(long long)arg2;
- (void)purgeAssetsInGroupOfType:(long long)arg1;
- (void)registerGroup:(id)arg1;
- (void)removeAssetForKey:(id)arg1 inGroupOfType:(long long)arg2;
- (void)setImageAsset:(id)arg1 forKey:(id)arg2 inGroupOfType:(long long)arg3 expiryDate:(id)arg4;
- (void)setImageAsset:(id)arg1 forKey:(id)arg2 inGroupOfType:(long long)arg3 expiryDate:(id)arg4 overWrite:(BOOL)arg5;
- (void)setImageAsset:(id)arg1 forKey:(id)arg2 inGroupOfType:(long long)arg3 expiryDate:(id)arg4 tags:(id)arg5;
- (void)setImageAssetFromPath:(id)arg1 forKey:(id)arg2 inGroupOfType:(long long)arg3 expiryDate:(id)arg4;
- (void)setImageAssetFromPath:(id)arg1 forKey:(id)arg2 inGroupOfType:(long long)arg3 expiryDate:(id)arg4 tags:(id)arg5;
- (void)unRegisterGroup:(long long)arg1;
- (void)updateAssetsInGroupOfType:(long long)arg1;

@end

