//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, _PASAsset, _PASNotificationToken;
@protocol OS_dispatch_queue, SGQPAssetUpdateDelegate;

@interface SGQPAssetManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    _PASAsset *_commonAsset;
    _PASAsset *_currentPrimaryAsset;
    _PASNotificationToken *_currentPrimaryAssetNotificationToken;
    NSString *_currentLocale;
    NSString *_currentABGroup;
    NSObject<SGQPAssetUpdateDelegate> *_delegate;
}

+ (id)chooseABGroupForVendorUUID:(id)arg1 fromGroups:(id)arg2;
+ (id)chooseLocaleIdForCurrentLocale:(id)arg1 availableLocales:(id)arg2;
+ (id)preinstalledPathOfAsset:(id)arg1;
+ (id)thisDeviceVendorUUID;
- (void).cxx_destruct;
- (void)commonAssetReady;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)loadPreinstalledAssetIfNoPrimaryAssetAvailable;
- (void)primaryAssetReady;

@end

