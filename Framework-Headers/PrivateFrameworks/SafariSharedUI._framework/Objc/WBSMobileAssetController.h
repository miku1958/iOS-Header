//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariSharedUI/WBSMobileAssetControllerProtocol-Protocol.h>

@class NSDate, NSString, WBSPeriodicActivityScheduler;
@protocol OS_dispatch_queue, WBSMobileAssetControllerDelegate;

@interface WBSMobileAssetController : NSObject <WBSMobileAssetControllerProtocol>
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    WBSPeriodicActivityScheduler *_scheduler;
    id<WBSMobileAssetControllerDelegate> _delegate;
    double _updateInterval;
    NSString *_assetType;
    NSString *_updateDateDefaultsKey;
}

@property (readonly, copy, nonatomic) NSString *assetType; // @synthesize assetType=_assetType;
@property (weak) id<WBSMobileAssetControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) NSDate *lastUpdateDate;
@property (readonly, copy, nonatomic) NSString *updateDateDefaultsKey; // @synthesize updateDateDefaultsKey=_updateDateDefaultsKey;
@property (readonly, nonatomic) double updateInterval; // @synthesize updateInterval=_updateInterval;

- (void).cxx_destruct;
- (void)_downloadIfNecessary:(CDUnknownBlockType)arg1;
- (void)_queryAssets:(CDUnknownBlockType)arg1;
- (void)_queryMostRecentAsset:(CDUnknownBlockType)arg1;
- (void)_update;
- (void)_updateCatalog:(CDUnknownBlockType)arg1;
- (id)initWithMobileAssetType:(id)arg1 updateDateDefaultsKey:(id)arg2 updateInterval:(double)arg3 minimumDelay:(double)arg4;
- (id)initWithMobileAssetType:(id)arg1 updateInterval:(double)arg2 minimumDelay:(double)arg3;
- (void)queryURL:(CDUnknownBlockType)arg1;

@end

