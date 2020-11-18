//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBackgroundActivityScheduler;
@protocol HMDMobileAssetManagerDelegate, OS_dispatch_queue;

@interface HMDMobileAssetManager : NSObject
{
    BOOL _indexDownloaded;
    id<HMDMobileAssetManagerDelegate> _delegate;
    NSBackgroundActivityScheduler *_scheduler;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (weak, nonatomic) id<HMDMobileAssetManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property BOOL indexDownloaded; // @synthesize indexDownloaded=_indexDownloaded;
@property (readonly, nonatomic) NSBackgroundActivityScheduler *scheduler; // @synthesize scheduler=_scheduler;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

- (void).cxx_destruct;
- (void)_downloadCatalogAndUpdateMetadataIfAble;
- (void)_downloadNewAsset:(id)arg1 availableVersion:(unsigned long long)arg2 newVersion:(unsigned long long)arg3;
- (void)_handleMetadataAssetUpdated;
- (void)_installAvailableAsset:(id)arg1 version:(unsigned long long)arg2;
- (void)_updateMetadata;
- (void)handleMetadataAssetUpdated;
- (id)init;
- (void)purgeAllInstalledAssets;

@end
